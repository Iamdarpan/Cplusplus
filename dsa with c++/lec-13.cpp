// -------------First and last occurance of a number---------//

// #include<iostream>
// using namespace std;
// int firstOcc(int arr[],int n,int k){
//     int s=0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(arr[mid] == k){
//             ans = mid;
//             e = mid-1;
//         }
//         else if(arr[mid]>k){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     } return ans;
// }
// int lastOcc(int arr[],int n,int k){
//     int s=0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(arr[mid] == k){
//             ans = mid;
//             s = mid+1;
//         }
//         else if(arr[mid]>k){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     } return ans;
// }
// int main(){
//     int arr[10] = {1,1,2,2,3,3,3,3,4,4};
//     int k = 3;
//     cout<<"The first Occurance of key 2 at index is "<<firstOcc(arr,10,k)<<endl;
//     cout<<"The last Occurance of key 2 at index is "<<lastOcc(arr,10,k);

// }

// #include<iostream>
// using namespace std;
// int firstOcc(int arr[],int n,int k){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(arr[mid] == k){
//             ans = mid;
//             e = mid-1;
//         }
        
//         else if(arr[mid] > k){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }return ans;
// }
// int lastOcc(int arr[],int n,int k){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(arr[mid] == k){
//             ans = mid;
//             s = mid+1;
//         }
        
//         else if(arr[mid] > k){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }return ans;
// }

// int main(){
//     int arr[10] = {1,2,3,4,4,4,4,5,5,5};
//     int k = 4;
//     int f = firstOcc(arr,10,k);
//     int l = lastOcc(arr,10,k);
//     int count = l-f+1;
//     cout<<count;
// }

// #include<iostream>
// using namespace std;
// int pivot(int arr[],int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s= mid+1;
//         }
//         else{
//             e =mid;
//         }
//         mid = s+(e-s)/2;
//     }return e;
// }
// int main(){
//      int arr[10] = {7,8,9,1,2,3,4,5,6};
//      cout<<"Pivot element will be: "<<pivot(arr,10);
// }

// #include<iostream>
// using namespace std;
// int sqrt(int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     long long int ans = 0;
//     while(s<=e){
//         long long int sq = mid*mid;
//         if(sq>n){
//             e = mid -1;
//         }
//         else if(sq<n){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             return mid;
//         }
//         mid = s+(e-s)/2;
//     }return ans;
// }
// double morePrecision(int n,int precision,int tempSol){
//      double factor = 1;
//      double ans = tempSol;
//      for(int i = 0;i<precision;i++){
//         factor = factor/10;
//         for(double j= ans; j*j < n ;j = j+factor){
//             ans = j;
//         }
//      }return ans;
// }


// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int tempSol = sqrt(n);
//     cout<<"The answer is: "<<morePrecision(n,3,tempSol);
// }