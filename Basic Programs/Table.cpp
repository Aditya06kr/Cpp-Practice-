#include<iostream>

using namespace std;

int main(){
//     for(int i=1;i<=50;i++){
//         cout<<i++<<endl;
//     }
    int num;
    cout<<"Tell me a number : ";
    cin>>num;
    int i=1;
    do{
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
        i++;
    }while(i<=10);
}
