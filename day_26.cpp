//destructors -- autimatically called when an object goes out of scope.
//(~)is used to declare a destructor. It has no return type and takes no parameters.
#include <iostream>
using namespace std;
class demo{
    public:
      demo(){
        //constructor body
      }
      ~demo(){
        //destructor body
      }
};
int main(){
    demo d1; //constructor is called here
    demo d2; //constructor is called here
    //some code
    return 0; //destructor is called here when d1 and d2 go out of scope
}