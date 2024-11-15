#include<iostream>
using namespace std;
int main(){
    int food;
    cout<<"Enter 1 for Vegetarian";
    cout<<" and 2 for Non-Vegetarian :"<<endl;
    cin>>food;
    switch (food)
    {
    case 1:
    
        cout<<"biryani";
        cout<<" VEg pizza";
        break;
    
      
    case 2:
            
        cout<<"momo";
        cout<<" berger";
        break;

    default:
        cout<<"Wrong entry";
        break;
    }



}