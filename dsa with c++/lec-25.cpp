#include<iostream>
using namespace std;
int main(){
    /* int num = 5;
    cout<<num+1<<endl;
    //address of operator
    cout<<"address of operator: "<<&num<<endl;
    int *ptr = &num;
    cout<<"Value is: "<<*ptr<<endl;
    cout<<"Address is: "<<ptr<<endl;
    cout<<"size of integer: "<<sizeof(num)<<endl;
    cout<<"size of pointer: "<<sizeof(ptr)<<endl;
    */
    
    int num = 5;
    int a = num;
    cout<<"a before: "<<num<<endl;
    a++;
    cout<<"a after: "<<num<<endl;

    int *ptr = &num;
    cout<<"before: "<<num<<endl;
    (*ptr)++;
    cout<<"after: "<<num<<endl;

    //copying a pointer

    int *q=ptr;
    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;

    //important concept
    int o = 9;
    int *t = &o;
    // cout<<"before: "<<(*t)++<<endl;
    cout<<"after increment: "<<*t<<endl;
    *t = *t + 1;
    cout<<"after: "<<*t<<endl;
    cout<<"before: "<<t<<endl;
    t = t+1;
    cout<<"after: "<<t<<endl;
    t = t+1;
    cout<<"after: "<<t<<endl;


}