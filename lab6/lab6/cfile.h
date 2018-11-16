
#ifndef CFILE_H
#define CFILE_H
#include <fstream>


class CFile
{
    FILE* file;

public:
    CFile(const char*);
    ~CFile();

    void write(std::string);

};

















#endif //CFILE_H
