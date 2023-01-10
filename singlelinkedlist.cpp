// A single linked list and methods program
#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int data, Node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

class SingleList
{
public:
    Node *head;
    SingleList(int data)
    {
        head = new Node(data);
    }
    void push_back(int data);
    void print();
};

void SingleList::push_back(int data)
{
    Node *temp = head;
    if (temp->next != nullptr)
        temp = temp->next;
    temp->next = new Node(data);
}

void SingleList::print()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}

int main()
{
    SingleList *sll = new SingleList(5);
    sll->push_back(15);
    sll->print();

    return 0;
}