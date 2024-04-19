//============================================================================
// Name        : prueba1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
#include <iostream>
using namespace std;
#include "systemc.h"

int sc_main(int, char* []) {
    cout << "Hola." << endl; // prints !!!Hello World!!!
    return 0;
}
*/

#include <iostream>
using namespace std;
#include "systemc.h"

SC_MODULE(hello_world){
	SC_CTOR(hello_world){
	}
	void say_hello(){
		cout<<"Hello World \n";
	}
};

int sc_main(int argc, char* argv[]){
	hello_world hello("HELLO");

	hello.say_hello();
	return(0);
}


