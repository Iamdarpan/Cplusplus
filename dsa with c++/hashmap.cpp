// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int hash[13] = {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }

//     int total;
//     cin>>total;
//     while(total--){
//         int num;
//         cin>>num;
//         cout<<hash[num]<<endl;
//     }return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int q;
//     cin>>q;

//     int hash[26] = {0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i] - 'a']++;
//     }


//     while(q--){
//         char n;
//         cin>>n;
//         //fetch
//         cout<<hash[n - 'a']<<" ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre compute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //iterate in the map
    // for(auto it: mpp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    int q;
    cin>>q;
    while(q--){
        int j;
        cin>>j;
        //fetch
        cout<<mpp[j]<<" ";
    }
}