template <class dataType>
class stack
{
    dataType* arr;
    int elements;
    int size;

    public:
    stack(int val);
    void push(dataType num);
    void pop();
    int length();
    dataType top();
    bool isEmpty();
    void expand();
    ~stack();
};