#include "stackArr.h"
#include <assert.h>

template <class dataType>
stackArr<dataType>::stackArr(int val){
    elements = 0;
    size = val;
    arr = new dataType[size];
} 

template <class dataType>
int stackArr<dataType>::length(){
    return elements;
}

template <class dataType>
bool stackArr<dataType>::isEmpty(){
    return (elements == 0);
}

template <class dataType>
void stackArr<dataType>::expand(){
    size = size * 2;
    dataType* temp = new dataType[size];
    for (int i = 0; i < size; i++){
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
}

template <class dataType>
void stackArr<dataType>::push(dataType num){
    if (elements == size)
        expand();
    arr[elements] = num;
    elements++;
}

template <class dataType>
void stackArr<dataType>::pop(){
    assert(!isEmpty());
    elements--;
}

template <class dataType>
dataType stackArr<dataType>::top(){
    assert(!isEmpty());
    return arr[elements - 1];
}

template <class dataType>
stackArr<dataType>::~stackArr(){
    delete [] arr;
}
