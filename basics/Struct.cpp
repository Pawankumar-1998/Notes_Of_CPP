#include<iostream>
using namespace std;

struct Employee
{
    int eId;
    char favChar;
    float salary;
};


int main(){
    struct Employee pawan;
    struct Employee dinesh;
    struct Employee moni;
    // employee id goes here
    pawan.eId = 1;
    dinesh.eId = 2;
    moni.eId = 3;

    // employee char goes here
    pawan.favChar='m';
    dinesh.favChar = 'd';
    moni.favChar='m';

    // salary goes here
    pawan.salary=102212;
    dinesh.salary = 564754;
    moni.salary = 5687941;


    cout<<"employee id of pawan is "<<pawan.eId<<endl;
    cout<<"employee id of dinesh is "<<dinesh.eId<<endl;
    cout<<"employee id of moni is "<<moni.eId<<endl;

    cout<<"fav char of pawan is "<<pawan.favChar<<endl;
    cout<<"fav char of dinesh is "<<dinesh.favChar<<endl;
    cout<<"fav char of moni is "<<moni.favChar<<endl;

    cout<<"salary of pawan is "<<pawan.salary<<endl;
    cout<<"salary of dinesh is "<<dinesh.salary<<endl;
    cout<<"salary of moni is "<<moni.salary<<endl;
    
    

    return 0;
}