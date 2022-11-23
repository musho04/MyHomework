#include <iostream>
#include "sub.h"
#include "sum.h"
#include "sep.h"
#include "mul.h"
#include <vector>
#include <string>
#include <bits/stdc++.h>

void simple_tokenizer(std::string s){ 
    std::vector <std::string> arr;
    std::stringstream ss(s);
    std::string word;
    while(ss >> word){
        arr.push_back(word);
    }   

    std::string str1;
    std::string str2;
    std::string oper;
    str1 = arr[0];
    str2 = arr[2];
	oper = arr[1];
    int num1;
    int num2;
    num1 = stoi(str1);
    num2 = stoi(str2);
    if(oper == "+"){
 		 std::cout << num1 << " + " << num2  << " = "<< sum(num1, num2) << std::endl;
    }else if(oper == "-"){
 		 std::cout << num1 << " - " << num2  << " = "<< sub(num1, num2) << std::endl;
	}else if(oper == "*"){
 		 std::cout << num1 << " * " << num2  << " = "<< mul(num1, num2) << std::endl;
	}else if(oper == "/"){
 		 std::cout << num1 << " % " << num2  << " = "<< sep(num1, num2) << std::endl;
	}

}

int main()
{
   std::string input;
   std::cout << "enter val. ex` 1 + 2" << std::endl;
   getline(std::cin, input);
   simple_tokenizer(input);

    return 0;
}
