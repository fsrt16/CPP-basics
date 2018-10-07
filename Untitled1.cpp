#include<iostream>
using namespace std;

	int reverse(int n,int sum)
	{
	int r;
	if(n>0)
	{
		sum=r+sum*10;
		reverse(n/10,sum);
		}	
		return sum;
	}
int main()
{   int n,y,sum=0;
	cout<<"Enter any number";
	cin>>n;
	y=reverse(n,sum);
	cout<<y;
	return 0;
}

