#include<iostream>
using namespace std;
int main()
{
 int num1,num2,sum,difference;
 ;
 cout<<"enter num1 "<<endl;
 cin>>num1;

 cout<<"enter num2"<<endl;
 cin>>num2;

 cout<<"enter operators(+,-,*,/,%)"<<endl;
 char op;
 cin>>op;

 switch(op){
    case '+':
    
    cout<< "sum of no is"<<num1+num2<<endl;
    break;
    case '-':
   
    cout<<"difference is"<<num1-num2<<endl;
    break;
    case '/':
    
    cout<< "result is"<<num1/num2<<endl;
    break;
    case '*':
    
    cout<<"result is"<<num1*num2<<endl;
    break;
    case '%':
    
    cout<< "result is"<<num1%num2<<endl;
    break;
 return 0;
 }
}
