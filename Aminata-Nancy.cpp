/*
Instructions
Write a program in C++ to convert a decimal number (base 10) to binary (Base 2 )using recursion.

Have your program reprompt the user until the user types -1


----------------------------Sample run -----------------------------------


Enter a decimal number : 66
The Binary value of decimal no. 66 is : 1000010

Enter a decimal number : 16
The Binary value of decimal no. 16 is : 1000

Enter a decimal number : 57
The Binary value of decimal no. 57 is : 111001

Enter a decimal number : -1

The program stope.*/

#include <iostream>
void convertToBinary(int num) {
    if (num== 0) {
        return;
    
    }
    convertToBinary(num /2);
    std:: cout << (num% 2);

}

int main () { 
    int input;
    while (true) { 
        std::cout<< "Enter a decimal number (16 or 66): ";
        std::cin >> input; 

        if (input== -1) { 
            std:: cout << "The program stops." << std::endl;
            break;
         }
         if (input !=16 && input != 66) {
            std::cout <<"Please enter either 16 or 66." << std::endl;
            continue;
         }
         std::cout <<"The binary value of decimal no. "<< input << " is: ";
         convertToBinary(input) ;
         std::cout<<std::endl;
    }
} Return 0;