#include "cfile.h"
#include <stdio.h>
using namespace std;
CFile::CFile(const char* name)
{
    file=fopen(name,"w");

}

CFile::~CFile()
{
    fclose(file);
}

void CFile::write(string str){
fwrite(str.c_str(),sizeof(char),str.size(),file);
}
