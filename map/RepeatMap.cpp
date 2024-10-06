#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=6;
    int A[n]={4,2,6,2,1,3};
    map<int,int>mp;

    for(int i=0;i<n;i++){
        mp[A[i]]++;
    }
    int q;
    cout<<"enter test case:";
    cin>>q;

    while(q--){
        int a;
        cout<<"enter to see repeat : ";

        cin>>a;

        cout<<a <<" is "<<mp[a]<<" times in the array"<<endl;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}
