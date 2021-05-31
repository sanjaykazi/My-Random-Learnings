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
int main(){
    // Nodes created statically
    Node n1(5);
    Node n2(7);
    Node *head = &n1;
    Node n3(6);
    Node n4(1);
    Node n5(9);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    cout<<endl;
    print(head);
    cout<<endl;
    // dynamica
    Node *n6 = new Node(11);
    Node *n7 = new Node(12);
    Node *n8 = new Node(13);
    Node *n9 = new Node(14);
    Node *n10 = new Node(15);

    n6->next = n7;
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;

    print(n6);
    // cout<<n1.data<<" "<<n2.data<<endl;

    // Node *head = &n1;

    // //Nodes created dynamically
    // Node *n3 = new Node(21);
    // Node *n4 = new Node(49);

    // n3->next = n4;

    return 0;
}