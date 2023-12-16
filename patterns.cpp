#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    // cout<<n;
    // cin>>n;
    // cout<<m;
    // cin>>m;
    for (int i= 1 ; i<= 7; i++){
        for(int j= 1; j<=8 ; j++){
            if(i == 1 || j==1 || i==n || j == m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}