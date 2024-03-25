// ----------------Binary Search---------------

// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int n,int k){
//     int s= 0;
//     int e = n-1;
//     int mid = (s+e)/2;
//     or int mid = s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid] > k){
//             e = mid-1;
//         }
//         else if(arr[mid]<k){
//             s = mid+1;
//         }
//         else{
//             return mid;
//         }
//         mid = (s+e)/2;  or mid = s+(e-s)/2;
//     }return mid;
// }
// int main(){
//     int arr[10] = {1,12,34,54,67,88,99,321,343,900};
//     int k = 321;
//     cout<<BinarySearch(arr,10,k);
// }