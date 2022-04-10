// Solid Rectangle 
/* *****
   *****
   *****
   *****
   *****           */

#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter number of row :- ";
    cin>>row;
    cout<<"Enter number of column :- ";
    cin>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<"*";  
        }
        cout<<"\n";
    }
    return 0;
}