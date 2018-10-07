#include <iostream>
using namespace std;
int main() {
int n , t,b=0,e=0,c=0,c1=0,a=0;
	cout<<"Enetr a no. :"<<endl;
	cin>>n;
	t=n;
	b=n%10;
	n=n/10;
	cout<<b<<endl;
	while(n!=0){
		e=e*10+n%10;
		if(e==0){
			c++;
		}
		n=n/10;
		c1++;
	}
	cout<<e<<endl;
	c=e%10;
	cout<<c<<endl;
	n=e/10;
	while(n!=0){
		a=a*10+n%10;
		n=n/10;
	}
	cout<<a<<endl;
	for(int i=1;i<=c;i++){
		a=a*10;
	}
	for(int k=1;k<=(c1+1);k++){
	b=b*10;
		}
	b=b+10*a;
	b=b+10*c;
	b=b/10;
	
	cout<<b<<endl;
	return 0;
}
