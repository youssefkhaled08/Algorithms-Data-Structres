class stackArr
{
    int* arr;
    int elements;
    int size;

    public:
    stackArr(int val);
    void push(int num);
    void pop();
    int length();
    int top();
    bool isEmpty();
    void expand();
    ~stackArr();
};