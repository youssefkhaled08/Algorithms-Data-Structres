#include "Queue.h"
#include <assert.h>

template <class dataType>
Queue<dataType>::Queue(int val){
    count = 0;
    size = val;
    arr = new dataType[size];
    front  = back = -1;
}

template <class dataType>
void Queue<dataType>::Enqueue(dataType val){
    assert(!isFull());
    back = (back + 1) % size;
    arr[back] = val;
    if (front == -1)
        front = back;
    count++;
}
template <class dataType>
void Queue<dataType>::Dequeue(){
    assert(!isEmpty());
    front = (front + 1) % size;
    count--;
    if (count == 0)
        front = back = -1;
}

template <class dataType>
dataType Queue<dataType>::Front(){
    assert(!isEmpty());
    return arr[front];
}

template <class dataType>
int Queue<dataType>::length(){
    return count;
}

template <class dataType>
bool Queue<dataType>::isEmpty(){
    return (count == 0);
}

template <class dataType>
bool Queue<dataType>::isFull(){
    return (count == size);
}

template <class dataType>
Queue<dataType>::~Queue(){
    delete [] arr;
}