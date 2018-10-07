
#include <iostream>

using namespace std;
int main() {int n, sum=0;
	cout<<"enter a no.:"<<endl;
	cin>>n;
	cout<<"1"<<endl;
	for(int i=1;i<=n;i++){
		if(n%i==0){int count=0;
			for(int j=1;j<=i;j++){
				if(i%j==0)
				{
				count++;}	
			}
			if(count==2){cout<<i<<endl;
			sum=sum+i;
			}
			
		}
	}
	cout<<sum+1;
	return 0;
}
