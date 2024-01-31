#include<iostream>
using namespace std ;

void pattern(int num){        // function to print pattern
    for(int i = 1 ; i <= num ; i++){
        for(int j = num ; j >=i ; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
   int height ;
   cin>>height;           // takng input for heigth of triangle
   pattern(height);       // calling user defined function 
   return 0 ;

}