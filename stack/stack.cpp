#include <iostream>

template <typename T>
class Stack
{
private:
    T *stackPtr;
    int size;
    T top;
public:
    Stack(int = 10);
    ~Stack();
    bool push(const T);
    bool pop();
    void printStack();
};

int main()
{
    Stack <int> myStack(5);
    std::cout << "Stack add..";
    int ct = 0;
    while (ct++ !=5)
    {
        int temp;
        std::cin >> temp;
        myStack.push(temp);
    }
    myStack.printStack();

    std::cout << "\nDelete";

    myStack.pop();
    myStack.pop();
    myStack.printStack();

    return 0;
}

template <typename T>
Stack<T>::Stack(int s)
{
    size = s > 0? s: 10;
    stackPtr = new T[size];
    top = -1;
}

template <typename T>
Stack<T>::~Stack()
{
    delete [] stackPtr;
}

template <typename T>
bool Stack<T>::push(const T value)
{
    if (top == size - 1)
        return false;

    top++;
    stackPtr[top] = value;
    return true;
}


template <typename T>
bool Stack<T>::pop()
{
    if (top == -1)
        return false;

    stackPtr[top] = 0;
    top--;

    return true;
}

template <typename T>
void Stack<T>::printStack()
{
    for (int ix = size -1; ix >= 0; --ix) {
        std::cout << "|"  << "\t"<< stackPtr[ix] << std::endl;;
    }
}
