// use of switch 
#include <iostream>
using namespace std;
int main(){
    int a = 7;
    switch (a)
    {
    case 1:
        cout << "Case 1";
        break;
    case 2:
        cout << "Case 2";
        break;
    case 3:
        cout << "Case 3";
        break;
    default: cout<< "More than 3 ";
        break;
    }
}