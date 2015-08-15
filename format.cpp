//FORMATTING MODULE

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

#include"anwar_head.h"

//----------------------------------------------------

namespace namespace_format
{
	void func_intro1()
	{                                                                                     
		std::cout<<"          d8888 888b    888 888       888        d8888 8888888b.	"<<"\n";  
		std::cout<<"         d88888 8888b   888 888   o   888       d88888 888   Y88b	"<<"\n";
		std::cout<<"        d88P888 88888b  888 888  d8b  888      d88P888 888    888	"<<"\n";
		std::cout<<"       d88P 888 888Y88b 888 888 d888b 888     d88P 888 888   d88P	"<<"\n";
		std::cout<<"      d88P  888 888 Y88b888 888d88888b888    d88P  888 8888888P	"<<"\n";
		std::cout<<"     d88P   888 888  Y88888 88888P Y88888   d88P   888 888 T88b	"<<"\n";
		std::cout<<"    d8888888888 888   Y8888 8888P   Y8888  d8888888888 888  T88b	"<<"\n";
		std::cout<<"   d88P     888 888    Y888 888P     Y888 d88P     888 888   T88b	"<<"\n\n";
		std::cout<<"   by Prabal Gupta"<<"\n";
	}

//PRINT SENTENCES WITH NEWLINES BEFORE AND AFTER IT IN FORMAT (IF space_after=-1, the cursor DOES NOT move)
//func_print(spaces_before, sentences, space_after)
	void func_print(int spaces_before,std::string string_sentence,int spaces_after)
	{	
	//prints newlines before the line
		while(spaces_before>0)
		{
			std::cout<<"\n";
			--spaces_before;
		}	

		std::cout<<"   "<<string_sentence;

	//moves the cursor to the end of the line
		if (spaces_after!=(-1))
		{
			std::cout<<"\n";
		}

	//prints newlines after the line
		while(spaces_after>0)
		{
			std::cout<<"\n";
			--spaces_after;
		}
	}

//PRINTING A PARAGRAPH BREAKER BREAKER
//func_line(spaces_before, spaces_after)
	void func_line(int spaces_before, int spaces_after)
	{
	//prints newlines before the line
		while(spaces_before>0)
		{
			std::cout<<"\n";
			--spaces_before;
		}
	
	//prints the line
		std::cout<<"   ||----------------------------------------------------------||\n";
	
	//prints newlines after the line
		while(spaces_after>0)
		{
			std::cout<<"\n";
			--spaces_after;
		}
	}
}

//----------------------------------------------------
