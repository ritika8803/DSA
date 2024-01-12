#include <iostream>
#include <vector>
using namespace std;

int OddOcuurence (vector<int> arr){
    int ans;
    int s = 0;
    int e = arr.size() -1;
    int mid = s + (e-s)/2;

    while (s <= e){

    //babbar solution:
        // if(s == e){
        //     return s;
        // }
        // if ( mid % 2 = 0){
        //     if (arr[mid] == arr[mid + 1]){
        //     s = mid + 2;//right
        //     }
        //     else{
        //         e = mid;//kya pata ye mera answer ho 
        //     }
        // }
        // else{
        //     if (arr[mid] == arr[mid - 1]){
        //     s = mid + 1;//right
        //     }
        //     else{
        //         e = mid - 1;//kya pata ye mera answer ho 
        //     }
        // }

    //My Solution:              
        if ( mid % 2 == 1){
            mid--;
        }
        if (arr[mid] == arr[mid + 1]){
            s = mid + 2;//right
        }
        else{
            e = mid - 2;//left
        }
        mid = s + (e-s)/2;
    }
   return arr[s];
}

int main()
{
    vector<int> arr{1,1,2,2,3,3,4,4,3,3,45,600,600,4,4};
    int ans = OddOcuurence(arr);
    cout << "ans is "<< ans << endl;
  return 0;
}