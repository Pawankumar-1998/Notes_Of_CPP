#include<iostream>
using namespace std;

int main(){
    int arr[] = { 1 , 20 , 30 ,40 , 50};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout<<"The size of the arr is " <<sizeof(arr)<<endl;
    cout<<"The size of the array is " << arrSize<< endl;
    return 0;
}