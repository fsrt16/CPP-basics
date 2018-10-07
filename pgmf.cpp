#include <iostream>
using namespace std;
int main() {
int a,b,min,c;
	cout<<"enter two no."<<endl;
	cin>>a>>b;
	if(a>b){
		min=b;
	}
	else{
		min=a;
	}
	for(int i=1;i<=min;i++){
		if(a%i==0&&b%i==0){c=i;
		}
	}
	
	cout<<"HCF OF THE GIVEN NO is: "<<c<<endl;
	cout<<"LCM of the given no is:"<<(a*b)/c<<endl;
	return 0;
}
