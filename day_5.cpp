//operators
#include<iostream>
using namespace std;
int a = 5;
int b = 7;
int main(){
    cout <<"a - b = " << b-a << "\n" ; // substraction
    cout <<"a + b = " << a+b << "\n" ; // adition
    cout <<"a * b = " << a*b << "\n" ; // multiplication
    cout <<"a / b = " << (float)a/b << "\n" ; // division
    cout <<"a % b = " << a%b << "\n" ; // modulus (print remainder )
    int x =++a ; // x=a+1 pre increament
    cout << x << "\n" ;
    int y =--a ; // x=a-1  pre decreament
    cout << y << "\n"  ;

    int m=a++;// m=a and then a=a+1
    cout << m << "\n" ;
    int n=a--;// n=a and then a=a-1
    cout << n << "\n" ; 
}