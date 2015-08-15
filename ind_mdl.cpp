//INDEPENDENT MODULE

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

//SUMMARY (list and syntax of function this contains)

//char func_validPrompt(int, std::string)  :  RECEIVES A VAILD INPUT FROM THE USER (AND RETURNS IT)
//void func_writeVIM(std::string)  :  WRITES TO THE .vimrc FILE IN THE CURRENT DIRECTORY
//bool func_internetAvail()  :  CHECKS INTERNET AVAILIBILITY (AND RETURNS THE TRUTH VALUE)

//----------------------------------------------------

#include"anwar_head.h"

//----------------------------------------------------
namespace namespace_def
{
	void func_help(int help_code)
	{	
		if (help_code==::namespace_def::HELP_VIM)
		{
			using namespace_format::func_line;
			using namespace_format::func_print;
		
			func_print(0, "Definitions for the referred things are:", 1);

			func_print(0, "VIM:", 0);
			func_print(0, "An open-source, powerful and configurable text editor.", 1);

			func_print(0, "Git:", 0);
			func_print(0, "A tool that allows developers to share their code across the world.", 1);

			func_print(0, "cURL:", 0);
			func_print(0, "A tool that allows you to download content through URLs from the Command Line", 1);

			func_print(0, "Pathogen:", 0);
			func_print(0, "A tool that allows you to easily  add plugins to the VIM text-editor", 0);
		}
	}
}

//RECEIVES A VALID INPUT FROM THE USER
//func_validPrompt(number_of_options, message_to_print)
char func_validPrompt(int values, std::string prompt)
{
	//RESPONSE TO BE RECEIVED FROM USER
	char char_sol('A');
	
	if (values==3) //for inputting 'Yes', 'No', and 'Help'
	{
		//will repeat question unless valid input is received	
		while(char_sol!='Y' || char_sol!='y' || char_sol!= 'N' || char_sol!='n' || char_sol!='H' || char_sol!='h')
		{
	//printing the prompt asking for an input
		::namespace_format::func_print(1, prompt+"   ", -1);
		std::cin>>char_sol;
		}
	}
	else //for any values except '3', the function defaults to asking for simply two values i.e. 'Yes' or 'No'
	{
		//will repeat question unless valid input is received
		while( (char_sol!='Y') || (char_sol!='y') || (char_sol!='N') || (char_sol!='n') )
		{
			::namespace_format::func_print(1, prompt+"   ", -1);
			std::cin>>char_sol;
		}
	}
	//FUNCTION RETURNS THE VALID INPUT RECEIVED FROM THE USER
	return char_sol; 
}

//APPENDS STRINGS TO .vimrc FILE
//func_writeVIM(input_string_here)	
void func_writeVIM(std::string string_VIMwrite)
{
	std::ofstream outfile;

//writes the input string to the file
	outfile.open(".vimrc", std::ios_base::app);
	outfile<<"\n"<<string_VIMwrite<<"\n";
}

//CHECKS INTERNET AVAILIBILITY
//func_internetAvail()
bool func_internetAvail()
{
	if (!system("ping -c1 -s1 www.github.com"))
	{
	        ::namespace_format::func_print(0,   "Internet seems to be working.", 0);
	}
	else
	{
		::namespace_format::func_print(0,   "Internet DOES NOT seem to be working.", 0);		
		::namespace_format::func_print(0,   "Please check your connection settings and restart 'Anwar'.", 0);
		
		return 0;	
	}

return 1;
}

//----------------------------------------------------

