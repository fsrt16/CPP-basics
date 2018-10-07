#include<iostream>
using namespace std;

void pat(int n, int i,int j){
	
if(i<=n){
			if(j<=i)
			{
		cout<<"*";
		j++;
		pat(n,i,j);
		}
		else{
			cout<<endl;
			j=1;
				i++;
					pat(n,i,j);
		}
		}

} 

int main(){
	int i=1,n;
	int j=1;
	cout<<"enert a no. : ";
	cin>>n;
	 pat(n,i,j);

return 0; 
}
