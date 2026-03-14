//do while loop
#include<iostream>
using namespace std;
/*int main(){
    int i =1 ;
    do
    {
       cout << "hello do function" << "\n";
       i++;
    } while (i>100);
}*/

// exxample
int main(){
    int passw =9996;
    int pass;
    do{
        cout << "Enter Password: ";
        cin >>pass;
        if (pass!=passw)
        {
            cout<<"Incorrect Password \ntry again\n";
        }
        
    }while (pass!=passw);
    cout << "Access Granted";
} 