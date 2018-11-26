#ifndef CFILE_H
#define CFILE_H
#include <fstream>

class CFile
{
private:
    FILE *file;
public:
    CFile();
    CFile(const char*);
    ~CFile();
    void write(std::string);
};

#endif // CFILE_H
