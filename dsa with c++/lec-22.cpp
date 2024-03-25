// #include<iostream>
// using namespace std;
// int getlength(char name[]){
//     int count  = 0;
//      for(int i =0;name[i] != '\0';i++){
//         count++;
//      }
//      return count;
// }
// int main(){
//     char name[10];
//     cout<<"Enter the name"<<endl;
//     cin>>name;
//     // cout<<name.size();
//     cout<<name<<endl;
//     cout<<"Length: "<<getlength(name);
// }

// #include <bits/stdc++.h> 
// #include<string>
// bool checkChar(char ch){
//     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' &&  ch<='9')){
//         return 1;
//     }
//     return 0;
// }
// char lowercase(char ch){
//     if(ch>='a' && ch<='z'){return ch;}
//     else{
//         char temp = ch - 'A'+'a';
//         return temp;
//     }
// }
// bool checkPalindrome()
// {
//     // Write your code here.
//     int n = s.length();
// 	int st =0 ;
// 	int e =n-1;
// 	while(st<=e && !checkChar(s[st])){
//         st++;
//     }
//     while(st<=e && !checkChar(s[e])){
//         e--;
//     } 

// 	if(st<=e){
// 		if(lowercase(s[st])!=lowercase(s[e])){return "No";}
//         else{st++;e--;}
//         return "Yes"; 
// 	}
    
// }
// int main(){
//     char s;
   
// }