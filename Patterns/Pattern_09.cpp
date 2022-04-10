// Floyd's Triangle 

/* 

1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15

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
            count+=1;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}
