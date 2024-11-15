#include<iostream>
using namespace std;
int main(){
    float p,num,tmarks;
    cout<<"Enter the obtained marks : ";
    cin>>num;
    cout<<"Enter the Total marks : ";
    cin>>tmarks;

    p = (num/tmarks)*100;
    
    if(p>=90 and p<=100)

    cout<<"Grade A ";

    else if(p>=80 and p<90)
    
    cout<<"Grade B ";
    
    else if(p>=70 and p<80)
    
    cout<<"Grade C ";
    
    else if(p>=60 and p<70)
    
    cout<<"Grade D ";
    
    else if(p>=40 and p<60)

    cout<<"Grade F, be brave proudly";

    else if(p>=0 and p<40)
    cout<<"Better luck next time bata ";
    
    else
    cout<<"Wrong Entry !!!";

}