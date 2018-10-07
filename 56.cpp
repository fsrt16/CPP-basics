#include <iostream>
using namespace std;
int main() {int a;
	cout<<"eneter a no. : "<<endl;
	cin>>a;
	int u=(a-1)/2,x=a-2;
	int o=(a+x)/2;
	for(int i=1;i<=a;i=i+2)
	{ for(int h=1;h<=u;h++){
		cout<<"  ";
	}
	u=u-1;
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
	cout<<endl;
}
for(int i=a-2;i>=1;i=i-2)

	{for(int h=a-o;h>=1;h--){
		cout<<"  ";
	}
	o=o-1;
		for(int j=i;j>=1;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
