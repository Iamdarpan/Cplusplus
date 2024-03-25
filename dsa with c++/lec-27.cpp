#include<iostream>
using namespace std;
void update(int** ptr){
    //ptr = ptr + 1;
    //No change

    // *ptr = *ptr+1;
    //yes change

    **ptr = **ptr+1;
    //yes change
}
int main(){
   
    int i =9;
    int* p = &i;
    int**  ptr = &p;

    /*
    cout<<"adress of i: "<<p<<endl;
    cout<<"adress of i: "<<*ptr<<endl;
    cout<<"address of p: "<<&p<<endl;

    //value
    cout<<"value of i: "<<i<<endl;
    cout<<"value of i: "<<*p<<endl;
    cout<<"value of i: "<<**ptr<<endl;
    */
   cout<<"Before"<<endl;
   cout<<i<<endl;
   cout<<p<<endl;
   cout<<&p<<endl;
//    cout<<ptr<<endl;
   update(ptr);
   cout<<"after"<<endl;

   cout<<i<<endl;
   cout<<p<<endl;
   cout<<&p<<endl;
//    cout<<ptr<<endl;

}