//Compile and run Static.cpp. Remove the static keyword from the code, compile and run it again, and explain what happens.

//: C03:FileStatic.cpp
// File scope demonstration. Compiling and 
// linking this file with FileStatic2.cpp 
// will cause a linker error

// File scope means only available in this file:
int fs;

int main() {
	fs = 1;
} ///:~

//When static is applied to a function name or to a variable that is outside of all functions, it means “This name is unavailable outside of this file.
//When you remove static keyword, it is a global variable.