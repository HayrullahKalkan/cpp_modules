#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

bool readFile(const std::string &filename,
              std::string &content);

bool writeFile(const std::string &filename,
               const std::string &content);

std::string replaceAll(const std::string &content,
                       const std::string &s1,
                       const std::string &s2);

#endif