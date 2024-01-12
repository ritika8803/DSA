#include <iostream>
using namespace std;
int main()
{
    int arr[500];
    int n;
    cout << "how many elements do you want to input";
    cin >> n;

    cout << "enter the elements"<<endl;
    for (int i =0;i <n; i++){
        cin >> arr[i];
    }

    cout << "print the array" << endl;
    for (int i =0; i <n ; i++){
        cout << arr[0] << " ";
    }

  return 0;
}