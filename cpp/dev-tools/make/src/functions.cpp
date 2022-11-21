#include <iostream>
#include "functions.h"



Vector::Vector(){
	size = 0;
	capacity = 4;
	arr = new double[capacity];
}


Vector::~Vector() {delete [] arr;};

Vector::Vector(const Vector& v)
    {
        this->capacity = v.capacity;
        this->size = v.size;
        this->arr = new double[capacity];

        for (int i = 0; i < this->size; i++ ){
            this->arr[i] = v.arr[i];
        }

    };

void Vector::push_back(double val){
    if (size == capacity){
        double *tmp = new double[capacity*2];
        for (int i = 0; i < size; i++){
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }
    arr[size] = val;
    size++;
};

void Vector::push_front(double val)
{
    if (size == capacity){
        double *tmp = new double[capacity*2];
        for (int i = 0; i < size; i++){
            tmp[i] = arr[i];
        }

        delete [] arr;
        arr = tmp;
    }
     size++;
     for (int  i = size - 1; i > 0; i--){
        arr[i] = arr[i - 1];
     }
     arr[0] = val;
};

void Vector::erase(int index)
{
   if ( index < 0 || ( index > size ) ){
          std::cout<<"Index out of range" << std::endl;
   }
   for (int i = index; i < size-1; ++i ){
     arr[i] = arr[i+1];
   }
  --size;

};

void Vector::insert(int index , double value)
{
    if (( index < 0) || (index > size)){
        std::cout<< "Index out of range" << std::endl;
    }
    if (size != capacity){
        for (int i = size - 1; i >= index; --i){
            arr[i+1] = arr[i];
        }
        arr[index] = value;
        ++size;
    }
    else{
        capacity*=2;
        double * tmp = new double[capacity*2];
        for ( int  i = 0; i < size; ++i){
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
        insert(index, value);
    }

};

const Vector Vector::operator = (const Vector &ob)
{
    if (this == &ob){
        Vector& ptr = *this;
        return ptr;
    }
    delete [] arr;
    capacity = ob.capacity;
    size = ob.size;
    arr = new double[size];
    for (int i = 0; i < size; i++){
        arr[i] = ob.arr[i];
    }
        return *this;
}

double Vector::operator [] (int  i)
{
    return arr[i];
};

double Vector::get_size() const
{
    return size;
};

double Vector::get_capacity() const
{
    return capacity;
};


//template <typename V> class Vector {
//
// private:
//    int size;
//    int capacity;
//    V *arr;
//
// public:
//    Vector():
//    size{0},
//    capacity{4},
//    arr{new V[capacity]}{}
//    ~Vector() { delete [] arr;};
//    Vector(const Vector& v)
//    {
//        this->capacity = v.capacity;
//        this->size = v.size;
//        this->arr = new V[capacity];
//
//        for (int i = 0; i < this->size; i++ ){
//            this->arr[i] = v.arr[i];
//        }
//
//    };
//
//void push_back(V val){
//    if (size == capacity){
//        V *tmp = new V[capacity*2];
//        for (int i = 0; i < size; i++){
//            tmp[i] = arr[i];
//        }
//        delete [] arr;
//        arr = tmp;
//    }
//    arr[size] = val;
//    size++;
//};
//
//void push_front(V val)
//{
//    if (size == capacity){
//        V *tmp = new V[capacity*2];
//        for (int i = 0; i < size; i++){
//            tmp[i] = arr[i];
//        }
//
//        delete [] arr;
//        arr = tmp;
//    }
//     size++;
//     for (int  i = size - 1; i > 0; i--){
//        arr[i] = arr[i - 1];
//     }
//     arr[0] = val;
//};
//
//void erase(int index)
//{
//   if ( index < 0 || ( index > size ) ){
//          std::cout<<"Index out of range" << std::endl;
//   }
//   for (int i = index; i < size-1; ++i ){
//     arr[i] = arr[i+1];
//   }
//  --size;
//
//};
//
//void insert(int index , V value)
//{
//    if (( index < 0) || (index > size)){
//        std::cout<< "Index out of range" << std::endl;
//    }
//    if (size != capacity){
//        for (int i = size - 1; i >= index; --i){
//            arr[i+1] = arr[i];
//        }
//        arr[index] = value;
//        ++size;
//    }
//    else{
//        capacity*=2;
//        V * tmp = new V[capacity*2];
//        for ( int  i = 0; i < size; ++i){
//            tmp[i] = arr[i];
//        }
//        delete [] arr;
//        arr = tmp;
//        insert(index, value);
//    }
//
//};
//
//const Vector operator = (const Vector &ob)
//{
//    if (this == &ob){
//        Vector& ptr = *this;
//        return ptr;
//    }
//    delete [] arr;
//    capacity = ob.capacity;
//    size = ob.size;
//    arr = new V[size];
//    for (int i = 0; i < size; i++){
//        arr[i] = ob.arr[i];
//    }
//        return *this;
//};
//
//V operator [] (int  i)
//{
//    return arr[i];
//};
//
// V get_size() const
//{
//    return size;
//};
//
//V get_capacity() const
//{
//    return capacity;
//};
//
//};
