//function overloading(multiple funtions of same name)
#include<iostream>
using namespace std;
int add (int a , int b){            //  1 function
    return a + b;
}
double add (double a , double b){   // 2 function
    return a + b; 
}
int add (int a ,int b, int c){      // 3 function
    return a + b + c; 
}
int main(){
    cout << add(3,5) << " this is funtion 1" << "\n";               // This will run 1 function
    cout << add(5,7,3) << " this is funtion 3" << "\n";             // This will run 3 function
    cout << add(2.3,4.7) << " this is funtion 2" << "\n";           // This will run 2 function
}