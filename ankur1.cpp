#include<iostream>
using namespace std;
int main(){
    int a,b ,min=0,c=0;
	cout<<"enter two no. : "<<endl;
	cin>>a>>b;
	if(a>b)
	{
	min=b;
	}
	else
	{
	min=a;
	}
	for(int i=1;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
		{
			c=i;
		}
	}
	cout<<"the hcf of the given no is: "<<c;
return 0;
}
