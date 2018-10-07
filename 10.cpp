#include <iostream>
using namespace std;
int main() {
int a,t;
	cout<<" cout no of lines: "<<endl;
	cin>>a;
	t=a;
	cout<<t<<endl;
	while(a!=0){for(int k=a;k<=t-a;k++){
			cout<<" ";
		}
		

	for(int i=a;i>=1;i--){
		cout<<"1";
		for(int j=(i-1);j>=1;j--)
	{cout<<"0";
	break;
	}
}
cout<<endl;
a--;
	}
	return 0;
}
