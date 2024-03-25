// #include<iostream>
// using namespace std;
// void copy2(int& n){
//     n = n+1;
// }
// void copy(int n){
//     n = n+1;
// }
// int main(){
//     /*
//     int i = 9;
//     int& j = i;
//     cout<<i<<endl;
//     i++;
//     cout<<i<<endl;
//     j++;
//     cout<<i<<endl;
//     cout<<j<<endl;
//     */
//    int n = 7;
//    cout<<n<<endl;
//    copy2(n);
//    cout<<n<<endl;
// }

#include<iostream>
using namespace std;
int sum2(int* arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    //variable size array
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = sum2(arr,n);
    cout<<"sum is: "<<ans;
}