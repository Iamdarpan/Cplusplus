//-----------------LOOPS-----------------//

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin>>a>>b;
//     if(a<b){
//         cout<<"B is greater";
//     }
//     else{
//         cout<<"A is greater";
//     }
// }

// int main(){
//     int a = 2;
//     int b = 3;
//     if((a=3)==b){
//         cout<<a;
//     }
//     else
//     {
//         cout<<a+1;
//     }
// }

// int main(){
//     char user_input;
//     cin>>user_input;
//     int ascii = user_input;
//     if(ascii>=97 && ascii<=122){
//         cout<<"Lower case";
//     }
//     else if(ascii>=65 && ascii <=90){
//         cout<<"Upper case";
//     }
//     else if(ascii>=47 && ascii <=56){
//         cout<<"This is numeric";
//     }
//     else{
//         cout<<"Something new";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         cout<<"Print the number: "<<i<<endl;
//         i++;
//         }
// }

// int main(){
//     int n;
//     cout<<"Enter the number: "<<endl;
//     cin>>n;
//     int i = 1;
//     int sum = 0;
//     while(i<=n){
//         sum = sum + i;
//         i++;
//     }
//     cout<<"The sum of numbers is: "<<sum;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i = 2;
//     int sum = 0;
//     while(i<=n){
//         if(i%2==0){
//             sum = sum+i;
//         }
//             i = i+1;
//     }
//     cout<<"The total sum of even number is: "<<sum;
// }

// -----------------Pattern---------------

#include <iostream>
using namespace std;
// int main()
// {
//     int i = 1;
    
//     int n;
//     cin >> n;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << "*"
//                  << " ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

int main(){
    int n ;
    cin>>n;
    int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<n-j+1<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
            
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
            
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
            
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // while(i<=n){
    //     int j = 1;
    //     int value = i;
    //     while(j<=i){
            
    //         cout<<value<<" ";
    //         value++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
            
    //         cout<<i-j+1<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    
    // while(i<=n){
    //     int j = 1;
        
    //     while(j<=n){
    //         char ch = 'A' + i -1;
    //         cout<<ch<<" ";
            
    //         j++;
    //     }
        
    //     i++;
    //     cout<<endl;
    // }
    // while(i<=n){
    //     int j = 1;
        
    //     while(j<=n){
    //         char ch = 'A' + j -1;
    //         cout<<ch<<" ";
            
    //         j++;
    //     }
        
    //     i++;
    //     cout<<endl;
    // }
    
    
    // char ch = 'A' ;
    // while(i<=n){
    //     int j = 1;
        
    //     while(j<=n){
            
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
        
    //     i++;
    //     cout<<endl;
    // }

    
    // while(i<=n){
    //     int j = 1;
    //     // char ch = 'A'+i+j-2 ;
    //     while(j<=n){
    //          char ch = 'A'+i+j-2 ;
    //         cout<<ch<<" ";
    //         j++;
    //     }
       
    //     i++;
    //     cout<<endl;
    // }
    
    //  int j = 1;
        
    //     while(j<=i){
    //         char ch = 'A'+i-1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // char ch = 'A';
    //  while(i<=n){
    //  int j = 1;
       
    //     while(j<=i){
            
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    
    //  while(i<=n){
    //     int j = 1;
       
    //     while(j<=i){
    //         char ch = 'A'+ i +j -2;
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // while(i<=n){
    //     int j = 1;
    //     char ch = 'A'+ n -i;
    //     while(j<=i){
            
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // while(i<=n){
    //     int j =1;
    //     char ch = 'A'+i-1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
       
    // }
    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space = space - 1;
    //     }
    //     int j =1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // while(i<=n){
    //     int j=1;
    //     while(j<=n-i+1){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // while(i<=n){
    //     int space =i-1;
    //     while(space){
            
    //         cout<<" ";
    //         space--;
            
    //     }
    //     int j=1;
    //     while(j<=n-i+1){
    //         cout<<"*";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // while(i<=n){
    //     int space = i-1;
    //     while(space){
    //         cout<<" ";
    //         space = space -1;
    //     }
    //     int j =1;
    //     while(j<=n-i+1){
    //         cout<<i;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int count = 1;
    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // while(i<=n){
    //     int space = i-1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=n-i+1){
    //         cout<<i+j-1;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }
    //     int k = 1;
    //     while(k<=i-1){
    //         cout<<i-k;
    //         k++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // while(i<=n){
    //     int j = 1;
    //     while(j<=n-i+1){
    //         cout<<j;
    //         j++;
    //     }
    //     int p = 1;
    //     while(p<=i-1){
    //         cout<<"*";
    //         p++;
    //     }
    //     int q=1;
    //     while(q<=i-1){
    //         cout<<"*";
    //         q++;
    //     }
    //     int k = 1;
    //     while(k<=n-i+1){
    //         cout<<n-k+1;
    //         k++;
    //     }
        
    //     i++;
    //     cout<<endl;
    // }

    // while(i<=n){            //   5 4 3 2 1
    //     int space = i-1;    //     4 3 2 1
    //     while(space){         //     3 2 1
    //         cout<<" ";          //     2 1
    //         space--;              //     1
    //     }
    //     int j = 1;
    //     while(j <= n-i+1){
    //         cout<<n-j+1;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    while(i<=n){
        int k = 1;
        while(k<=n-i+1){
            cout<<k;
            k++;
        }
        int space = i -1;
        while(space){
            cout<<"*";
            space--;
        }
        space = i -1;
        while(space){
            cout<<"*";
            space--;
        }
        int j = 1;
        while(j<=n-i+1){
            cout<<n-i+2-j;
            j++;
        }
        i++;
        
        cout<<endl;
    }
}