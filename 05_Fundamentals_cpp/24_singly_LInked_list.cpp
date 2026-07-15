#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{

    Node *head = NULL;
    Node *tail = NULL;

public:
    void push_front(int value)
    {

        Node *newNode = new Node(value);

        if (head == NULL)
        {

            head = tail = newNode;
            return;
        }
        else
        {

            newNode->next = head;
            head = newNode;
            return;
        }
    }

    void push_back(int value)
    {

        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        tail = newNode;
        return;
    }

    void pop_front()
    {

        if (head == NULL)
            return;
        Node *temp = head;

        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {

        if (head == NULL)
        {

            cout << "The linkedlist is EMPTY";
            return;
        }
        if (head->next == NULL)
        {

            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *last = temp->next;
        temp->next = NULL;
        delete last;
    }

    void insertAtMiddle(int value, int position)
    {
        
        Node *newnode = new Node(value);
        if (position < 0)
        {
            cout << "Invalid position";
            delete newnode;
            return;
        }
        
        if (position == 0)
        {
            newnode->next = head;
            head = newnode;
            if (tail == NULL)
            tail = newnode;
            return;
        }
        
        
        if (head == NULL)
        {
            cout << "The LIST is empty";
            delete newnode;
            return;
        }
        
        
        Node *temp = head;
        
        for (int i = 0; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "invalid position";
            delete newnode;
            return;
        }
        
        newnode->next = temp->next;
        temp->next = newnode;
        
        if (newnode->next == NULL)
        {
            tail = newnode;
        }
    }

    void search(int value){

        if(head == NULL){
            cout<< "The list is empty";
            return;
        }

        Node* temp = head;

        while(temp != NULL){
            
            if(temp->data == value)
            {
                cout<<"The Value Exist in the List";
                return;
            }
            temp = temp->next;
        }
        if(temp == NULL){
            cout<<"This value does not Exist in the List";
            return;
        }
    }
    void print()
    {
    
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    
    LinkedList ll;
    
    ll.push_front(1);
    ll.push_front(3);
    ll.push_front(2);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.pop_front();

    ll.pop_back();

    ll.print();

    ll.insertAtMiddle(2, 1);
    ll.print();

    ll.search(0);

    return 0;
}