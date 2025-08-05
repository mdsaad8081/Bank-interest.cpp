#include<iostream>
using namespace std;


class Bankdeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:

    Bankdeposit(){}
    Bankdeposit(int p,int y,float r);
    Bankdeposit(int p,int y,int r);
void show();
};

Bankdeposit::Bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    interestrate=r;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+r);
    }
}
Bankdeposit::Bankdeposit(int p,int y,int r){
    principal=p;
    years=y;
    interestrate= float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}
void Bankdeposit::  show(){
    cout<<endl<<"Deposit Amount was "<< principal
    <<" Return Amount after  " <<years
    <<" Years is "<<returnvalue<<endl;
}

int main(){
    Bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
 //cout<<"Enter the value of principle years and interestRate"<<endl;
   // cin>>p>>y>>r;
    //bd1=Bankdeposit(p,y,r);
//bd1.show();
    cout<<"Enter the Deposit Amount:";
    cin>>p;
    cout<<"Enter The Deposit years:";
    cin>>y;
    cout<<"interestRate:";
    cin>>R;
    bd2=Bankdeposit(p,y,R);
    bd2.show();
    return 0;
}