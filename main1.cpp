#include <iostream>
using namespace std;
int main()
{ int  b=0 , c=1,d=0;
int a;
	cout<<"enter the no. "<<endl;
	cin>>a;
	int t;
	t=a;
	while(a!=0){ b=0;
		b=a%10;
		for(int j=1;j<=b;j++)
		{
			c=c*j;
		}
		d=d+c;
		a=a/10;
	}
	if(d==t){
		cout<<"krishnamuthy number";
	}
	else{
		cout<<"noy=t a krishnamurthy number";
	}
	
	return 0;
}
