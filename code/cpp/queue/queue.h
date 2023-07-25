#include <iostream>
#include "customer.h"

typedef Customer Item;
// #define Customer Item

class Queue
{
private:
    struct Node
    {
        Item item;
        Node *next = nullptr;
    };
    int items = 0;
    const int qsize = 10;
    Node *front_ = nullptr;
    Node *reverse_ = nullptr;

public:
    Queue(int qs = 10);
    ~Queue();
    bool isFull();
    bool isEmpty();
    bool append(const Item &item);
    bool remove();
    void info();
};

Queue::Queue(int qs) : qsize(qs)
{
}

Queue::~Queue()
{
}

bool Queue::isFull()
{
    if (items == qsize)
        return true;
    else
        return false;
}

bool Queue::isEmpty()
{
    if (items == 0)
        return true;
    else
        return false;
}

bool Queue::append(const Item &item)
{
    if (isFull())
    {
        std::cout << "queue is full." << std::endl;
        return false;
    }
    Node *add = new Node;
    add->item = item;
    if (front_ == nullptr)
    {
        front_ = reverse_ = add;
        items++;
        return true;
    }
    reverse_->next = add;
    reverse_ = add;
    items++;
    return true;
}

bool Queue::remove()
{
    if (isEmpty())
    {
        std::cout << "queue is empty." << std::endl;
        return false;
    }
    if (front_ == reverse_)
    {
        delete front_;
        front_ = reverse_ = nullptr;
        items--;
        return true;
    }
    Node* temp = front_->next;
    delete front_;
    front_ = temp;
    items--;
    return true;
}

void Queue::info()
{
    if (front_ == nullptr) {
        std::cout << "queue is empty." << std::endl;
        return;
    }
    Node *ptr = front_;
    int i = 1;
    do
    {
        std::cout << "item " << i << " is " << ptr->item; // << std::endl;
        i++;
        ptr = ptr->next;
    } while (ptr != nullptr);
}