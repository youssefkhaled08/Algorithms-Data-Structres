#pragma once

template<class dataType>
class ArrayList
{
    private:
        dataType* arr;
        int size;
        int count;
    
    public:
        ArrayList(int);
        int length();
        void append(dataType);
        void display();
        dataType at(int);
        void insertAt(int, dataType);
        void deleteFrom(int);
        void expand();
        bool isFull();
        ~ArrayList();
};