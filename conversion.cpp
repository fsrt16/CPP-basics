#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
char n[100] ;
	int a,b,e=0,d;
	cout<<"Eneter the converson from:  "<<endl;
	cin>>a;
	cout<<"eneter the number to convert : "<<endl;
	cin>>n[100];
	cout<<"enter the convertd form of no pow( decimal binary octal or hexadecimal in no): "<<endl;
	cin>>b;
	int c=sizeof(n);
	cout<<c<<endl;
	switch(a){
	case 2:{
		for(int i=0;i<c;i++){
		e=e+(a%10)*pow(2,i);	
		}
		break;
	}
	case 4:{	for(int i=0;i<c;i++){
		e=e+(a%10)*pow(4,i);	
		}
		break;
	}
	case 8:{	for(int i=0;i<c;i++){
		e=e+(a%10)*pow(8,i);	
		}
		break;
	}
	case 16:{	for(int i=0;i<c;i++){
		e=e+(a%10)*pow(16,i);	
		}
		break;
	}	
	}
	cout<<e<<endl;
	return 0;
}
