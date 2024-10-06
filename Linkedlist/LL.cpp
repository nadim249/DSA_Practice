#include<bits/stdc++.h>
using namespace std;
//LL Node
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }



};
//Covert a array to LL
Node* converArrtoLL(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* move =head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        move->next=temp;
        move=temp;
    }

    return head;
}

//LL print

void printLL(Node* head){

    Node* temp=head;

    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
//LL Length
int LengthLL(Node* head){

    Node* temp=head;
    int count=0;

    while(temp != nullptr){
        count++;
        temp=temp->next;
    }

    return count;
}

//Find a number in LL

void searchLL(int target,Node* head){
     Node* temp=head;

    while(temp != nullptr){
        if(temp->data == target){
            cout<<target<<" Found"<<endl;
            return ;
        }
        temp=temp->next;
    }

    cout<<"Not Found"<<endl;

}




int main(){

vector<int> arr={2,5,8,10,7};
Node* head=converArrtoLL(arr);
printLL(head);
cout<<LengthLL(head)<<endl;

searchLL(11,head);

}
