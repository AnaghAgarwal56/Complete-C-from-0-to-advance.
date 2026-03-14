// pointer arthemetics
#include<iostream>
using namespace std;
int main(){
    int arr[5]= {1,2,3,4,5};
    //int* p = &arr[2];
    int* p = arr;
    cout<< *(p+1)<< "\n";
    cout<< *p++<< "\n";
    cout<< *++p<< "\n";
    cout<< *--p<< "\n";
}