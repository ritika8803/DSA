#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
   int arr[] = {2,3,4,5,6,1};
   int mini = INT_MAX;
   int size = 6;

   for (int i =0; i < size ; i++){
    if (arr[i] < mini ){
        mini = arr[i];
    }
   }

   cout << " minimum number :" << mini << endl;
  return 0;
}