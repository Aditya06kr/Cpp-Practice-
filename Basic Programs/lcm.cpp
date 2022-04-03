#include <iostream>
using namespace std;

int lcm(int x,int y){
    int check=x,ans;
    while(true){
        if(check%x==0 && check%y==0){
            ans=check;
            break;
        }
        else{
            check++;
        }
    }
    return ans;
}

int main(){
    int a,b,x,y;
    cin>>a>>b;
    x=max(a,b);
    if(x==a){
        y=b;
    }
    else{
        y=a;
    }
    cout<<"Lcm is "<<lcm(x,y);

    return 0;
}
