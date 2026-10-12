
#include <iostream>
#include "trawsnilydd.hpp"
#include "crynhwr.hpp"

int main(int argc, char* argv[]) {
    // Ensure user passes a file parameter (e.g., welsh_compiler.exe input.cym)
    if (argc < 2) {
        std::cout << "Usage: welsh_compiler.exe <filename.cym>" << std::endl;
        return 1;
    }

    std::string welshFile = argv[1];
    std::string tempCpp = "temp_output.cpp";
    std::string finalExe = "allbwn_rhaglen.exe";

    std::cout << "Parsing and Translating: " << welshFile << "..." << std::endl;

    // 1. Run Core Parsing (Weeks 6 & 7)
    parseWelshCode(welshFile, tempCpp);

    // 2. Invoke Background Compiler & Error Remapper (Weeks 8 & 9)
    compileTemporaryFile(tempCpp, finalExe);

    return 0;
}
