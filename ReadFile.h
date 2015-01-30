#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile // Switched to a class
{ 
    private: // Made private
    ifstream input_file;
    bool _eof;
    bool closed;

	public: // Made public
	ReadFile* createReadFile(const char* file_name);
	void destroyReadFile(ReadFile* rf);
	String* readLine(ReadFile* rf);
	bool eof(ReadFile* rf);
	void close(ReadFile* rf);
	ReadFile();  // This is the constructor
};

#endif
