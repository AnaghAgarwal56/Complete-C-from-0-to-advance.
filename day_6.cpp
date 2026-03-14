//bitwise 
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 3;
    cout << (a & b) << "\n";
    cout << (a | b) << "\n";
    cout << (a ^ b) << "\n";
    cout << (~b) << "\n";
    cout << (b>>a) << "\n";
    cout << (a<<b) << "\n";
}