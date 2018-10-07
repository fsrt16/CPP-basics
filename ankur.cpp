#include <iostream>
#include<cmath>
using namespace std;
int main() {int a,b,c;
cout<<"enter the a b c as per ax^2+bx+c=0 "<<endl;
cin>>a>>b>>c;
float h,u,d;
d=b*b-4*a*c;
h=-1*b+pow(d,0.5);
u=-1*b-pow(d,0.5);
cout<<h/(2*a)<<endl;
cout<<u/(2*a)<<endl;
	return 0;
}
