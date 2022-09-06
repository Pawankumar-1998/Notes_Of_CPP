#include<iostream>
using namespace std;


// function for finding the factorial of a number 
/*
int factorial(int n){
    if (n<=1)
    {
        return 1;
    }

    return n * factorial(n-1);
    
}
*/

    int febonacci (int n){
        if (n<2)
        {
            return 1;
        }

        return febonacci(n-2) + febonacci (n-1);
        
    }

int main(){

    /*
    int num;
    cout<<"Enter a number to see its factorial" << endl ;
    cin>>num;

    cout<<"The factorial of " << num << " is " << factorial(num);
    return 0;
    */

   int num ;
   cout<<"Enter a number to see its febonacci series " << endl;
   cin>>num;
   cout<<"The febonacci of " << num << " is " << febonacci(num);
   return 0;
}