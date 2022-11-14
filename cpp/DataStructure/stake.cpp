#include <iostream>

#define SIZE 4

template <class T> class Stack{
    private:
        int top;
        T siz[SIZE];
    public:
        Stack();
        void push(T k);
        T pop();
        T topElement();
        bool isFull();
        bool isEmpty();
};

template <class T> Stack<T>::Stack()
{
    top = -1;
}

template <class T> void Stack<T>::push(T k)
{
    if(isFull()){
        std::cout << "Stack fulll" << std::endl;
    }

    top = top + 1;

    siz[top] = k;
}

template <class T> bool Stack<T>::isEmpty()
{
    if(top == -1){
        return 1;
    }else
        return 0;
}

template <class T> bool Stack<T>::isFull()
{
    if (top == (SIZE -1))
    {
        return 1;
    }else
        return 0;
}

template <class T> T Stack<T>::pop()
{
    T pop_element = siz[top];
    top--;
    return pop_element;
}

template <class T> T Stack<T>::topElement()
{
    T topElement = siz[top];
    return topElement;
}

int main () 
{
    Stack<int> s;

    s.push(1);
    s.push(22);
    s.push(333);

    std::cout << "Interger pop element 3 : " << s.pop() << std::endl;
    std::cout << "Interger pop element 2 : " << s.pop() << std::endl;
    std::cout << "Interger pop element 1 : " << s.pop() << std::endl;

    Stack<double> s1;
    s1.push(74);
    s1.push(75);
    s1.push(76);
    s1.push(77);
    std::cout << "double pop element 1 : " << s.pop() << std::endl;
    std::cout << "double pop element 1 : " << s.pop() << std::endl;
    std::cout << "double pop element 1 : " << s.pop() << std::endl;
    return 0;
}
