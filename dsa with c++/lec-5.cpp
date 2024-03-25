// ---------------For Loop-------------

#include<iostream>
using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int sum = 0;
//     for(int i = 0; i<=n;i++){
//     sum = sum + i;}
//     cout<<sum;
// }

// int main(){
//     int n;
//     cin>>n;
//     int a = 0;
//     int b = 1;
//     cout<<a<<" "<<b<<" ";
//     for(int i = 0;i<n-2;i++){
//         int c = a+b;
//         cout<<c<<" ";
//         a = b;
//         b = c;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     bool is_bool = true;
//     cin>>n;
//     for(int i =2;i<n;i++){
//         if(n%i==0){
//             is_bool = false;
//             break;
//         }
//     }
//     if(is_bool == false){
//         cout<<"It is not a prime number:"<<n;

//     }
//     else{
//         cout<<"It is a prime number:"<<n;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0;i<=5;i--){
//         cout<<i<<" ";
//         i++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    // for(int i = 0;i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    for(int i = 0;i<5;i++){
        for(int j =i;j<=5;j++){
            cout<<i<<" "<<j<<endl;
        }
    }
}