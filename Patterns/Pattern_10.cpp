// 0-1 pattern

/* 

0 
1 0
1 0 1
0 1 0 1
0 1 0 1 0

*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter number of row :- ";
    cin>>row;
    int count=0;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if(count==0){
                cout<<count<<" ";
                count=1;
            }
            else{
                cout<<count<<" ";
                count=0;
            }
        }
        cout<<endl;
    }
    return 0;
}