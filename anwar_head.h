//ANWAR COMMON HEADERS

//----------------------------------------------------

//FILE LIST
//"anwar_head.h" holds list of common headers across files
//"fwd_decl.h" holds forward declarations
//"format.cpp" holds definitions of functions used for console formatting
//"ind_mdl.cpp" holds independent functions used for various purposes
//"pck_mdl.cpp" holds list of packages and information on how to install them and change the .vimrc accrodingly

//RUNNING THE PROGRAM
//Navigate to the directory containing all the necessary files in the console
//Use the command " g++ anwar.cpp anwar_head.h fwd_decl.h format.cpp ind_mdl.cpp pck_mdl.cpp " in console
//execute the file names 'a.out' using " ./a.out " command in console

//----------------------------------------------------

#ifndef ANWAR_HEAD_H
#define ANWAR_HEAD_H

//----------------------------------------------------

//'C++' HEADER FILES
#include<iostream>
#include<fstream> //to output text to files
#include<string>

//'C' BASED HEADER FILES
#include<cstdlib> //to use " system("command") "

//CUSTOM HEADER FILES FOR FORWARD DECLARATIONS
#include"fwd_decl.h"

//----------------------------------------------------

#endif

//----------------------------------------------------

