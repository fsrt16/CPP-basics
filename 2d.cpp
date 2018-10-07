#include <iostream>
using namespace std;
int main()
{
	int a[10][3], i,j, sm=0,b[10];
	for(i=0;i<5;i++)
	{
		cout<<" enter the marks of student  "<<i+1<<endl;
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"given mtrix is :  "<<endl;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
			if(j==2){
				cout<<endl<<endl;
			}
		}
		
	}
	cout<<"total marks and average are as follows :__:"<<endl;
	for(i=0;i<5;i++){
		sm=0;
		for(j=0;j<3;j++){
			sm=sm+a[i][j];
			
		}
		cout<<"total of  : "<<i+1<<" "<<sm<<endl;
		cout<<"average  is : "<<i+1<<" "<<sm/3<<endl;
	b[i]=sm/3;
	
	}
		int avg=0;
	
	for(i=0;i<5;i++){
	
		avg+=b[i];
	}
	
	cout<<"class avg = "<<avg/5;
	
	return 0;
}
	
	

