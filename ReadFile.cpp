#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name) 
{
   this->createReadFile(file_name);
}

ReadFile::~ReadFile() 
{
   this->destroyReadFile();
}

void ReadFile::createReadFile(const char* file_name)
{
   this->input_file.open(file_name);
   this->closed = false;
   this->_eof = false;
}

//why are we doing this?
void ReadFile::destroyReadFile()
{
   this->close();
}

bool ReadFile::eof()
{
   return this->_eof;
}

void ReadFile::close()
{
   if (!this->closed)
   {
      this->input_file.close();
      this->closed = true;
   }
}

String* ReadFile::readLine()
{
   if (this->closed) return NULL;
   if (this->_eof) return NULL;

   string text;
   this->_eof = !(getline(this->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
