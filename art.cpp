#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m,p,q;
	int a[10][10],b[10][10],c[10][10];
	cout<<"ENTER THE NO OF ROWS AND COLUMNS OF A MATRIX :  "<<endl;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"eneter row "<<i+1<<" column  "<<j+1<<endl;
			cin>>a[i][j];
		}
	}
		cout<<"ENTER THE NO OF ROWS AND COLUMNS OF A MATRIX :  "<<endl;
	cin>>p;
	cin>>q;
		for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			cout<<"eneter row"<<i+1<<" column  "<<j+1<<endl;
			cin>>b[i][j];
		}
	}
	
	
	cout<<" MATRIX A is  :  "<<endl;
	
	for(int i=0;i<n;i++){
		cout<<" [ ";
		for(int j=0;j<m;j++){
		
			cout<<a[i][j]<<"   ";
	if(j==m-1)
			{
				cout<<" ] ";
				cout<<endl;
			}
		}
	}	
		cout<<" MATRIX B is  :  "<<endl;
	for(int i=0;i<p;i++){
		cout<<" [ ";
		for(int j=0;j<q;j++){
		
			cout<<b[i][j]<<"   ";
			if(j==q-1)
			{
				cout<<" ] ";
				cout<<endl;
			}
		}
	}
	int  sum;
	if(m==p){
		for(int i=0;i<n;i++){
			for(int j=0;j<q;j++){
				for(int k=0;k<p;k++){
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
	}
	
	cout<<"THE MULTIPLICATION OF THE TWO IS:"<<endl;
	for(int i=0;i<n;i++){
		cout<<" [ ";
		for(int j=0;j<q;j++){
			cout<<c[i][j]<<"  ";
			if(j==q-1){
				cout<<" ] ";
				cout<<endl;
			}
		}
	}
	return 0;
}
