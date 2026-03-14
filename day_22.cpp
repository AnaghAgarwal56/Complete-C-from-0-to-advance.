// objects and classes in c++
#include <iostream>
using namespace std;
class demo {
    private: int a;
    protected: int b;
    public:
        int c;
        void set(){a=10;b=20;c=30;}
        void show(){
            cout <<a << " " << b << " " << c;
        }
};
class child: public demo{     // here we are inheriting demo class in child class
    public:
        void access(){
            //a=10;  // this will show error because a is private in demo class and we cannot access it in child class
            b=20;  // this will work because b is protected in demo class and we    can access it in child class    
            c=30;  // this will work because c is public in demo class and we can access it in child class

        }
};
int main(){
    demo d;
    d.set();
    d.show();  
    //d.a=5;   // this will show error because a is private in demo class and we cannot access it in main function
    //d.b=10;  // this will show error because b is protected in demo class and we cannot access it in main function
    d.c=15;  // this will work because c is public in demo class and we can access it in main function
}