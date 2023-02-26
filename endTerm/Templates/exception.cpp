#include<iostream>
using namespace std;

float division(float x , float y){
    if(y==0){
        throw "please dont use 0 as divisor";
    }
    return x/y;
}

int main(){
    try{
        cout<<division(5.5f , 0)<<endl;
    }
    catch(const char *excep){
        cerr<<excep;
    }
    return 0;
    
    
    return 0;
}