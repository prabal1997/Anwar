//FORWARD DECLARATIONS 

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

#ifndef FWD_DECL_H
#define FWD_DECL_H

//----------------------------------------------------

#include"anwar_head.h"

//----------------------------------------------------

//enum definitions for Help and Error handling
namespace namespace_def
{
	enum Help
	{ HELP_VIM, HELP_PROJECT, HELP_BUFFER, HELP_CODE, HELP_CODEWRITE, HELP_FUNCT, HELP_COMPL, HELP_INTEG, HELP_THEMES, HELP_LANG };
}

//formatting module
namespace namespace_format
{
	void func_intro1();
	void func_print(int, std::string, int);
	void func_line(int, int);
}

//INDEPENDENT FUNCTIONS
	
	//input modules
	char func_validPrompt(int, std::string);	
	int func_validInput(int, std::string);
	//help module
	namespace namespace_def
	{
		void func_help(int);
	}
	//package module
	void func_writeVIM(std::string);
	//internet check
	bool func_internetAvail();

//package modules

	//package managers
	void func_nerdtree();
//----------------------------------------------------

#endif
