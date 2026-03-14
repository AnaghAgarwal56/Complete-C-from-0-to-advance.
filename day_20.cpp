//vectors ( veeerrryyyy important )
#include <iostream>
#include <vector>                   // this is vector
using namespace std;
int main(){
    vector<int> nameofvector = {10,20,30};  
    cout<<nameofvector.size() << "\n";      // at present how many elements.
    cout<<nameofvector.capacity() << "\n";  // its maximum capacity
    nameofvector.push_back(40);
    // printing vector
    for (int i = 0; i < nameofvector.size(); i++)
    {
        cout<<nameofvector[i] << " ";
    }
    cout << "\n" << nameofvector.size() << "\n";
    cout << nameofvector.capacity() << "\n";

}
// functions
/* 
nameofvector.push_back(x) --->  add element at last , x is the value that we want to addd
nameofvector.pop.back()   ---> remove last element
nameofvector.size()  ---> number of elements
nameofvector.clear() ---> clear all elements
nameofvector.front() ---> first element
nameofvector.back()  ---> last element
nameofvector.empty() ---> returns trueif empty
*/

