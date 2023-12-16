#include<iostream>

using namespace std;

int main(){
    
    int score;
     cout<<"Your Score:"<<endl;
    cin>>score;
    if(score>80){
        if (score>90){
            cout<<"Congrats"<<endl;
        }
        else{
            cout<<"Well Done"<<endl;

        }
    }
    else if(score>50){
        cout<<"Can Improve"<<endl;

    }
    else {
        cout<<"Poor Performance"<<endl;
    }
 
 return 0;

}