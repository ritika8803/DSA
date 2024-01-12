#include <iostream>
using namespace std;

// int main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i \*///i=i+1;
// 	cout<<++i;
// }

// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<-(i+j);
// }

// int main() {
// 	float l, b, P;
// 	P = 2*(l+b);
// 	printf("Perimeter=%f", P);
// }

// int main() {
// 	int n;
//     cin>>n;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2; i<n; i++){
//       if(n%i == 0){
//           isPrime = false;
//            break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else {
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<=n;j++){
//             if(j==i+1 || j == n  || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// int main() {
//   int n;
//   cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < 2*i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * ( i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; i++) {
//         int k=0;
//         for (int j=0; j<n*2-1; j++) {
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k < 2*i+1){
//                 if(k==0 || k == 2*i || i == n - 1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//                 k++;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// int main(){
// int n ;
// cin >> n;

// for (int i=0;i < n; i++){
//     for (int j = 0; j<n-i; j++){
//         cout << "* ";
//     }
//     for (int k =0; k <2*i ; k++){
//         cout << "  ";
//         }
//     for (int m =0; m < n-i ; m++){
//         cout << "* ";
//         }
//     cout << endl;
// }
// for (int i=0;i < n; i++){
//     for (int j = 0; j<i+1; j++){
//         cout << "* ";
//     }
//     for (int k =0; k <2*(n-i)-2 ; k++){
//         cout << "  ";
//         }
//     for (int m =0; m < i+1 ; m++){
//         cout << "* ";
//         }
//     cout << endl;
// }
    

// for (int i=0;i < n; i++){
//     for (int j = 0; j<i; j++){
//         cout << " ";
//     }
//     for (int k =0; k < 2*(n-i)-1; k++){
//         if (k==0|| k == 2*(n-i)-2){
//         cout << "*";}
//         else {
//             cout << " ";
//         }
//     }
//     cout << endl;
// }
// for (int i=0; i <n; i++){
//     for (int j=0; j<n-i ; j++){
//         if (  i==0 || j==0 || j == n-i-1){
//         cout << "* ";}
//         else {
//             cout << "  ";
//         }
//     }
//     cout << endl;
// }
// }

// int main(){
//     int n;
//     cin >> n;

    // for (int i=0; i < n; i++){
    //     for (int j =0; j<i+1; j++){
    //         cout << i+1;
    //         if (j!=i){
    //             cout << "*";
    //         }
    //         else {cout << " ";}
    //     }
    //     cout << endl;
    // }
    // for (int i=0; i < n; i++){
    //     for (int j =0; j<n-i; j++){
    //         cout << n-i;
    //         if (j!=i){
    //             cout << "*";
    //         }
    //         else {cout << " ";}
    //     }
    //     cout << endl;
    // }
   

//     for(int i=1;i<=n;i++){
//         cout<<i;
//         for (int j=1; j<i; j++)
//         {
//             cout<<"*"<<i;
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         cout<<i;
//         for(int j=i;j>1;j--){
//             cout<<"*"<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>> n;

//     for (int i =0; i < n ; i++){
//         for (int j =0; j < n-i-1 ; j++){
//             cout << " ";

//         }
//         for (int k =0; k< i ; k++){
//             if (k==0||k==i-1||i==n-1){
//                 cout << "* ";
//             }
//             else {cout << "  ";}

//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n ;
//     cin >> n;

//     for (int row =0; row < n; row++){
//         for(int col=0;col < n-row-1; col++){
//             cout << " ";
//         }
//         for (int k=0; k< row+1; k++){
//             if (k==0 || k==row || row == n-1){
//                 cout << k+1 << " ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n ;
//     cin >> n;
// int sum1 =0;
// int sum2 =0;
//     for (int i =0; i <= n; i =i+2){
        
//         sum1 = sum1 +i;
//     }
//     for (int i =1; i <= n; i =i+2){
        
//         sum2 = sum2 +i;
//     }
//     cout << sum1;
//     cout << sum2;
//     cout << sum1+sum2 << endl;
// }

int main(){
    int a =5;
    cout << (++a) * (++a);
}