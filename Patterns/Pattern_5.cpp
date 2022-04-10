// Half Pyramid after 180 degree rotation

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number of row :- ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=num;j>=1;j--){
            if(j>i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        
        cout<<endl;
    }
  
    return 0;
}