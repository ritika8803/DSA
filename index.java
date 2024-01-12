// import java.util.Scanner;
// import java.lang.*;

// public class SumEvenOdd{
//     public static void main(String arg[]){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int Sum1 =0;
//         int Sum2 = 0;
//         for (int i=0; i<n; i =i+2){
//             Sum1 = Sum1 +i;
//         }
//         for (int i=1; i<n; i =i+2){
//             Sum2 = Sum2 +i;
//         }
//         int Sum = Sum1 + Sum2;
//         System.out.println(Sum);
        
//     }
// }

// import java.util.Scanner;
// import java.lang.*;

// public class MiddleDigit{
//     public static void main(String arg[]){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         if (n >= 100 && n<=999){
//             n=n/10;
//             n=n%10;
//             if (n%3==0){
//                 System.out.println("true");
//             }
//             else{
//                 System.out.println("False");
//             }
//         }
        
//     }
// }

// import java.lang.*;
// import java.util.*;

// public class Main{

//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         int month = sc.nextInt();
//         int year = sc.nextInt();

//         if((month==2) && ((year%4==0) || ((year%100==0)&&(year%400==0)))){
//             System.out.println("Number of days is 29");}

//         else if(month==2){
//             System.out.println("Number of days is 28");}

//         else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
//             System.out.println("Number of days is 31");}

//         else{
//             System.out.println("Number of days is 30");}

//     }

// }

// print pattern 0,2,8,14,24..... logic behind is 1^2-1, 2^2-1, 3^2-1

// import java.util.Scanner;
// import java.lang.*;

// public class MiddleDigit{
//     public static void main(String arg[]){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         for (int i =1; i <= n ; i++){
//             if (i%2 == 0){
//                 System.out.print(i*i-2 + " ");
//             }
//             else{
//                 System.out.print(i*i-1 + " ");
//             }
//         }
        
//     }
// }

// oops 
// 1) class => collection of members and methods or collection of objects (how to use syntax 
// class class_name{
//     member + method 
// })

// 2) objects => instances of a class ( physical entity) syntax :-
// (class.name obj_name = new class_name )

// asses specifyer :- 1. private (within the class)
//                    2. protected (within the package and subclass in oth package)
//                    3. public (everywhere)
//                    4. default(within the package)

// 3) Inheritance => creating a new class from exiting class (reuse method overriding)
//                   types of :-
//                   1> single(one class is derived from only one class) => flow vise pattern 
//                             syntax :- class bc {

//                             }
//                             class dc1 extend bc {

//                             }
//                             class dc2 extend bc {

//                             }
//                   2> mutilevel => When there is a chain of inheritance, it is known as multilevel inheritance
//                   3> hybrid => combination of any two types of inheritance 
//                   4> hierarchical inheritance => When two or more classes inherits a single class, it is 
//                      known as hierarchical inheritance.

// 4) Encapsulation in Java is a process of wrapping code and data together into a single unit.
// 5) Polymorphism in Java is a concept by which we can perform a single action in different ways.
//         -> performing one task in multiple ways 
//         -> types :- 
//                    1> static -> compile time polymer / static method dispatch 
//                             method overloading => If a class has multiple methods having same name
//                             but different in parameters.

//                    2> dynamic -> runtime polymer 
//                             method overriding =>  used to provide the specific implementation 
//                             of a method which is already provided by its superclass

//  :: a non-access modifier, used for classes and methods: Abstract class: is a restricted class that 
//     cannot be used to create objects (to access it, it must be inherited from another class).

// 6) Abstraction in Java is a process of hiding the implementation details from the user and 
//    showing only the functionality to the user.

// write a program to find the special number between the given range ?

// import java.util.Scanner;
// import java.lang.*;

// public class MiddleDigit{
//     public static void main(String arg[]){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         if ( n >= 10 && n <= 99){
//             int first_num = n%10;
//             int second_num = n/ 10;
//             int sum = first_num + second_num;
//             int product = first_num * second_num;
//             int final_sum = sum + product;
//             System.out.println(final_sum);
//         }
//         else{
//             System.out.println("print a 2 digit number: ");
//         }
        
//     }
// }


// import java.util.Scanner;

// public class index{
//     public static void main(String arg[]){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int[] a = new int[n];
//         for(int i=0;i<n;i++){
//             a[i] = sc.nextInt();
//         }
//         for(int i=0;i<n;i++){
//             if(a[i] % 2 == 0){
//              int sumEven = sumEven + a[i];
//              System.out.println("Sum of Even Numbers:"+sumEven);
//         }
//         else{
//             int sumOdd = sumOdd + a[i];
//             System.out.println("Sum of Odd Numbers:"+sumOdd);
//         }
//     }
   
//     }
// }