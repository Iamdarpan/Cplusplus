// ---------------Arrays-----------------

// #include<iostream>
// #include<math.h>
// using namespace std;
// int getMax(int num[],int n){
//     int maxi = INT_MIN;
//     for(int i = 0;i<n;i++){
//         maxi = max(maxi,num[i]);
        
//         // if(maxi<num[i]){
//         //     maxi = num[i];
//         // }

//     }
//     return maxi;
// }
// int getMin(int num[],int n){
//     int mini = INT_MAX;
//     for(int i = 0;i<n;i++){
//         mini = min(mini,num[i]);
        
//         // if(min>num[i]){
//         //     min = num[i];
//         // }

//     }
//     return mini;
// }
// int main (){
//     int n;
//     cin>>n;
//     int num[n];
//     for(int i = 0; i <n ;i++){
//         cin>>num[i];
//     }
//     cout<<"The maximum no is: "<<getMax(num,n)<<endl;
//     cout<<"The minimum no is: "<<getMin(num,n);
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// void reverse(int arr[],int n){
//     int s = 0;
//     int e = n-1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     for(int i= 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     reverse(arr,n);
   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10] = {12,23,435,6787,32,44578,23,3,44,99};
//     for(int i = 0;i<10;i=i+2){
//           swap(arr[i],arr[i+1]);
//         //   cout<<arr[i]<<" ";
//     }
//     for(int i = 0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int arr[10] = {12,3,4,4,23,45,232,1,323,234};
    for(int i = 0;i<10;i++){
        for(int j = 1;j<10;j++){
            if(arr[i]==arr[j]){
                // cout<<i<<endl;
                // return arr[i];
                // cout<<arr[j]<<endl;
            }
        }
    }
}
