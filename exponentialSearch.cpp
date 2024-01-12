//already sorted array, ek part me search element karne se time complexity better ho jayegi better then linear and binary search.
//some loop kanr ke baad (i *= 2) ke baad binary search in small part of array.
//time complexity = O(log(2^(logm)/2))  ---> m is end index till i goes 
//application:
    // 1. search in infinite array(unbounded array)[pata nhi "end" kya he]
    // 2. better than binary search (x is near begining)
// leetcode question : koko eat banana
// brute force ----> if(a[i]>x) break; then a[i] == x; ans == i; i++;

#include <iostream>
using namespace std;

int bs(int a[], int start, int end, int x){
    while(start <= end){
        int mid = start + (end-start)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] < x){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}

int expSearch(int a[], int n, int x){

//if we do not know the end this exponential search we have to do
    int i=0, j=1;
    while(a[j] < x){
        i=j;
        j = j*2;
    }
    return bs(a, i, j, x);

//if we know the end we can use this exponential search
    if(a[0] == x) return 0;
    
    int i =1;
    while(i<n && a[i] <= x){
        i=i*2;
    } 
    return bs(a, i/2, min(i,n-1), x);
}

int main()
{
    int a[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(a) / sizeof(int);
    int x = 13;
    int ans = expSearch(a, n, x);
    cout << ans << endl;
  return 0;
}