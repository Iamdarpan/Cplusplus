#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[14] = {23,4,52,4,5,4,4,4,67,87,4,4,4,4};
   int n = 4;
   
   int count = 0;
  
   int maxi = INT_MIN;
   for(int i = 0;i<14;i++){
       if(arr[i] == n){
           count++;
           maxi = max(maxi,count);
       }
       else{count = 0;}
   }
   cout<<maxi;
   return maxi;
}