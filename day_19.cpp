//pointers
#include <iostream>
using namespace std;
void fun1(){
    int n;
    cout<< "enter a number: ";
    cin >> n;
    int* ptr = new int[n];
    cout << ptr;
    delete[]ptr;
    ptr = nullptr;


}
int main(){
    fun1();
}