#pragma once

template <class dataType>
class Queue
{
private:
    dataType* arr;
    int count;
    int size;
    int front;
    int back;
public:
    Queue(int val);
    void Enqueue(dataType val);
    void Dequeue();
    dataType Front();
    int length();
    bool isEmpty();
    bool isFull();
    ~Queue();
};
