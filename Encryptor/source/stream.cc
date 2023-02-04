#include "stream.hpp"

std::map<int,std::string> MakeEncryptionMap(const std::string& file_a) { 
    std::string symbols_encrypted;
    std::map<int,std::string> to_return;
    
    std::ifstream ifs(file_a);
    int count = 0;
    while (std::getline(ifs, symbols_encrypted,'\n')) {
        to_return.insert(std::pair<int,std::string>(count,symbols_encrypted));
        count++;
    }
    ifs.close();
   
    return to_return;
}

std::string Code(const std::string& str,const std::map<int,std::string>& map, int month, int day) {
    std::string to_return = "";

    for (int i = 0; i < str.size(); ++i) {
        std::string digit;
        digit += str.at(i);
        int index = std::stoi(digit);
        // std::cout << str.at(i) << '\t' << index << std::endl;
        to_return += map.at(day).at(index);
        day = (day + month) % 30;
    }

    return to_return;
}

std::string Decode(const std::string& str,const std::map<int,std::string>& map, int month, int day) {
    std::string to_return = "";

    for (int i = 0; i < str.size(); ++i) {
        std::string code_string = map.at(day);
        for (int j = 0; j < code_string.size(); ++j) {
            if (str.at(i) == code_string.at(j)) {
                to_return += std::to_string(j);
                break;
            }
        }
        day = (day + month) % 30;
    }

    return to_return;
}

// file off-stream method
void Output(const std::string& message) {
    std::ofstream ofs("ex_files/file_a_");
    ofs << message;
    ofs.close();
}