// array (contains particular typee of data, of fixed length)
#include <iostream>
using namespace std;

int main(){
    int marks[6]= {10,20,30,40,50,60};// indexing starts from 0
    cout<<sizeof(marks)<<"\n";
    cout << marks[4];
}

// more about arrays 
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i]<<" ";
    }
    
}
int main(){
    int numbers[]= {1,3,2,5,63};
    int size = 5;
    printarray(numbers,size);

}