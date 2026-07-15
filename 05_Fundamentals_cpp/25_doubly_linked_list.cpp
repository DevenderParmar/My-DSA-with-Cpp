#include <iostream>
using namespace std;

class Node
{

public:
    int value;
    Node *next;
    Node *prev;

    Node(int val)
    {
        value = val;
        next = prev = NULL;
    }
};
class DoublyLinkedList
{

    Node *head = NULL;
    Node *tail = NULL;

public:
    void push_front(int val)
    {

        Node *newnode = new Node(val);

        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {

            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        return;
    }

    void push_back(int value)
    {

        Node *newnode = new Node(value);

        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        return;
    }

    void pop_front()
    {

        if (head == NULL)
        {
            cout << "The list is empty Nothing to DELETE";
            return;
        }
        if (head->next == NULL)
        {
            head = tail = NULL;
            delete head;
            cout << "The List in now empty";
            return;
        }
        else
        {

            Node *temp = head;
            head = head->next;
            head->prev = NULL;

            delete temp;
            return;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "The list is empty Nothing to DELETE";
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
            cout << "The List in now empty";
            return;
        }
        else{

            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;

            temp->prev = NULL;
            delete temp;
            return;

        }
    }
    void printlist()
    {
        Node *temp = head;

        while (temp != NULL)
        {

            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
        return;
    }
};

int main()
{

    DoublyLinkedList dll;
    // dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);

    // dll.pop_front();
    dll.pop_back();

    dll.printlist();

    return 0;
}