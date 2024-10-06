#include<iostream>
using namespace std;


int main(){

    string s;
    cout<<"enter string: ";
    cin>>s;
    int hash[255]={0};

    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cout<<"enter test case:";
    cin>>q;

    while(q--){
        char a;
        cout<<"enter to see repeat : ";

        cin>>a;

        cout<<a <<" is "<<hash[a]<<" times in the array"<<endl;
    }
}
