#include <iostream>
#include <string>
#include <bitset>


std::string binaryToGray(const std::string& binary)
{
    int length = binary.length();
    std::string gray(length, '0'); 

    
    gray[0] = binary[0];
    
    
    for (int i = 1; i < length; ++i) 
    {
        
        gray[i] = (binary[i] == binary[i - 1]) ? '0' : '1';
    }
    
    return gray;
}

int main()
{
    std::string binary;
    
    
    std::cout << "Enter a binary number: ";
    std::cin >> binary;
    
    
    for (char ch : binary) 
    {
        if (ch != '0' && ch != '1') 
        {
            std::cerr << "Invalid binary number." << std::endl;
            return 1; 
        }
    }
    
   
    std::string gray = binaryToGray(binary);
    
    
    std::cout << "Gray code equivalent: " << gray << std::endl;
    
    return 0;
}
