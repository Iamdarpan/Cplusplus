#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;

    int row;
    cin>>row;

    int col;
    cin>>col;
    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    //input
    for(int i=0;i<row;i++){
        for(int j= 0 ;j<col;j++){
            cin>>arr[i][j];
        }
    }
   
    //output
    for(int i=0;i<row;i++){
        for(int j= 0 ;j<col;j++){
            cout<<arr[i][j]<<" ";

        }cout<<endl;
    }

    //releasing a memory
    for(int i=0;i<row;i++){
        delete[]arr[i];
    }
    delete[]arr;

}