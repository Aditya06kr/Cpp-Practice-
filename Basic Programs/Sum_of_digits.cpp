#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, N;
    cout<<"Total no. of test cases "<<endl;
	cin>>T;
	for(int i=0;i<T;i++){
        cout<<"Enter a number"<<endl;
	    cin>>N;
        int num=N;
	    int sum=0;
	    while(N>0){
	        sum+=N%10;
	        N=N/10;
	    }
	    cout<<"Sum of digits of "<<num<<" is "<<sum<<endl; 
	}
	
	return 0;
}