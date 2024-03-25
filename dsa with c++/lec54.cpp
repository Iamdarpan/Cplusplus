// #include<iostream>
// #include<stack>
// using namespace std;
// class Stack{
//     public:
//     int top;
//     int *arr;
//     int size;

//     Stack(int size){
//         this->size = size;
//         top = -1;
//         arr = new int[size];
//     }

//     void Push(int element){
//         if(size - top > 1){
//             top++;
//             arr[top] = element;
//         }
//         else{
//             cout<<" Stack overflow "<<endl;
//         }
//     }

//     void pop(){
//         if(top >= 0){
//             top--;
//         }
//         else{
//             cout<<" Stack underflow "<<endl;
//         }
//     }

//     int peek(){
//         if(top >= 0){
//             return arr[top];
//         }
//         else{
//             cout<<" Stack is empty "<<endl;
//             return -1;
//         }
//     }

//     bool empty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
//     Stack s(5);
//     s.Push(12);
//     s.Push(5);
//     s.Push(15);
//     s.Push(7);
//     s.Push(15);
//     s.Push(7);
//     cout<<s.peek()<<endl;
//     s.pop();
//     cout<<s.peek()<<endl;
//     s.pop();
//     cout<<s.peek()<<endl;
//     s.pop();
//     cout<<s.peek()<<endl;
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();

//     // cout<<s.peek()<<endl;
//     cout<<s.empty()<<endl;
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string str = "Darpan";
//     stack<char> s;

//     for(int i = 0;i<str.length();i++){
//         char ch = str[i];
//         s.push(ch);
//     }
    
//     string ans = "";
//     while(!s.empty()){
//         char ch = s.top();
//         ans.push_back(ch);
//         s.pop();
//     }
//     cout<<"ans is: "<<ans<<endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// bool canPlace(const vector<int>& A, int N, int K, int mid) {
//     int count = 1;
//     int prev = A[0];
//     for (int i = 1; i < N; i++) {
//         if (A[i] - prev >= mid) {
//             count++;
//             prev = A[i];
//         }
//     }
//     return count >= K;
// }

// int largestMinDistance(vector<int>& A, int N, int K) {
//     sort(A.begin(), A.end());
//     int low = 1;
//     int high = A[N - 1] - A[0];
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (canPlace(A, N, K, mid)) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return high;
// }

// int main() {
//     int N, K;
//     cin >> N >> K;
//     vector<int> A(N);
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }
//     int result = largestMinDistance(A, N, K);
//     cout << result << endl;
//     return 0;
// }


// #include <iostream>
// #include <regex>

// using namespace std;

// bool isValidPhoneNumber(const string& phoneNumber) {
//     regex pattern("^(\\+91|0)?[1-9][0-9]{9}$");
//     return regex_match(phoneNumber, pattern);
// }

// int main() {
//     int N;
//     cin >> N;
//     cin.ignore(); // to consume the newline after reading N

//     for (int i = 0; i < N; i++) {
//         string phoneNumber;
//         getline(cin, phoneNumber);

//         bool isValid = isValidPhoneNumber(phoneNumber);
//         cout << (isValid ? "True" : "False") << endl;
//     }

//     return 0;
// // }


#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int *a = &num;
    cout<<*a<<endl;
    cout<<a<<endl;
    cout<<&a[0]<<endl;
}
