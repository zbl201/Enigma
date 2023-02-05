#ifndef FUNCT_HPP
#define FUNCT_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <map>
#include <stdexcept>

std::map<int,std::string> MakeEncryptionMap(const std::string& file_a);
std::string Code(const std::string& str,const std::map<int,std::string>& map, int month, int day);
std::string Decode(const std::string& str,const std::map<int,std::string>& map, int month, int day);

void Output(const std::string& message);

#endif