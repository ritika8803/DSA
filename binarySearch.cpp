#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start =0;
    int end = size-1;

    // int mid = (start+end) / 2; ---> //interger overflow ho sakta he 
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            // move left
            end = mid -1;
        }
        else{
            //move right
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    // int arr[] = {2,4,6,8,10,12,14,16};
    // int size = 8;
    // int target = 20;

    // int indexOfTarget = binarySearch(arr, size, target);

    // if(indexOfTarget == -1){
    //     cout << "target not found" << endl;
    // }
    // else{
    //     cout << "target found at " << indexOfTarget << endl;
    // }


// predefined binarySearch 
   vector<int> v{1,2,3,4,5,6};
   int arr[] = {1,2,3,4,5,6,7};
   int size = 7;

   //if we want apply it on array 
   if(binary_search (arr, arr+size, 3)){
    cout << "FOUND" << endl;
   }
   else{
    cout << "NOT FOUND. " << endl;
   }
 
 // if we want to apply on a vector 
   if(binary_search (v.begin(), v.end(), 3)){
    cout << "FOUND" << endl;
   }
   else{
    cout << "NOT FOUND. " << endl;
   }

  return 0;
}


//time complexity = kth interation chal rahi he so 
//time complexity is given below for the above code 
// n/2^k = 1
// n = 2^k 
// logn = k
// O(k) = O(logn)