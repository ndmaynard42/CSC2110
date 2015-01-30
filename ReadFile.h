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
	// this is  constructor
	ReadFile (const char* file_name);
	//deconstructor
	~ReadFile ();
	
	void createReadFile(const char* file_name);
	void destroyReadFile();
	String* readLine();
	bool eof();
	void close();
};

#endif
