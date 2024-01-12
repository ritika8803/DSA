#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols){
    for(int i =0; i <rows; i++){
        int sum =0 ;
        for(int j =0; j < cols; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

void printColWiseSum(int arr[][3], int rows, int cols){
    for(int i =0; i <rows; i++){
        int sum =0 ;
        for(int j =0; j < cols; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}


int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout <<"enter the elements"<< endl;
    //taking input row wise 
    for(int i =0; i <rows; i++){
        for(int j =0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
    cout<< "row -wise print"<<endl;
    //print rowwise 
    for(int i =0; i <rows; i++){
        for(int j =0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<< "column -wise print"<<endl;
    //print colwise 
    for(int i =0; i <rows; i++){
        for(int j =0; j < cols; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    cout << "print row sum"<< endl;
    //row sum karne ke liye function 
    printRowWiseSum(arr, rows, cols);

    cout << "print column sum"<< endl;
    //column wise sum ke liye function 
    printColWiseSum(arr, rows, cols);

  return 0;
}