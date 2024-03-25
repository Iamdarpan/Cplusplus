// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int bit ;
//     cin>>bit;
//     int ans = 0;
//     int i =0;
//     while(bit!=0){
//         int rem = bit&1;
//         ans = (rem * pow(10,i)) + ans;
//          bit = bit>> 1;
//         i++;
//     }
//     cout<<ans;

// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     int ans = 0;
//     int i = 0;
//     while(num!=0){
//         // int bit = 1&num;        compiler does not know it is a binary or normal
//         int digit= num%10;
//         if(digit == 1){
//             ans = ans + pow(2,i);
//         }
//         i++;
//         num = num/10;
        
//     }
//     cout<<ans;
// }

// #include<iostream>      //wrong answer

// using namespace std;
// int main(){
//     int bit;
//     cin>>bit;
//     while(bit!=0){
//         if(bit&1){
//             bit = ~bit;
//             // cout<<bit;
//         }
//         else if (bit&0){
//             bit = ~bit;
//             // cout<<bit;
//         }
//         bit = bit>>1;
        
//     }
//     bit = bit + 1;
//     cout<<bit;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int digit ;   
//     cin>>digit;
//     int ans=0;
//     while(digit != 0){
//         int rem = digit%10;
//         ans = (ans*10) + rem;
//         digit = digit/10;
//     }
//     cout<<ans;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     n = ~n;
//     // n=n+1;
//    cout<<n;
// }

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int digit;
    cin >> digit;
    int num = 0;
    int i = 0;
    while(digit!=0){
        int rem = digit%10;
        if(rem == 1){
            num = pow(2,i) + num;
        }
        i++;
        digit = digit/10;
    }
    cout<<num;
}