// Queue implementation
// based on single linked list
#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue
{
    int count;
    Node *front;
    Node *back;

public:
    Queue()
    {
        count = 0;
        front = nullptr;
        back = nullptr;
    }
    int size();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int peek();
    void print();
};

int Queue::size()
{
    return count;
}

bool Queue::isEmpty()
{
    return front == nullptr;
}

void Queue::enqueue(int data)
{
    Node *temp = new Node(data);
    if (isEmpty())
        front = back = temp;
    else
    {
        back->next = temp;
        back = temp;
    }
    count++;
}

void Queue::dequeue()
{
    if (isEmpty())
        return;
    Node *temp = front;
    front = front->next;
    delete temp;
    count--;
}

int Queue::peek()
{
    if (isEmpty())
        return -1;
    else
        return front->data;
}

void Queue::print()
{
    Node *temp = front;
    while (temp != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}

int main()
{
    Queue *q = new Queue();
    q->enqueue(5);
    q->enqueue(15);
    q->enqueue(8);
    q->print();
    q->dequeue();
    q->print();
    return 0;
}