#include "stackArr.h"
#include <assert.h>

stackArr::stackArr(int val){
    elements = 0;
    size = val;
    arr = new int[size];
} 
int stackArr::length(){
    return elements;
}
bool stackArr::isEmpty(){
    return (elements == 0);
}
void stackArr::expand(){
    size = size * 2;
    int* temp = new int[size];
    for (int i = 0; i < size; i++){
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
}
void stackArr::push(int num){
    if (elements == size)
        expand();
    arr[elements] = num;
    elements++;
}
void stackArr::pop(){
    assert(!isEmpty());
    elements--;
}
int stackArr::top(){
    assert(!isEmpty());
    return arr[elements - 1];
}
stackArr::~stackArr(){
    delete [] arr;
}
