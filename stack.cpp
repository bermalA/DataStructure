#include <iostream>

class Node
{
protected:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack : Node
{
private:
    Node *head;

public:
    Stack : head(nullptr) {}
};

int main()
{
    return 0;
}
