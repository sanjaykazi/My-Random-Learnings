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
int main(){
    Node n1(5);
    Node n2(7);
    n1.next = &n2;
    cout<<n1.data<<" "<<n2.data<<endl;

    Node *head = &n1;


    return 0;
}