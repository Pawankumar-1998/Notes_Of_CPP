#include<iostream>
using namespace std;

struct student
{
    
    char name[20];
    float p,m1 , m2 , m3, t;
    
};


int main()
{
    student s1;
    

    cout<<"Enter your name";
    cin>>s1.name;

    cout<<"enter the marks of sub 1 ";
    cin>>s1.m1;

    cout<<"enter the marks of sub 2 ";
    cin>>s2.m2;

    cout<<"Enter the marks of sub 3 ";
    cin>>s3.m3;

    t = (m1+m2+m3)/300;

    p= t*100;
    
    cout<<" \n your percentage is  "<<p<<endl;
    return 0; 
}