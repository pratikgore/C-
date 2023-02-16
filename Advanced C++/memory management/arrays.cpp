#include<bits/stdc++.h>
using namespace std ;
 
 void _1Darray () {
      int *arr = new int[7];
      for (int i = 0; i < 7; i++) {
          *(arr+i) = i ;
      }
      for (int i = 0; i < 7; i++)
     {
          cout<<*(arr + i) << endl;
      }
      delete []arr;
      for (int i = 0; i < 7; i++)
     {
     
          *(arr + i) = i;
          cout << *(arr + i) << endl;
      }
 }
int main()
{

      int arr[2][3] = {1, 2, 3, 4, 5, 6};
      for (int i = 0; i < 2; i++) {
          for (int j = 0; j<3 ; j++ ) {
              cout << arr[i][j] << " ";
          }
          cout << "\n";
      }
          return 0;
}