// lec 7 is leetcode problems

// switch

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the value of a: "<<endl;
//     cin>>a;
//     int b;
//     cout<<"Enter the value of b: "<<endl;
//     cin>>b;
//     char op;
//     cout<<"Enter the operator: "<<endl;
//     cin>>op;
//     switch(op){
//         case '+':cout<<(a+b);
//                 break;
//         case '-':cout<<(a-b);
//                 break;
//         case '*':cout<<(a*b);
//                 break;
//         case '/':cout<<(a/b);
//                 break;
//         case '%':cout<<(a%b);
//                 break;

//         default: cout<<"Please make a valid operation";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int amount = n;
//     cin >> n;
//     char op;
//     switch(op){
//         case 1: int hundred = (n/100);
//                 cout<<hundred<<endl;
//         case 2: int left = n - (hundred*100);
//                 int fifty = (left/50);
//                 cout<<fifty<<endl;
//         case 3: int left2 = left - (fifty*50);
//                 int twenty = (left2/20);
//                 cout<<twenty<<endl;
//                 break;
//     }
// }

//power of a power b

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = 1;
//     for(int i = 0;i<b;i++){
//          ans = ans * a;
//         // cout<<ans<<endl;
//     }
//     cout<<ans;
    
// }

// #include<iostream>
// using namespace std;
// int power(int num1,int num2){
//     // int a, b;
//     // cin>>a>>b;
//     // cout<<a<<endl;
//     int ans = 1;
//     for(int i = 1;i<=num2;i++){
//         ans = ans * num1;
//     }
//     return ans;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
    
//     int ans =power(a,b);
//     cout<<"The answer is: "<<ans;

//     int c,d;
//     cin>>c>>d;

//     int ans2=power(c,d);
//     cout<<"The answer is: "<<ans2;

//     int e,f;
//     cin>>e>>f;

//     int ans3=power(e,f);
//     cout<<"The answer is: "<<ans3;
//     return 0;
// }

// #include<iostream>
// using namespace std;     // 0 is odd  1 is even
// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }
    
//         return 1;
// }
// int main(){
//     int num;
//     cin>>num;
//     cout<<isEven(num);
// }

// #include<iostream>       //nCr program
// using namespace std;
// int factorial(int n){
//     int fac = 1;
//     for(int i = 1; i<=n ; i++){
//         fac = fac * i;
//     }return fac;
// }
// int nCr(int n,int r){
//     int num = factorial(n);
//     int deno = factorial(r)*factorial(n-r);
//     int ans = num/deno;
//     return ans;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int ans = nCr(n,r);
//     cout<<"The nCr of "<<n<<" and "<<r<<" is: "<<ans;
// }

// #include<iostream>
// using namespace std;

// //Function signature 
// void count(int n){

//     //Function body
//     for(int i = 1;i<=n;i++){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     //Function call
//     count(n);
// }

#include<iostream>       //prime number = 1    not prime number = 0
using namespace std;
bool isPrime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }return 1;
}
int main(){
    int num;
    cin>>num;
    
    

}