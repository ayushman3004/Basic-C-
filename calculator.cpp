#include<iostream>
using namespace std;
int main(){

    int n1,n2;

    cout<<"Enter your number:";
    cin>>n1>>n2;

    char op;

    cout<<"Enter your operator(+,*,-,/,%)"<<endl;
    cin>>op;
      switch(op){
        case '+':
            cout<<"your sum is:"<<(n1+n2)<<endl;
            break;
        case '-' :
            cout<<"your difference is:"<<(n1-n2)<<endl;
            break;
        case '*':
            cout<<"your product is:"<<(n1*n2)<<endl;
            break;
        case '/' :
            cout<<"your qoutient is:"<<(n1/n2)<<endl;
            break;
        case '%':
            cout<<"your remainder is:"<<(n1%n2)<<endl;
            break;
        default :
            cout<<"enter valid operator:"<<endl;
            break;
     }
 return 0;

}
