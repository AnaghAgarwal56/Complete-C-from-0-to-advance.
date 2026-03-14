//loops
#include<iostream>
using namespace std;

// if else loop
int main(){
    int m = -6;
    if (m>0){
        cout << m << " is positive" << "\n";
    }
    else
    cout << m << " is negative";

}

// if elif loop
int main(){
    int marks = 85;
    if (marks>=90){
        cout << "Grade A+"<< "\n";
    }
    else if (marks>=80)
    {
       cout << "Grade A" << "\n";
    }
    else if (marks>=60)
    {
        cout << "Grade B "<< "\n";

    }
    else
    cout << "Grade C"<< "\n";
    
}