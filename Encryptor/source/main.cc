/*
Directory: Fruits
Concept: Input In/Out-Streaming and File In/Out-Streaming
*/
#include <iostream>
#include "stream.hpp"

int main() {
    
    std::map<int,std::string> encryption_map = MakeEncryptionMap("./files/symbols_randomized.txt");

    char type;
    unsigned int month;
    unsigned int day;
    std::string message;
    std::string message_encrypted;

    std::cout << "Insert Date: [dd mm]" << '\t';
    std::cin >> day >> month;

    std::cout << "Select type: [e]/[d]" << '\t';
    std::cin >> type;

    if (type == 'e') {
        std::cout << "Enter string: " << '\t';
        std::cin >> message;
        message_encrypted = Code(message, encryption_map, month, day);
    } else {
        std::cout << "Enter encrypted string: " << '\t';
        std::cin >> message;
        message_encrypted = Decode(message, encryption_map, month, day);
    }

    std::cout << message_encrypted << std::endl;

    return 0;
}