#include <iostream>
using namespace std;
int main() { int n ,m,o,p,j=0;
	cout<<"enter the no of rows  of matrix 1 :  "<<endl;
	cin>>n;
	cout<<"enter the no of column  of matrix 1 :  "<<endl;
	cin>>m;
	int a[n][m],b[o][p];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cout<<"enter the a["<<i+1<<"]["<<j+1<<"] : "<<endl;
		cin>>a[i][j];
	}
	
	}
	
	
	cout<<"enter the no of rows  of matrix 2 :  "<<endl;
	cin>>o;
	cout<<"enter the no of column  of matrix 2 :  "<<endl;
	cin>>p;
	
	for(int i=0;i<o;i++){
		for(int j=0;j<p;j++){
		cout<<"enter the a["<<i+1<<"]["<<j+1<<"] : "<<endl;
		cin>>b[i][j];
	}
	
	}
int s[n][p];
if(m==o){
	for(int i=0;i<n;i++){
		for(j=0;j<p;j++){
			s[i][j]=0;
			for(int k=0;k<m;k++){
				s[i][j]+=a[i][j]*b[k][j];
			}
		}
	}
}
else{
	cout<<"wrong input'";
	
	
}
for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			cout<<s[i][j]<<"  ";
		
			}
	
	}

	
	
	

	
	
	return 0;
}
