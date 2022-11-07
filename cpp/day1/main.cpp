#include <iostream>

//added a and b
int add ( int a, int b ) {
    std::cout << "Sum: " << a + b << std::endl;
    return 0;
};

//Max and Min
int maxmin ( int a , int b )
{
    //max a, min b
    if ( a > b ){
        std::cout << "Min: " << b << std::endl;
        std::cout << "Max: " << a << std::endl;
    }else if ( a < b ){ //Max b, min a
        std::cout << "Min: " << a << std::endl;
        std::cout << "Max: " << b << std::endl;
    }else {//If a = b
        std::cout << "a = b" << std::endl;     
    }
    return 0;
};

int main()
{
    //Declared a and b
    int a, b;
    //Import value a
    std::cout << "Insert a: ";
    std::cin >> a;
    //Import vale b
    std::cout << "Insert b: ";
    std::cin >> b;
    //function call
    maxmin(a, b);
    add(a, b);
    return 0;
}

