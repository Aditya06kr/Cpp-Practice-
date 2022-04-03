#include<iostream>

using namespace std;

void fun(int i){
    if(i%2==0){
        cout<<i<<" is an even number."<<endl;
    }
    else{
        cout<<i<<" is an odd number."<<endl;
    }
    return;
}

int main(){
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    fun(num);
    return 0;
}