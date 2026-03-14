/*more about constructors.
1. default constructor: a constructor that can be called with no arguments.
2. parameterized constructor: a constructor that takes parameters to initialize the object with specific values.
*/
#include <iostream>
using namespace std;
//-----------------------------------------------------------------------------------------------
// default constructor
class student {
    int roll;
    public:
    student(){
        roll = 19;
        cout << roll <<"\n";
    }
};
int main(){
    student s1,s2;
}
//-----------------------------------------------------------------------------------------------
// parameterized constructor
class student{
    int roll;
    public:
      student(int r){      // here (int r) is a parameter.
        roll = r;
        cout << roll <<"\n";
      }
};
int main(){
    student s1(19),s2(20);  // here (19) and (20) are arguments.
}