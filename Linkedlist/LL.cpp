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
//Delete

Node* removehead(Node* head){
    if(head==NULL) return head;
    Node* temp =head;
    head=head->next;
    delete temp;
    return head;
}

Node* removetail(Node* head){
    if(head==NULL || head->next ==nullptr) return NULL;
             Node* temp=head;
     while(temp->next->next != nullptr) {
        temp=temp->next;
     }
     free(temp->next);
     temp->next=nullptr;

     return head;
}

Node* removeinLL(Node* head,int tar){
    if(head==NULL) return head;
    
    if(head->data == tar){
       Node* temp =head;
       head=head->next;
       free(temp);
       return head;
    }

    Node* temp =head;
    while(temp->next != nullptr){
        if(temp->next->data ==tar){
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
    return head;

}

//Insert head

Node* insertHead(Node* head,int val){
    Node* temp=new Node(val,head);
    return temp;
}

//insert tail

Node* insertLast(Node* head,int val){
    if(head==nullptr){
        return new Node(val);
    }
    Node* temp=head;

    while(temp->next != nullptr){
        temp=temp->next;
    }

    Node* newNode=new Node(val);
    temp->next=newNode;

    return head;
}


Node* insertkth(Node* head,int k,int val){
    if(head ==nullptr){
        return new Node(val);
    }

   if(k==1){
    Node* temp=new Node(val,head);
    return temp;
    }

    int cnt=0;
    Node* temp=head;

    while(temp != nullptr){
        cnt++;
        if(cnt ==k-1){
            Node* newNode=new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }

        temp=temp->next;
    }

    return head;

}
int main(){

vector<int> arr={2,5,8,10,7};
Node* head=converArrtoLL(arr);
printLL(head);
cout<<LengthLL(head)<<endl;

searchLL(11,head);

//head=removehead(head);
//printLL(head);

head=removetail(head);
printLL(head);

//head=removeinLL(head,8);
//printLL(head);

head=insertHead(head,34);
printLL(head);

head=insertLast(head,45);
printLL(head);

head=insertkth(head,3,57);
printLL(head);

}
