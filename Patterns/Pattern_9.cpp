// Floyd's Triangle 

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
