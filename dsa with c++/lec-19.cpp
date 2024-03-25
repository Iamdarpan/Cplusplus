// -------------Standard Template Library--------------

// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     array<int,4> a = {2,3,4,5};
//     int n = a.size();
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"Element at 2nd index is: "<<a.at(2)<<endl;
//     cout<<"Empty or not: "<<a.empty()<<endl;
//     cout<<"First element: "<<a.front()<<endl;
//     cout<<"Last element: "<<a.back()<<endl;

// }

// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> a;
//     int n = a.size();
//     a.push_back(1);
//     a.push_front(2);
//     for(int i:a){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     a.pop_front();
//     for(int i:a){
//         cout<<i<<" ";
//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<string> s;
//     s.push("Darpan");
//     s.push("Goel");
//     s.push("Kumar");
//     cout<<"Top element: "<<s.top()<<endl;
//     s.pop();
//     cout<<"Top element: "<<s.top()<<endl;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string> q;
//     q.push("Darpan");
//     q.push("Goel");
//     q.push("Kumar");
//     cout<<"Front element: "<<q.front();
//     q.pop();
//     cout<<"Front element: "<<q.front();

    
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int> maxi;
//     priority_queue<int,vector<int>,greater<int>> mini;
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(1);
//     maxi.push(6);
//     maxi.push(4);
//     int n = maxi.size();
//     cout<<"Maximum element is: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }
//     cout<<endl<<maxi.size()<<endl;
//     mini.push(4);
//     mini.push(5);
//     mini.push(9);
//     mini.push(1);
//     mini.push(2);
//     int m = mini.size();
//     cout<<"Mini element is: "<<endl;
//     for(int i = 0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
// }

// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int> s;
//     s.insert(5);
//     s.insert(4);
//     s.insert(3);
//     s.insert(8);
//     s.insert(2);
//     s.insert(5);
//     s.insert(5);
//     for(int i:s){
//         cout<<i<<" ";
//     }
    
// }

#include <iostream>
#include<vector>
using namespace std;

int main() {
    //Write your code here
    vector<int> arr;
    int n = arr.size();
    for(int i =0;i<n;i++){
        arr.push_back(i);
    }
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = arr[i];
    }
    return ans;
}