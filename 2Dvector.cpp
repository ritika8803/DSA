#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr(5, vector<int>(5, -8));
    
    for(int i =0; i < 5; i++){
        for(int j =0; j <5;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout <<"print 2nd 3rd " << arr[2][3]<< endl;
    cout << "take input ";
    cin >> arr[3][4];
    
    
    for(int i =0; i < 5; i++){
        for(int j =0; j <5;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


  return 0;
}