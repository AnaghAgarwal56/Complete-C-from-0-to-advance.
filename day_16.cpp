//pointers.(variables that store memory address of another variable.)
#include <iostream>
using namespace std;
int main(){
    int a = 190;
    int* p = &a;
    cout << a << "\n";
    cout << &a << "\n";
    cout << p << "\n";
    cout << *p << "\n";
}