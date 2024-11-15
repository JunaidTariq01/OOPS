#include<iostream>
using namespace std;
int main(){
    int month,leap;
    cout<<" 1 for January, 2 for February,..."<<endl;
    cout<<"Select the number 1 - 12 respectively to the months of year"<<endl;
    cin>>month;
    switch (month)
    {
    case 1 :
        cout<<"31 days ";
        break;
    case 2 :
        cout<<"press 1 for leap year else press 2 : ";
        cin>>leap;
        if(leap==1)
        cout<<"29 days ";
        else if(leap == 2)
        cout<<"28 days ";
        else 
        cout<<"Invalid press";
        break;
    case 3 :
        cout<<"31 days ";
        break;
    case 4 :
        cout<<"30 days ";
        break;
    case 5 :
        cout<<"31 days ";
        break;
    case 6 :
        cout<<"30 days ";
        break;
    case 7 :
        cout<<"31 days ";
        break;
    case 8 :
        cout<<"31 days ";
        break;
    case 9 :
        cout<<"30 days ";
        break;
    case 10 :
        cout<<"31 days ";
        break;
    case 11 :
        cout<<"30 days ";
        break;
    case 12 :
        cout<<"31 days ";
        break;
    
    default:
        cout<<"Error !!! invalid entry ";
        break;
    }
}