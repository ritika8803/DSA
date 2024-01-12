#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int>arr){
    int ans = 0;

  for(int i =0; i < arr.size(); i++){
    ans = ans ^ arr[i] ;

  }
  return ans;
}

int main()
{

//UNIQUE ELEMENT
//   int n;
//   cout << "enter the size of arr" <<endl;
//   cin >> n;

//   vector<int>arr(n);
//   cout << "enter the elements :" << endl;
//   for(int i =0; i < arr.size(); i++){
//     cin >> arr[i] ;
//   }

//   int uniqueElement = findUnique(arr);
//   cout <<"unique elements are : " <<uniqueElement << endl;

//UNION OF 2 ARRAY WITH SORTED ARRAY

// int n;
// cout << "enter the size of array 1"<< endl;
// cin >> n;
// vector<int>arr(n);
// cout <<"enter the elements of array 1"<<endl;
// for(int i =0; i <arr.size() ; i++){
//     cin >> arr[i];
// }
// int m;
// cout << "enter the size of array 2"<< endl;
// cin >> m;
// vector<int>brr(m);
// cout <<"enter the elements of array 2"<<endl;
// for(int i =0; i <brr.size() ; i++){
//     cin >> brr[i];
// }

// vector<int>ans;
// for(int i =0; i<arr.size();i++){
//     ans.push_back(arr[i]);
// }
// for(int i =0; i<brr.size();i++){
//     ans.push_back(brr[i]);
// }
// cout << "printing ans array" << endl;
//     sort(ans.begin(),ans.end());
//     for(auto x:ans)
//     cout << x << " "; 

//INTERSECTION OF ARRAY 

// vector<int> arr{1,2,3,4,6,8};
// vector<int> brr{3,4,9,10};

// vector<int> ans;
// for(int i =0; i <arr.size();i++){
//     int element= arr[i];

//     for(int j=0; j< brr.size(); j++){
//         if (element == brr[j]){
//             //mark
//             brr[i]=-1;
//             ans.push_back(element);
//         }
//     }
// }

// for(auto value : ans){
//     cout << value << " ";
// }

//PAIRVISE SUM

// int sum = 100;
// vector<int> arr{10,20,30,40,60,70,80,90};

// for (int i =0;i < arr.size();i++){
//     for(int j = i+1; j < arr.size(); j++){
//         if ((arr[i] + arr[j]) == sum){
//             cout << "(" << arr[i] << "+" << arr[j] << ")"<<endl;
//         }
//     }
// }

//TRIPLE SUM 

// int sum = 80;
// vector<int> arr{10,20,30,40,60,70,80,90};

// for (int i =0;i < arr.size();i++){
//     for(int j = i+1; j < arr.size(); j++){
//       for(int k = j+1; k < arr.size(); k++){
//          if ((arr[i] + arr[j] + arr[k]) == sum){
//             cout << "(" << arr[i] << "+" << arr[j] <<"+" << arr[k] << ")"<<endl;
//       }
//         }
//     }
// }

//F NUMBERS SUM 

// int sum = 100;
// vector<int> arr{10,20,30,40,60,70,80,90};

// for (int i =0;i < arr.size();i++){
//     for(int j = i+1; j < arr.size(); j++){
//       for(int k = j+1; k < arr.size(); k++){
//         for(int l = k+1; l < arr.size(); l++)
//          if ((arr[i] + arr[j] + arr[k] + arr[l]) == sum){
//             cout << "(" << arr[i] << "+" << arr[j] <<"+" << arr[k] <<"+" << arr[l] << ")"<<endl;
//       }
//         }
//     }
// }

//SORT 0'S AND 1'S

vector<int> arr{0,1,0,1,1,0,1,0,1,1};
int start=0;
int end =arr.size() - 1;
int i=0;

while(i <= end ){
  if(arr[i] == 0){
    swap(arr[i],arr[start]);
    i++;
    start++;
    
  }
   if(arr[i] == 1){
    swap(arr[i],arr[end]);
    end--;
  }
}

for(auto value:arr){
  cout << value << " ";
}
  return 0;
}