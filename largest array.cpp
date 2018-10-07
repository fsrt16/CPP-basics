#include <iostream>
using namespace std;
int main()
{    
    int a[10][10], trans[10][10], r, c, i, j;    
    cout << "Enter rows and columns of matrix: ";    
    cin >> r >> c;
// Storing element of matrix entered by user in array a[][].    
    cout << endl << "Enter elements of matrix: " << endl;    
   for(i = 0; i < r; ++i)   {
   for(j = 0; j < c; ++j)    
   {        
        cout << "Enter elements a" << i + 1 << j + 1 << ": ";        
        cin >> a[i][j];    
    }
}

int largest , smallest;
largest=a[0][0];
smallest=a[0][0];
  for(i = 0; i < r; ++i)   {
   for(j = 0; j < c; ++j)    
   {        
       if(a[i][j]>largest){
       	largest=a[i][j];
	   }  
	   else if (a[i][j]<smallest){
	   	smallest=a[i][j];
	   }
    } 
}

cout<<"the largest is : "<<largest<<endl;
cout<<"the smallest is : "<<smallest;
return 0 ;
}

