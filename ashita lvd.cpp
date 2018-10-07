#include<iostream>
#include<string>
using namespace std;
int main()
{
	int ma[50][50],square[50][50],n,m;
	cout<<"ENTER THE NO OF rows  and columns :  "<<endl;
	cin>>n>>m;
int sum;
for(int i=0;i<n;i++){
	
	for(int j=0;j<m;j++)
{
	cout<<"ENTER THE LEMENT row "<<i+1<<"  cloumn  "<<j+1<<endl;
	cin>>ma[i][j];
	square[i][j]=ma[i][j]*ma[i][j];
}
for(int i=0;i<n;i++){
	cout<<" [ ";
	for(int j=0;j<m;j++){
		cout<<square[i][j];
		if(j==m-1){
			cout<<" ] ";
			cout<<endl;
		}
	}
}
int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum=sum+ma[i][j];
		}
	}
	
cout<<"sum is"<<sum;
	return 0;
}
}
