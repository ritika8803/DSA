//add two numbers 
// #include <iostream>
// using namespace std;

// int max(int a, int b, int c){
//     if (a>=b && a>=c){
//         return a;
//     }
//     else if (b>=a && b>=c){
//         return b;
//     }
//     else {
//        return c;
//     }
// }
// int main(){
//     int a,b,c;
//     cin >> a >> b >> c;
//     int maxNum = max(a,b,c);
//     cout << maxNum;
//     return 0;
// }

// count 1 to N

// #include <iostream>
// using namespace std;

// void printCounting(int n){
//     for (int i = 1; i <= n;i++){
//         cout << i << endl;
//     }
// }
// int main(){
//     int n;
//     cin >>n ;
//     printCounting(n);
//     return 0;
// }

// students and grades

// #include <iostream>
// using namespace std;

// char grades(int n){
//    if (n>=90){
//     return 'A';
//    }
//    else if (n>=80){
//     return 'B';
//    }
//    else if (n>=70){
//     return 'C';
//    }
//    else if (n>=60){
//     return 'D';
//    }
//    else{
//     return 'E';
//    }
// }
// int main(){
//     int n ;
//     cin >> n;
//     char marks = grades(n);
//     cout << marks;

//     return 0;
// }

//sum of all even numbers upto n 

#include <iostream>
using namespace std;

int sumEven(int n){
    int sum=0;
    for (int i=2;i<=n;i+=2){
            sum = sum +i;
    }
    return sum;
}
 
int main(){
    int n ;
    cin >> n;
    int sum = sumEven(n);
    cout << sum;

    return 0;
}
