#include<iostream>
using namespace std;
bool checkKey(int arr[][3],int n){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==n){
                return 1;
            }
        }
    }return 0;
}
void printSum(int arr[][3],int i,int j){
    for(i = 0;i<3;i++){
        int sum = 0;
        for(j = 0;j<3;j++){
            sum = sum+arr[i][j];
        }cout<<sum<<" ";
    }
}
int maxIndex(int arr[][3],int i,int j){
    int maxi = INT_MIN;
    int index = -1;
     for(i = 0;i<3;i++){
        int sum = 0;
        
        for(j = 0;j<3;j++){
            sum = sum+arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            index = i;
        }
        
    }return index;
}
int main(){
    
    int arr[3][3];
    cout<<"Enter the number: "<<endl;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;
    cout<<"Key is present or not-> "<<checkKey(arr,key)<<endl;
    printSum(arr,3,3);
    cout<<endl;
    cout<<"The maximum index is: "<<maxIndex(arr,3,3);
}