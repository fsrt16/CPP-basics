#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m,p,q;
	int a[n][m],b[p][q];
	cout<<"ENTER THE NO OF ROWS AND COLUMNS OF A MATRIX :  "<<endl;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[n][m];
		}
	}
		cout<<"ENTER THE NO OF ROWS AND COLUMNS OF A MATRIX :  "<<endl;
	cin>>p>>q;
		for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			cin>>b[p][q];
		}
	}
	
	
	cout<<" MATRIX A is  :  "<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j==0){
				cout<" [ ";
			}
			cout<<a[n][m];
		for(j==m-1)
			{
				cout<<" ] ";
				cout<<endl;
			}
		}
	}	
	
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			if(j==0){
				cout<" [ ";
			}
			cout<<b[p][q];
			for(j==q-1)
			{
				cout<<" ] ";
				cout<<endl;
			}
		}
	}
	return 0;
}
