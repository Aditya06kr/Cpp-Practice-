// Inverted Half pyramid

/* 

*****
****
***
**
*

*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number of row :- ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=num;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
  
    return 0;
}