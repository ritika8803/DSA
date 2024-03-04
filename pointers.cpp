#include <iostream>
using namespace std;
int main()
{
    // int arr[4] = {12,14,16,18};

    // cout << arr << " "<< arr[0] << " "<< &arr << &arr[0] << endl;
    // cout << *arr << " " << arr[0] << "same " << endl;
    // int *p = arr;
    // cout << p << " "<< &p<< endl;

    // int arr[4] = {5,6,7,8};

    // int *p = arr;
    // int *q = arr+1;

    // cout << arr << endl; // address of a ---> 104
    // cout << &arr << endl; // address of arr ---> 104
    // cout << arr[0] << endl; // 5
    // cout << &arr[0] << endl; // address of arr ---> 104
    // cout << p << endl; //address of arr ---> 104
    // cout << &p << endl; // address of p --> 208
    // cout << *p << endl; //5
    // cout << q << endl; //address of a + 1 ---> 108(4 bytes will increase)
    // cout << &q << endl; //address of q --> 316
    // cout << *q << endl; //6
    // cout << *(p) + 1 << endl; //6
    // cout << *(p) + 2 << endl; //7
    // cout << *(q) + 3 << endl; //9
    // cout << *(q) + 4 << endl; //10 
    // cout << sizeof(p) << endl; // both depend on the system archi of the system 
    // cout << sizeof(*p) << endl;

    //implementation of pointer and cout is different for char and int 

    //  char name[9] = "SherBano";
    //  char* c = &name[0];

    //  cout << name << endl; //SherBano
    //  cout << &name << endl; //104
    //  cout << *(name +3)<< endl; //r
    //  cout << c << endl; //SherBano
    //  cout << &c << endl; // address of c
    //  cout << *(c + 3) << endl; //r
    //  cout << c+2 << endl; //erBano
    //  cout << *c << endl; //S (first letter only will be printed )
    //  cout << c+8<< endl; //error or nullvalue 

    

  return 0;
}