// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//        return ;
//     }
//     print(n-1);
    
//     cout<<n<<endl;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;

//     print(n);
// }


// #include<iostream>
// using namespace std;
// void home(int dist,int step){
//     cout<<"step: "<<step<<" at distance: "<<dist<<endl;
//     if(step==dist){
//        cout<<"pauch gaya: ";
//        return;}
    
//     step++;
//     home(dist,step);
    
// }
// int main(){
//     int dist; 
//     cin>>dist;
//     int step;
//     cin>>step;
//     home(dist,step);
// }


#include<iostream>
using namespace std;
void countdigit(int n,string arr[]){
    if(n==0){
        return;
    }
    int digit = n%10;
    n = n/10;
    countdigit(n,arr);
    cout<<arr[digit]<<" ";

}

int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    countdigit(n,arr);
}