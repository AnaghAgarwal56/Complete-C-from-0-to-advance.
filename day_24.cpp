//constructor (constructor is a special member function of a class that is automatically called when an object of the class is created. 
// ultra important
#include <iostream>
using namespace std;
// without constructor we have to set the value of roll number.
/*
class student{
    public:
    int roll;
        void setRollno(int r){
            roll=r;
        }
        void display(){
            cout<<roll<<endl;
        }
};

int main(){
    student s1;
    s1.setRollno(101);
    s1.display();
}
*/
// using constructor
class student{
    int roll;
    public:
      student(int r){
        roll = r;
        cout << roll << endl;
      }
};
int main(){
    student si(101);
}