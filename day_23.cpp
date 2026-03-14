// friend class in c++ (a class that can access private and protected members of another class)
#include <iostream>
using namespace std;
class x{
    private: int a = 10;

    friend class y;  // declaring class y as friend of class x  

};
class y{
    public:
        void show(x obj){
            cout<<obj.a;  // accessing private member of class x using object of class x
        }
};
int main(){
    x obj1;      // object of class x
    y obj2;      // object of class y

    obj2.show(obj1);   // calling show()

    return 0;
}