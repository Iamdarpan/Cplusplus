// #include<iostream>
// using namespace std;
// void reverse(string& s,int i){
//     if(i>s.length()-i-1){return;}
//     swap(s[i],s[s.length()-i-1]);
//     i++;
    
//     reverse(s,i);
// }
// int main(){
//     string name = "darpan";
//     reverse(name,0);
//     cout<<name<<endl;
// }

// #include<iostream>
// using namespace std;
// bool checkPalidrome(string s,int i){
//     if(i>(s.length()-i-1)){
//         return true;
//     }
//     if(s[i]!=s[s.length()-i-1]){return false;}
//     else{
//     return checkPalidrome(s,i+1);}

// }
// int main(){
//     string  s = "abbaabba";
//     int ans = checkPalidrome(s,0);
//     if(ans){
//         cout<<"Palidrome"<<endl;
//     }
//     else{
//         cout<<"Not a palidrome"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int pow(int a,int b){
//     if(b==0){return 1;}
//     if(b==1){return a;}

//     int ans = pow(a,b/2);
//     if(b&1==1){
//         return a*ans*ans;
//     }
//     else{
//         return ans*ans;
//     }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<pow(a,b);
// }

// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     //base case
//     if(n==0||n==1){return;}
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     //Recursive function call
//     bubbleSort(arr,n-1);
// }
// int main(){
//     int arr[5] = {1,34,23,77,12};
//     bubbleSort(arr,5);
//     for(int i =0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// void selectionSort(int arr[],int n){
//     if(n==0 || n==1){return;}
//     int i = 0;
//     for(int j=i+1;j<n;j++){
//         if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//         }
//          i++;
//     }
//     //recursive call
//     selectionSort(arr,n-1);
// }
// int main(){
//     int arr[5]={12,3,454,21,3};

//    selectionSort(arr,5);
//    for(int i = 0;i<5;i++){
//       cout<<arr[i]<<" ";
//    }
// }

// #include<iostream>
// using namespace std;
// void insertionSort(int arr[],int n){
//     if(n==0||n==1){return;}
    
// }
// int main(){
//     int arr[5] = {23,41,1,34,21};

// }

// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>& arr, int s, int mid, int e){
    
//     int left = s;
//     int right = mid+1;


//     vector<int> index;
//     while(left<=mid && e>=right){
//         if(arr[left]<arr[right]){
//             index.push_back(arr[left]); 
//             left++;
//         }
//         else{
//             index.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         index.push_back(arr[left]);
//         left++;
//     }
//     while(e>=right){
//         index.push_back(arr[right]);
//         right++;
//     }
//     for(int i=s;i<=e;i++){
//         arr[i] = index[s-i];
//     }

// }

// void input(vector<int>& arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid = s+(e-s)/2;
//     input(arr,s,mid);
//     input(arr,mid+1,e);
//     merge(arr,s,mid,e);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     arr.push_back(2);
//     arr.push_back(8);
//     arr.push_back(1);
//     arr.push_back(4);
//     arr.push_back(6);
//     arr.push_back(7);

    
//     cout<<input(arr,0,n-1);

// }


// #include<iostream>
// #include<vector>

// using namespace std;

// void merge(int arr[],int s,int mid,int e){
//     int left = s;
//     int right = mid+1;
//     vector<int> arr2;
//     while(left<=mid && right<=e){
//         if(arr[left]>arr[right]){
//             arr2.push_back(arr[right]);
//             right++;
//         }
//         else{
//             arr2.push_back(arr[left]);
//             left++;
//         }
//     }
//     while(left<=mid){
//         arr2.push_back(arr[left]);
//         left++;
//     }
//     while(right<=e){
//         arr2.push_back(arr[right]);
//         right++;
//     }

//     for(int i=s;i<=e;i++){
//         arr[i] = arr2[i-s];
//     }

// }

// void mergeSort(int int[],int s, int e){
//     if(s>=e){return;}

//     mergeSort(arr,0,mid);
//     mergeSort(arr,mid+1,n);

//     merge(arr,s,mid,e);
// }
// int main(){
//     int arr[7] = {23,54,33,2,1,34,55};

//     cout<<mergeSort(arr,0,6);
    
// }

#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){

    int pivot = arr[s];

    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    //total small no ka index nikalna 
    int pivotIndex = s+count;

    //arr ko shi index p dalna 
    swap(arr[s],arr[pivotIndex]);

    //left and right ko sambahalna 
    int i = s;
    int j = e;
    while(i<=pivotIndex && e>=pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        while(i<=pivotIndex && e>=pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    if(s>=e){return;}

    int p = partition(arr,s,e);

    //for left part
    quickSort(arr,s,p-1);

    //for right part
    quickSort(arr,p+1,e);
}
int main(){
    int arr[10] = {12,5,223,23,23,456,76,32,22,23};
    int n = 10;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}