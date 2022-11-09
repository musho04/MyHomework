#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Input n: ";
    std::cin >>  num;
    int arr[num][num];
    srand(time(0));

    for (int i = 0; i < num; i++)
    {   
        for(int j = 0; j < 3; j++)
        {
            arr[i][j] = rand() % 20 ;
            std::cout << " " << arr[i][j];
        }
        std::cout << std::endl;
    }   
    
    int length = sizeof(arr)/sizeof(int);
    int val1 = 1;
    int val2 = 1;
    for(int i = 0, j = num-1; i < length/2 -1; i++, j--){
        std::cout << " angel 1 -> |" << arr[i][i] << "|" ;
        std::cout << " angel 2 -> |" << arr[j][i] << "|" << std::endl;
        val1 *= arr[i][i];
        val2 *= arr[j][i];
    }
        std::cout << "angel 1 -> " << val1 << std::endl;
        std::cout << "angel 2 -> " << val2 << std::endl;
        std::cout << val1 << "-" << val2 ;
        std::cout << "=" << val1 - val2 << std::endl;
    
    return 0;
}

