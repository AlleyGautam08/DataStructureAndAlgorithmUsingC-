#include<iostream>
using namespace std;

int main(){
    int savings;
    cin>>savings;

    if(savings>5000){
         cout<<"Neha\n";
    }else if(savings>2000){
         cout<<"Rashmi\n";
    }else {
         cout<<"friends\n";
    }
    return 0;    
}