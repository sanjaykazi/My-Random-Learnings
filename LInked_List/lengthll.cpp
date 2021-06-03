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

Node *takeInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Please enter the data: " << endl;
    int data;
    cin >> data;
    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head;
            head = n;
        }

        cin >> data;
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
int main()
{
    Node *nx = takeInput();
    print(nx);
    cout << endl;
    cout << "Lengthh of the given linked list is: " << length(nx) << endl;

    return 0;
}