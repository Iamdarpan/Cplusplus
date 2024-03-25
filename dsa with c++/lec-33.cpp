// #include<iostream>
// using namespace std;
// bool isSorted(int arr[],int n){
//     if(n==0||n==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool ans = isSorted(arr+1,n-1);
//         return ans;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool ans = isSorted(arr,n);
//     if(ans){
//         cout<<"Array is sorted: "<<endl;
//     }
//     else{
//         cout<<"Array is not sorted:"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int sum2(int arr[],int n){
//     if(n==0){
//         return 0;
//     }
//     int sum = 0;
//     sum = arr[0] + sum2(arr+1,n-1);
//     return sum;
// }
// int main(){
//     int arr[1] = {12};
//     cout<<sum2(arr,1);
// }

// #include<iostream>
// using namespace std;
// bool search(int *arr,int n,int key){
//     if(n == 0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }
//     int ans = search(arr+1,n-1,key);
//     return ans;
// }
// int main(){
//     int arr[5] = {12,345,34,11,44};
//     int key = 34;
//     int ans = search(arr,5,key);
//     if(ans){
//         cout<<"Key is present: "<<endl;
//     }
//     else{
//         cout<<"Key is not present: "<<endl;
//     }
// }

#include<iostream>
using namespace std;
bool binarySearch(int *arr,int s,int e,int key){
    if(s>e){return false;}
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,e,key);
    }
}
int main(){
    int arr[6] = {1,12,20,23,45,55};
    int key = 77;
    
    cout<<binarySearch(arr,0,5,key);
}