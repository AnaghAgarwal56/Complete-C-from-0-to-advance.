//oops verry important 
// classes(blueprint) and objects(real items)
//this code will show error because we have not created object of class details.
#include <iostream>
using namespace std;
class details {
    public:
        string name;
        int age;
        void display(){
            cout << "Enter your name and age:";
            cin >> name >> age;
            cout << "your name is " << name << " and age is " << age << endl;
        }
};