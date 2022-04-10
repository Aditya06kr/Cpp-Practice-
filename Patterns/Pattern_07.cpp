// Inverted Half Pyramid using numbers
/*

1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number of row :- ";
    cin>>num;
    for(int i=num;i>=1;i--){        // i=0;i<n;i++
        for(int j=1;j<=i;j++){      // j=1;j<n-i;j++
            cout<<j<<" ";          
        }
        cout<<endl;
    }
    return 0;
}
