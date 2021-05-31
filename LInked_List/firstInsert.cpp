#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;

        Node(int data){
            this->data  = data;
            next = NULL;
        }
};
void print(Node* head){
    Node* trv = head;
    while(head !=  NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

Node *takeInput(){
    Node *head = NULL;
    Node *tail = NULL;
    cout<<"Please enter the data: "<<endl;
    int data;
    cin>>data;
    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            n->next = head;
            head = n;
        }
        
        cin>>data;
    }
    return head;
}



int main(){
    Node *nx = takeInput();
    print(nx);

    return 0;
}