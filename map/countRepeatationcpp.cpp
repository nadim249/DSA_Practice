#include<iostream>
using namespace std;

int main(){

    int n=6;
    int A[n]={4,2,4,2,1,3};
    int hash[12]={0};

    for(int i=0;i<n;i++){
        hash[A[i]]++;
    }
    int q;
    cout<<"enter test case:";
    cin>>q;

    while(q--){
        int a;
        cout<<"enter to see repeat : ";

        cin>>a;

        cout<<a <<" is "<<hash[a]<<" times in the array"<<endl;
    }
}
