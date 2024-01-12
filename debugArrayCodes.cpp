// #include <iostream>
// using namespace std;

// int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    for(int i = 0; i < 5; i++) {
//       cout << arr[i] << " ";
//    }  
//    return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int majorityElement(vector<int>& nums, int n) {
//     int candidate, count = 0;
//     for (int i = 0; i < n; i++) {
//         if (count == 0) {
//             candidate = nums[i];
//         }
//         if (nums[i] == candidate) {
//             count++;
//         } else {
//             count--;
//         }
//     }
//     count = 0;
//     for (int i = 0; i < n; i++) {
//         if ( nums[i] == candidate)
//             count++;
//     }
    
//     if (count > n / 2){
//         return candidate;
//     }
//      else{
//         return -1;
//      }  
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 2, 2, 4, 2};
//     int n = nums.size();
//     cout << "The majority element is: " << majorityElement(nums,n) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void moveNegative(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<j){
//         while(arr[i]<0 && i<j ){ // swap when a positive element is encountered
//             i++;
//         }
//         while(arr[j]>0 && i<j){ // swap when a negative element is encountered
//             j--;
//         }
//         if(i<j){ // swap only when i is less than j
//             swap(arr[i], arr[j]); // swap the elements
//         }
//     }
// }
// int main(){
//     int n = 5;
//     int arr[n] = {2, -3, -1, 5, -4};
//     moveNegative(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n / 2; i++) { // Fix 1: Only rotate the first half of rows
        for (int j = i; j < n - i - 1; j++) { // Fix 2: Update the column loop to n-i-1
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - j - 1][i];
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = temp;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}