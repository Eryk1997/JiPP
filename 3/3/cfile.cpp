#include "cfile.h"

CFile::CFile()
{

}

CFile::CFile(const char *name)
{
    file=fopen(name,"w");
}

void CFile::write(std::string tekst)
{
    fwrite(tekst.c_str(),sizeof (char),tekst.size(),file);
}

CFile::~CFile()
{
    fclose(file);
}
