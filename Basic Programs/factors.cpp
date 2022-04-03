#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count+=1;
            cout<<i<<endl;
        }
    }
    cout<<"Total Factors of "<<num<<" is "<<count<<endl;
    return 0;
}