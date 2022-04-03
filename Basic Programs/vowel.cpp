#include<iostream>

using namespace std;

int main(){
    char char1;
    cout<<"Enter a letter :- ";
    cin>>char1;

    int vowel1 = (char1=='a' || char1=='e' || char1=='i' || char1=='o' || char1=='u');
    int vowel2 = (char1=='A' || char1=='E' || char1=='I' || char1=='O' || char1=='U');
    
    if(vowel1==1 || vowel2==1){
         cout<<char1<<" is a vowel."<<endl;
    }
    else{
        cout<<char1<<" is a consonant."<<endl;
    }
    return 0;
}