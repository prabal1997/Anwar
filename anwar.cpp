//ANWAR CLI IDE SETUP

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
//execute the file named 'a.out' using " ./a.out " command in console

//----------------------------------------------------

#include"anwar_head.h"

//----------------------------------------------------

int main()
{	

//functions called from namespace "namespace_format"
	using namespace_format::func_print;  //NOTE: declarative statements do not require function prototypes, just function names
	using namespace_format::func_line;
	using namespace_format::func_intro1;

//functions called from namespace "namespace_packages"
	
//CHANGING CONSOLE TITLE
	system("chmod u+x bash_setUpTitle.sh");
	system("bash bash_setUpTitle.sh");
//	bash_mytitle="Anwar CLI IDE setup"
//	echo '\033]2;'$bash_mytitle'\007'

//CLEARING SCREEN
	system("clear");
	
//INTRODUCTION
   //displays ascii art	
	std::cout<<"\n\n";	
	func_intro1();

   //display text information
	func_line(2,2);	
	func_print(0, "Hello! Welcome to 'Anwar'!", 0);
	func_print(0, "'Anwar' allows you to set-up an IDE in a CLI with ease.", 0);

	func_line(2, 2);

	func_print(0, 	"*DISCLAMER: \a-Gaining 'root' access is necessary for this program to function.", 0);
	func_print(0,   "            -Internet connection is necessary to use this program.", 0);
	func_print(0,   "            -Use this program at your own risk.", 0);
	func_print(0,   "            -Press 'Ctrl' + 'C' to force quit.", 0);

	func_line(2, 2);

	func_print(0, 	"*ASSISTANCE: \a-Input 'H' or 'h' when option is available to seek help regarding the situation.", 0);
	func_print(0,   "             -Input 'Y' or 'y' for YES.", 0);
	func_print(0,   "             -Input 'N' or 'n' for NO.", 0);

   //checking for internet connection
	func_line(2, 2);
	func_print(0, 	"CHECKING FOR INTERNET CONNECTION...", 1);
	bool internetAvail( func_internetAvail() );
	
	//going to the end of the program if there's no internet
	   if (internetAvail==0)
	   {
	   	goto goto_THANKS;
	   }

//GENERAL SETUP: INSTALLING VIM, GIT, CURL, PATHOGEN, AND CONFIGURING .vimrc FOR FIRST USE
	//SETTING UP A LOOP TO REPEAT TILL IT RECEIVES AN ACCEPTABLE VALUE	
	goto_VIM:

	func_line(2,2);
	func_print(0, "Would you like to install VIM text-editor, GitHub version control, UNIX cURL & the 'Pathogen' plugin manager? (Y/N/H):   ",-1);

	//INPUTTING A RESPONSE FROM THE USER	
	char char_VIM;
	std::cin>>char_VIM;

	if ( (char_VIM=='Y') || (char_VIM=='y') )
	{
		func_line(2,2);
		func_print(0, "UPDATING REPOSITORY RECORDS", 2);
		system("sudo apt-get update");
		func_print(2, "Command executed.", 0);
		
		func_line(2,2);
		func_print(0, "INSTALLING VIM TEXT-EDITOR",2);
		system("sudo apt-get install vim");
		func_print(2, "Command executed.", 0);
		
		func_line(2,2);
		func_print(0, "INSTALLING GIT VERSION CONTROL", 2);
		system("sudo apt-get install git");
		func_print(2, "Command executed.", 0);

		func_line(2,2);
		func_print(0, "INSTALLING cURL", 2);
		system("sudo apt-get install curl");
		func_print(2, "Command executed.", 0);

		func_line(2,2);
		func_print(0, "INSTALLING PATHOGEN PLUGIN MANAGER",2);
		system("mkdir -p ~/.vim/autoload ~/.vim/bundle;");
		system("curl -Sso ~/.vim/autoload/pathogen.vim https://raw.github.com/tpope/vim-pathogen/master/autoload/pathogen.vim");
		system("mkdir -p ~/.vim/autoload ~/.vim/bundle && \\");
		system("curl -LSso ~/.vim/autoload/pathogen.vim https://tpo.pe/pathogen.vim");	
		func_print(2, "Command executed.",0);	

		func_line(2,2);
		func_print(0, "CONFIGURING VIM", 0);
	//PATHOGEN VIM CONFIGURATION
		//a new .vimrc is created and written into
		func_writeVIM("execute pathogen#infect()");
		func_writeVIM("syntax on");
		func_writeVIM("filetype plugin indent on");
	//SET NUMBER
		func_writeVIM("set number");
		system("mv .vimrc ~/.vimrc");  //MOVING BACK NEW .vimrc to ~
		func_print(1, "Configuration complete.", 0);
	
	//THE PROGRAM NOW NECESSARILY NEEDS TO DO WHAT IT'D DONE IF THE USER HAD CHOSEN NO THE FIRST TIME
		goto goto_noVIM;
		
	}
	else if( (char_VIM=='N')||(char_VIM=='n') )
	{
	//PROGRAM FLOW CONTINUES HERE AFTER GENERAL SETUP IS COMPLETED	
	goto_noVIM:		
		func_line(2,2);
		func_print(0, "Loading package list...", 0);
	}	
	else if( (char_VIM=='H') || (char_VIM=='h') )
	{
		func_line(2,2);
		func_help(Definitions::HELP_VIM); //inputting issue (using ENUMS) helps explain the user the what the purpose of installation is, and the consequences of failure/not installing tools
		
		//returning to the choice menu after the question		
		goto goto_VIM;
 	}	
	else
	{
		func_print(0, "Invalid Input. Please try again.", 0);	
		goto goto_VIM;
	}	

//UNIFIED INTERACTIVE PACKAGE MANAGER

//gives  a list of types of components IDES need
//gives a list of sub-parts of the component
//asks for a digit as input to install, or ('H' or 'h') for help.

//THANK-YOU MESSAGE
goto_THANKS:	
	func_line(2, 2);
	func_print(0, "Thanks.\n   Please report any bugs/issues at prabal.gupta.97@gmail.com.", 0);
	func_line(2, 2);
	
	return 0;
}

//----------------------------------------------------
