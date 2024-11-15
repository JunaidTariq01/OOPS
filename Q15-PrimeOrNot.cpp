#include<iostream>
using namespace std;
int main(){
    int n,m,i;
    bool pr = true ;
    cout<<"Enter any number : ";
    cin>>n;
    if(n>0){
    for(i=2;i<=n-1;i++){
        if (n%i==0){
        cout<<" not prime number";
        pr = false;
        break;
        }
    }
    if(n==1)
    cout<<"neither prime nor composite ";
    if(pr == true and n != 1)
    cout<<" prime";

    }
    else
    cout<<"Negative no";
}