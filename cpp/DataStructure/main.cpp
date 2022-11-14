#include <iostream>

//create template
template <typename T> class Vector {
private:
    T* arr;
    int capacity;
    int size;
public:
    //Constructor
    Vector()
    {
        arr = new T[1];
        capacity = 1;
        size = 0;
    }
    //destruktor
    ~Vector()
    {
        delete [] arr;
    }
    //push back elements
    void push_back(T data)
    {
        if(size == capacity) 
        {
            T* tmp = new T[2 * capacity];
        
            for (int i = 0; i < capacity; i++)
            {
                tmp[i] = arr[i];
            }
            delete [] arr;
            capacity *= 2;
            arr = tmp;
        }
        arr[size] = data;
        size++;
    }
    //update values    
    void push_front(T data, int index)
    {
        if (index == capacity)
        {
            push_back(data);
        }else
            arr[index] = data;
    }

    // get element
    T get_front(int index)
    {
        if(index < size){
            return arr[index];
        }
    }
    //get top element in vector
    void top()
    {
        size--;
    }
    
    //length from vector
    int length() 
    {
        return capacity;
    }

    //get capacity from vector
    int get_capacity()
    {
        return capacity;
    }
    //print my vector
    void print()
    {
        for(int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }


}; 

int main() 
{
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(8);

    std::cout << "Vector int" << std::endl;
    std::cout << "Vector capacity : " << v.get_capacity() << std::endl;

    v.print();
    v.top();
    v.push_front(322, 1);
    v.print();
    
    std::cout << "-------------------------" << std::endl;

    Vector<double> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);

    std::cout << "Vector duble" << std::endl;
    std::cout << "Vector capacity : " << v1.get_capacity() << std::endl;
    v1.print();

    return 0;
}
