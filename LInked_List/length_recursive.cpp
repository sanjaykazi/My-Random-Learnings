#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head)
{
    Node *trv = head;
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
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
            tail->next = n;
            tail = n;
        }
        
        cin>>data;
    }
    return head;
}
int length(Node *head)
{
    int count = 0;
    if (head == NULL)
    {
        return 0;
    }
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void iPrint(Node *head, int x){
    Node *temp = head;
    int len = length(head);
    if (head == NULL){
        cout<<"The linked list is empty"<<endl;
    }
    if(x < 0 || x >= len){
        cout<<"This is not a valid index for the given linked list."<<endl;
        return;
    }
    int count = 1;
    while(count <= x && head){
        temp = temp->next;
        count++;
    }
    cout<<temp->data<<" is present at "<<x<<" the index."<<endl;
}
Node* deletionIthPosition(Node *head, int i){
    if(i < 0){
        return head;
    }
    if(i == 0){
        Node *newHead = head->next;
        head->next = NULL;
        delete head;
        return newHead;
    }
    Node *cpy = head;
    int count = 1;
    while(count <= i-1 && head){
        head = head->next;
        count++;
    }
    if(head && head->next){
        // first attach the new node to the last part as we'll loose connection with it if we do it 
        // other way round
        Node * temp = head->next;
        head->next = temp->next;
        temp->next = NULL;
        delete temp; // prevents memory leakage.
        return cpy;
    }
    return cpy;
}

int len(Node * head){
    if(head == NULL) return 0;
    int small = len(head->next);
    return small + 1;
}

bool isPresent(Node *head, int data){
    Node *n = head;
    while(n->data != NULL){
        if(n->data == data){
            return true;
        }
        n = n->next;
    }
    return false;
}
bool isPresent2(Node *head, int data){
    if(head == NULL) return false;
    if(head->data == data) return true;
    
    return isPresent2(head->next, data);
}
int main()
{
    Node *nx = takeInput();
    print(nx);
    cout << endl;
    cout << "Lengthh of the given linked list is: " << length(nx) << endl;
    iPrint(nx, 2);
    cout<<endl;
    nx = deletionIthPosition(nx, 3);
    print(nx);
    cout<<endl;
    cout<<len(nx)<<endl;
    if(isPresent2(nx,49)){
        cout<<"present"<<endl;
    }else{
        cout<<"Not present"<<endl;
    }
    return 0;
}