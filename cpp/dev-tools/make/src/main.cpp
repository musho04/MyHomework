#include <iostream>
#include "functions.h"

int main() {
	Vector arr;
	arr.push_front(1.47);
    arr.push_front(2.4);
    arr.push_back(9.17);
    arr.insert(2,3.99);

	Vector arr1;
arr1 = arr;
for(int i = 0; i < arr1.get_size(); i++){
    std::cout << "v[" << i << "] = " << arr[i] << std::endl;
}

    return 0;
}
