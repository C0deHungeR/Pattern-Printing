#include<iostream>
using namespace std ;

int main(){
    int n ;
    cin>>n; // height of triangle
    
    int row = 1;
    while(row <= n){
        // to print spaces
        int space = n - row ;
        while(space){
            cout<<" ";
            space--;
        }
        // to print stars
        int col = 1 ;
        while(col <= row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0 ;

}