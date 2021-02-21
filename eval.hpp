#include <iostream>
#include <fstream>
#include <string>
#pragma once
namespace sayan{
template<class T>
T eval(const std::string& s)
{
    long double d;
    std::ofstream fout;
    fout.open("int_code.cpp",std::ios_base::out);
    fout<<"#include <iostream>\n#include<fstream>\nusing namespace std; int main(){long double d=";
    fout<<s<<"; ofstream fout;fout.open(\"int_txt.txt\",ios_base::out);fout<<d;fout.close();return 0;}";
    fout.close();
    system("g++ int_code.cpp -o int_code.exe");
    system("int_code.exe");
    std::ifstream fin;
    fin.open("int_txt.txt",std::ios_base::in);
    fin>>d;
    fin.close();
    system("del int_txt.txt");
    system("del int_code.cpp");
//    system("del int_code.o");
    system("del int_code.exe");
    return (T)d;
}
};
