#include "stack.h"
#include <assert.h>

template <class dataType>
stack<dataType>::stack(int val){
    elements = 0;
    size = val;
    arr = new dataType[size];
} 

template <class dataType>
int stack<dataType>::length(){
    return elements;
}

template <class dataType>
bool stack<dataType>::isEmpty(){
    return (elements == 0);
}

template <class dataType>
void stack<dataType>::expand(){
    size = size * 2;
    dataType* temp = new dataType[size];
    for (int i = 0; i < size; i++){
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
}

template <class dataType>
void stack<dataType>::push(dataType num){
    if (elements == size)
        expand();
    arr[elements] = num;
    elements++;
}

template <class dataType>
void stack<dataType>::pop(){
    assert(!isEmpty());
    elements--;
}

template <class dataType>
dataType stack<dataType>::top(){
    assert(!isEmpty());
    return arr[elements - 1];
}

template <class dataType>
stack<dataType>::~stack(){
    delete [] arr;
}
