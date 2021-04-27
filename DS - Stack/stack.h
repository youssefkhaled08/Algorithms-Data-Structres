#pragma once
template <class dataType>
class Stack
{
    private:
    dataType* arr;
    int elements;
    int size;

    public:
    Stack(int val);
    void push(dataType num);
    void pop();
    int length();
    dataType top();
    bool isEmpty();
    void expand();
    ~Stack();
};