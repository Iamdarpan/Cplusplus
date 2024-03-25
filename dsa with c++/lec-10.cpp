// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10] = {0,1,0,1,1,0,1,0,1,0};
//     int i = 0; int j = 9;
//     while(i<=j){
//         if(arr[i]==0){
//             i++;
//         }
//         else if(arr[j]==1){
//             j--;
//         }
//         else if(arr[i]==1 && arr[j]==0){
//             swap(arr[i],arr[j]);
//         }
//     }
//     for(int k = 0;k<10;k++){
//         cout<<arr[k]<<" ";
//     }
// }

#include<iostream>
using namespace std;
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
int sort(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(arr[i]==0){i++;}
        else if(arr[j]==2){j--;}
        else if(arr[i]==2 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
    }return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, n);
    print(arr,n);
}