#include<iostream>
using namespace std ;

void pattern(int num){
    int i = 1 ;
    
    while(i <= num){
        int j = 1 ;
        while(j<=num){
            if(i == 1 || i == num){
                cout<<"*"<<" ";
                
            }
            else{
               if(j ==1 || j == num){
                   cout<<"*"<<" ";
               }
               else{
                   cout<<"  " ;
               }
            }
            j++ ;
        }
        cout<<endl;
        i++;
    }
}


int main(){
    int length ;
    cin>>length;
    pattern(length);
    return 0 ;
    
}