#include<iostream>                      // header file
using namespace std ;

void Pattern(int num){                   // function to print square pattern
    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < num ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){                               // main function
    int length ;

    cin>>length;                            // taking input for side length of square 

    Pattern(length);                        // calling user defined function

    return 0 ;
}