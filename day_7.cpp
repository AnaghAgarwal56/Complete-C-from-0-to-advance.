/*use of ||(or), &&(and), !(not) */
#include <iostream>
using namespace std;
int main(){
    int a = 88;
    int b= 99;
    if (a==b){
        cout << "true";
    }
    else if (a!=b)
    {
      cout << "false";
    }
    else if ((a==b)&&(a<<b)) // both must be equal
    {
        cout << "a is smaller and equal to b";
    }
    else if ((a==b)||(a<<b)) // either one or two will be equal
    {
        cout << "a is smaller and equal to b";
    }
}