#include<bits/stdc++.h>
using namespace std;
//LL Node
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
};

//covert array to dLL;

Node* covertArrToDl(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }

    return head;
}
//Print doubly LinkedList
void printDLL(Node* head){
     Node* temp=head;

    while(temp != nullptr){
        cout<<temp->data<<"<-->";
        temp=temp->next;
    }
    cout<<endl;

}

//Delete doubly LL

Node* deleteHead(Node* head){
    if(head==NULL || head->next ==NULL){
        return NULL;
    }

    Node* prev=head;
    head=head->next;
    prev->next=nullptr;

    delete prev;
    return head;

}


Node* deleteTail(Node* head){
    if(head==nullptr || head->next ==nullptr){
        return nullptr;
    }

    Node* tail=head;
    while (tail->next !=nullptr)
    {
        tail=tail->next;
    }
    
    Node* newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;

    delete tail;
    return head;

}
Node* removekth(Node* head,int k){
    if(head==nullptr){
        return nullptr;
    }

    int cnt=0;
    Node* knode=head;

    while(knode !=nullptr){
        cnt++;
        if(cnt ==k) break;
        knode=knode->next;
    }

    Node* prev=knode->back;
    Node* front=knode->next;

    if(prev==nullptr && front ==nullptr){
        return nullptr;

    }else if(prev==nullptr){
        return deleteHead(head);

    }else if(front==nullptr){
        return deleteHead(head);
    }

    prev->next=front;
    front->back=prev;
    
    knode->next=nullptr;
    knode->back=nullptr;
    delete knode;

    return head;
}

int main(){

vector<int> arr={2,5,8,10,7};
Node* head=covertArrToDl(arr);
printDLL(head);

head=deleteHead(head);
printDLL(head);

head=deleteTail(head);
printDLL(head);

head=removekth(head,2);
printDLL(head);


}
