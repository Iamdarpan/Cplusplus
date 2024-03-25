// #include<iostream>
// using namespace std;
// int main(){
//     /*int arr[10] = {1,7,23,88};
//     cout<<"address: "<<arr<<endl;
//     cout<<"address by &: "<<&arr[0]<<endl;
//     cout<<"value: "<<arr[0]<<endl;
//     cout<<"value by pointer: "<<*arr<<endl;
//     cout<<"value by pointer at 5th: "<<*arr+1<<endl;
//     cout<<"value by pointer at 2nd index: "<<*(arr+1)<<endl;
//     int i = 3;

//     cout<<"index at 3: "<<i[arr]<<endl;
//     cout<<"index at 3: "<<*(i+arr)<<endl;*/

//     /*
//     int arr[10] = {992,323,88};
//     //ERROR
//     // arr = arr+1;
//     int *ptr = &arr[0];
//     cout<<ptr<<endl;
//     cout<<"value at ptr: "<<*ptr<<endl;

//     ptr = ptr+1;
//     cout<<"ptr: "<<ptr<<endl;
//     cout<<"value at ptr: "<<*ptr<<endl;
//     */

//    int arr[10]={823,343,43,2,34};
//    char ch[7]= "ahgsgd";
//    cout<<arr<<endl;
//    cout<<ch<<endl;

//    int *ptr = &arr[0];
//    cout<<ptr<<endl;
//    cout<<*ptr<<endl;
  
//   //RISKY Nahi karna h
//    char *ptr2 = &ch[0];
//    cout<<ptr2<<endl;
//    cout<<*ptr2<<endl;


// }

#include<iostream>
using namespace std;
void update(int *ptr){
    // ptr = ptr+1;
    *ptr = *ptr + 77;
}
int sumArray(int arr[] /* (int *arr)define the same thing */,int n){
    //size of pointer array
    cout<<endl<<"sizeof: "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    // int arr[10]= {18,34,4};
    // int *ptr = &arr[0];
    // // cout<<"before: "<<ptr<<endl;
    // // update(ptr);
    // // cout<<"after: "<<ptr<<endl;

    // cout<<"before: "<<*ptr<<endl;
    // update(ptr);
    // cout<<"after: "<<*ptr<<endl;

    int arr[6] = {6,34,4,3,5,62};
    cout<<"sum: "<<sumArray(arr+3,3)<<endl;
}