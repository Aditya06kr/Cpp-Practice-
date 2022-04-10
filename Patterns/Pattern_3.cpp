// Half Pyramid Pattern using Stars
/* 

*
**
***
****
*****

*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number of row :- ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int count=1;count<=i;count++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}