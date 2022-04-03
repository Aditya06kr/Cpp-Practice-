#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, N;
    cout<<"Total Number of Testcases ";
	cin>>T;
	for(int i=0;i<T;i++){
	    int fdigit=0, ldigit=0, count=0;
        cout<<"Enter a number ";
	    cin>>N;
        int num=N;
	    while(N>0){
	        if (count==0){
	            ldigit+=N%10;
	            count=1;
	        }
	        fdigit=N;
	        N=N/10;
	    }
	    cout<<"Sum of first and last digit of "<<num<<" is "<<fdigit+ldigit<<endl;
	}
	return 0;
}