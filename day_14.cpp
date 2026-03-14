// functions
// int,double,void(for empty),float
#include<iostream>
using namespace std;
//example 1

/*void fun1(){
    cout<< " This is void function it does not return anything.\n";
}
int main(){
    fun1();
}*/

// example 2 
int add(int a, int b){
    return a+b ;
}
int main(){
   int sum = add(4,6);
   cout << sum;
}