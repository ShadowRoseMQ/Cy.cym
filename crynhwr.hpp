#ifndef CRYNHWR_HPP
#define CRYNHWR_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <regex>
#include "geiriadur.hpp"

// Week 9: Error Interception Engine
void parseAndTranslateErrors() {
    std::ifstream errorFile("errors.txt");
    std::string line;
    // Regex targets: filename.cym(lineNumber): error Cxxxx
    std::regex errorRegex(R"((.+\.cym)\((\d+)\)\s*:\s*error\s*(C\d+))");
    std::smatch matches;

    while (std::getline(errorFile, line)) {
        if (std::regex_search(line, matches, errorRegex)) {
            std::string fileName = matches[1].str();
            std::string lineNum = matches[2].str();
            std::string errorCode = matches[3].str();

            std::cout << "\n--- GWALL AR LINELL " << lineNum << " ---" << std::endl;
            std::cout << "Cod Gwall System: " << errorCode << std::endl;

            if (ERROR_MATRIX.find(errorCode) != ERROR_MATRIX.end()) {
                std::cout << "Eglurhad: " << ERROR_MATRIX.at(errorCode) << std::endl;
            }
            else {
                std::cout << "Eglurhad: Dadansoddiad system generig (" << line << ")" << std::endl;
            }
        }
    }
}

// Week 8: Compiler CLI Bridge
void compileTemporaryFile(const std::string& tempCppFile, const std::string& outputExeName) {
    // cl.exe /utf-8 /EHsc temp.cpp /Fe:target.exe > errors.txt 2>&1
    std::string command = "cl.exe /utf-8 /EHsc " + tempCppFile + " /Fe:" + outputExeName + " > errors.txt 2>&1";
    int result = std::system(command.c_str());

    if (result == 0) {
        std::cout << "Llwyddwyd i lunio'r rhaglen! Yn rhedeg y ffeil weithredadwy..." << std::endl;
        std::system(outputExeName.c_str()); // Silently boot up the compiled program
    }
    else {
        std::cout << "Canfuwyd gwallau yn y cod ffynhonnell Cymraeg. Ailfapio..." << std::endl;
        parseAndTranslateErrors();
    }
}

#endif
