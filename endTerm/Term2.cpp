// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a[20],n,i,count=0;
    do
    {
        cout<<"How many values you need to enter " << endl;
        cin>>n;
    } while(n<=0 || n>=6);
    cout<<"Enter "<<n<<" number of values "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            count++;
        }
    }
    cout<<"number of even number in the arrays are " <<count<<endl;
    return 0;
}