#include <iostream>
using namespace std;

void calculator(int num_1, int num_2,std::string oper){
  if (oper == "-"){
    std::cout<< "your answer is:  \n"<<num_1<<" - "<<num_2<<" = "<< num_1 - num_2;
  }else if(oper == "+"){
    std::cout<< "your answer is:  \n"<<num_1<<" + "<<num_2<<" = "<< num_1 + num_2;
  }
    else if(oper == "*"){
      std::cout<< "your answer is:  \n"<<num_1<<" * "<<num_2<<" = "<< num_1 * num_2;
    }
    else if(oper == "/"){
      std::cout<< "your answer is:  \n"<<num_1<<" / "<<num_2<<" = "<< num_1 / num_2;
    }
    else if(oper == "%"){
      std::cout<< "your answer is:  \n"<<num_1<<" % "<<num_2<<" = "<< num_1 % num_2;
    }
    else{
      std::cout<<"Invalid operator";
    }
  
}

int main(){
  std::cout << "This is a simple calculator: \n\n";
 
  int num_1;
  int num_2;
  std::cout <<"Enter number 1: ";
  std::cin>>num_1;
  
  std::cout <<"Enter number 2: ";
  std::cin>>num_2;
  
  
  std::string oper ;
  std::cout<<"Enter the sign of operatior that you want: ";
  std::cin>> oper;
  calculator(num_1,num_2, oper);
}
