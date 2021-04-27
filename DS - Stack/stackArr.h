template <class dataType>
class stackArr
{
    dataType* arr;
    int elements;
    int size;

    public:
    stackArr(int val);
    void push(dataType num);
    void pop();
    int length();
    dataType top();
    bool isEmpty();
    void expand();
    ~stackArr();
};