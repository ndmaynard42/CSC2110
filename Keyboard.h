#if !defined KEYBOARD_H
#define KEYBOARD_H
//this is a comment
#include "Text.h"
#include <string>
using namespace std;

class Keyboard
{
   private:
      Keyboard();

   public:
      virtual ~Keyboard();
      static Keyboard* getKeyboard();

//pre: the string (character literal) that will prompt the user for input
//post: the input read from the keyboard interpreted as an int is returned
int readInt(string prompt);
int getValidatedInt(string prompt, int min, int max);

//pre: the string that will prompt the user for input
//post: the input read from the keyboard interpreted as a double is returned
double readDouble(string prompt);
double getValidatedDouble(string prompt, double min, double max);

//pre: the string that will prompt the user for input
//     the string to store the user input and the length of the input storage string
//post: the text read from the keyboard is copied into the storage string
String* readString(string prompt);
};

#endif
