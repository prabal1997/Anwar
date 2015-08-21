//ANWAR CLI IDE SETUP

//----------------------------------------------------

//FILE LIST
//"anwar_head.h" holds list of common headers across files
//"fwd_decl.h" holds forward declarations
//"format.cpp" holds definitions of functions used for console formatting
//"ind_mdl.cpp" holds independent functions used for various purposes
//"pck_mdl.cpp" holds list of packages and information on how to install them and change the .vimrc accrodingly

//----------------------------------------------------

//RUNNING THE PROGRAM
//Navigate to the directory containing all the necessary files in the console
//Use the command " g++ anwar.cpp anwar_head.h fwd_decl.h format.cpp ind_mdl.cpp pck_mdl.cpp " in console
//execute the file named 'a.out' using " ./a.out " command in console

//----------------------------------------------------
//LIST OF RESOURCES AVAILABLE IN PROJECT FILES 

//FUNCTIONS IN format.cpp
//namespace namespace_format
    //func_intro1()                                                 : PRINTS ASCII ART INTRODUCTION
    //func_print(space_before, string_sentence, space_after)        : PRINTS A SENTENCE WITH SPACES BEFORE AND AFTER IT ( if space_after=-1, then the cursor stays on the same line)
    //func_line(spaces_before, space_after)                         : PRINTS A PAGE DIVIDER WITH SPACES BEFORE AND AFTER IT

//FUNCTIONS IN ind_mdl.cpp
//char func_validPrompt(int, std::string)                           : RECEIVES A VAILD INPUT FROM THE USER (AND RETURNS IT)
//void func_writeVIM(std::string)                                   : WRITES TO THE .vimrc FILE IN THE CURRENT DIRECTORY
//bool func_internetAvail()                                         : CHECKS INTERNET AVAILIBILITY (AND RETURNS THE TRUTH VALUE)
//func_validInput2(number_of_option, message_to_print)              : RECEIVES A VAILD INPUT RANGING FROM 1 to 9
//func_writeLIST(input_string_here)                                 : WRITES TO list.txt
//namespace namespace_def
    //func_help(input_help_code)                                    : RECEIVES A HELP CODE AND RETURNS HELP FOR THE ISSUE

//FUNCTIONS IN pck_mdl.cpp
//func_intro1()                                                     : PRINTS ASCII ART INTRODUCTION
//func_print(space_before, string_sentence, space_after)            : PRINTS A SENTENCE WITH SPACES BEFORE AND AFTER IT ( if space_after=-1, then the cursor stays on the same line)
//func_line(spaces_before, space_after)                             : PRINTS A PAGE DIVIDER WITH SPACES BEFORE AND AFTER IT
//namespace namespace_packages
    //namespace namespace_language
        //language_cplusplus                                        : INSTALLS C++
        //language_c                                                : INSTALLS C 
        //language_csharp                                           : INSTALLS C#
		//language_python                                   : INSTALLS Python
		//language_java                                     : INSTALLS JAVA
		//language_lisp                                     : INSTALLS LISP
		//language_haskell                                  : INSTALLS HASKELL
		
	//namespace namespace_project
	    //func_nerdtree                                         : INSTALLS NERDTree
		//func_vtreeexplorer                                : INSTALLS vtreeexplorer
		//func_project                                      : INSTALLS project
		//func_ide                                          : INSTALL ide
			
	//namespace namespace_buffer
		//func_bufexplorer                                  : INSTALLS bufexplorer
		//func_minibufexpl                                  : INTALLS minibufexpl
		//func_commandtplugin                               : INSTALLS Command-T plugin
		//func_mru                                          : INSTALLS MRU 
		//func_ctrlp                                        : INSTALLS ctrlp 
		//func_fuzzyfinder                                  : INSTALLS FuzztFinder
		
	//namespace namespace_code
		//func_taglist                                      : INSTALLS taglist 
		//func_tagbar                                       : INSTALLS tagbar 
		//func_indexer                                      : INSTALLS indexer 
		//func_cctree                                       : INSTALLS CCTree 
		//func_exutility                                    : INSTALLS exUtilityy
		//func_showmarks                                    : INSTALLS ShowMarks  
		//func_lhtags                                       : INSTALLS lh-tags
		
	//namespace namespace_codewrite
		//func_autocomplpop                                 : INSTALLS AutoComplPop 
		//func_youcompleteme                                : INSTALLS YouCompleteMe 
		//func_crefvim                                      : INSTALLS CRefVim 
		//func_omnicompletion                               : INSTALLS Omni Complete (for Erlang)

	//namespace namespace_funct
		//func_matchit                                      : INSTALLS matchit 
		//func_bufkill                                      : INSTALLS bufkill 
		//func_undotree                                     : INSTALLS undotree 
		//func_surround                                     : INSTALLS surround 

	//namespace namespace_compl
		//func_buildtoolswrapper                            : INSTALLS Build Tools Wrapper
		
	//namespace namespace_integ                                     
		//func_fugitive                                     : INSTALLS Fugitive 
		//func_perforce                                     : INSTALLS Perforce 
		//func_lawrencium                                   : INSTALLS Lawrencium 
		//func_gitv                                         : INSTALLS GitV 
		//func_splice                                       : INSTALLS Splice

//HELP CODES IN fwd_decl.h FOR ind_mdl.cpp
//namespace namespace_def
	 //HELP_VIM                                                 : HELP CODE FOR VIM, cURL, Git, AND Pathogen INSTALLATION 
	 //HELP_LANG                                                : HELP CODE FOR COMPILER/INTERPRETOR INSTALLATION 
	 //HELP_PROJECT                                             : HELP CODE FOR PROJECT BROWSERS 
	 //HELP_BUFFER                                              : HELP CODE FOR BUFFERS
	 //HELP_CODE                                                : HELP CODE FOR CODE BROWSING UTILITIES
	 //HELP_CODEWRITE                                           : HELP CODE FOR CODE WRITING UTILITIES
	 //HELP_FUNCT                                               : HELP CODE FOR VIM FUNCTIONALITY EXTENDERS
	 //HELP_COMPL                                               : HELP CODE FOR COMPILERS IN VIM 
	 
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
	func_print(0, "Would you like to install VIM text-editor, Git version control, UNIX cURL, and the 'Pathogen' plugin manager? (Y/N/H):   ",-1);

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
		//a '~/.vimrc' is backed up as '~/.vimrcbackup' , and a copy of it is created in the working directory of Anwar
		system("cp ~/.vimrc ~/.vimrcbackup");
		system("cp ~/.vimrc .vimrc");
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
		namespace_def::func_help(namespace_def::HELP_VIM); //inputting issue (using ENUMS) helps explain the user the what the purpose of installation is, and the consequences of failure/not installing tools
		
		//returning to the choice menu after the question		
		goto goto_VIM;
 	}	
	else
	{
		func_print(1, "Invalid Input. Please try again.", 0);	
		goto goto_VIM;
	}	

func_line(2,1);

//UNIFIED INTERACTIVE PACKAGE MANAGER

//gives  a list of types of components IDES need
//gives a list of sub-parts of the component
//asks for a digit as input to install, or ('H' or 'h') for help.

//ASKING FOR INSTALLATION OF PROJECT MANAGERS
//this module can be used again and again, since all the variables inside it have loop scope
for(char REPEAT(1), char_projectAgain('N'); REPEAT==1; )
{
	int char_project = func_validPrompt(3, "Would you like to install a Project/Filetree browsing tool for VIM? (Y/N/H):");
	func_line(2,1);

	if (char_project=='Y' || char_project=='y')
	{
	//Inputting the tool that user wants to install
		func_print(0, "Given below is the list of tools you can install:", 1);
		func_print(0, "NERDTree                                       1", 0);
		func_print(0, "vtreeexplorer                                  2", 0);
		func_print(0, "project                                        3", 0);
		func_print(0, "ide                                            4", 1);
		
		int int_project_choice;
		int_project_choice = func_validInput2(4, "Please enter the number corresponding to the tool you would like to install:");
	
	//calling appropriate functions for each value that the user can input
	
		func_line(2,2);	

		if (int_project_choice==1)
		{	
			namespace_packages::namespace_project::func_nerdtree();
		}
		else if (int_project_choice==2)
		{
			namespace_packages::namespace_project::func_vtreeexplorer();
		}
		else if (int_project_choice==3)
		{
			namespace_packages::namespace_project::func_project();
		}
		else if (int_project_choice==4)
		{
			namespace_packages::namespace_project::func_ide();
		}

	//Asking user if they'd like to install another tool of same kind
		func_line(2, 1); //practically aesthetical
	
		char_projectAgain = func_validPrompt(2, "Would you like to install another Project/Filetree browsing tool for VIM? (Y/N):");

		func_line(2, 1); //practically aesthical
		
		if (char_projectAgain=='Y' || char_projectAgain=='y') //practically aesthetical
		{
			func_print(1, "Asking again...",-1);
			REPEAT=1;
			continue;
		}
		else if (char_projectAgain=='N' || char_projectAgain=='n')
		{
		//making sure that char_projectAgain AND char_project are both 'No' even when one of them is 'No'
		//this is being done because the loop will restart if even one of them is 'Yes' or 'Help'
			REPEAT=0;
			char_project='N';
			break;
		}
	}
	else if (char_project=='N' || char_project=='n')
	{
		REPEAT=0;
		char_projectAgain='N';
		break;
	}	
	else if (char_project=='H' || char_project=='h')
	{
		namespace_def::func_help(namespace_def::HELP_PROJECT);
		func_line(2,1);
		REPEAT=1;
		continue;
	}
}
//ASKING FOR INSTALLATION OF COMPILERS/INTERPRETORS MANAGERS
//this module can be used again and again, since all the variables inside it have loop scope
for(char REPEAT(1), char_projectAgain('N'); REPEAT==1; )
{
	int char_project = func_validPrompt(3, "Would you like to install a interpretors/compilers for programming? (Y/N/H):");
	func_line(2,1);

	if (char_project=='Y' || char_project=='y')
	{
	//Inputting the tool that user wants to install
		func_print(0, "Given below is the list of tools you can install:", 1); //change here
		func_print(0, "C++                                            1", 0);
		func_print(0, "C                                              2", 0);
		func_print(0, "C#                                             3", 0);
		func_print(0, "Python                                         4", 0);
		func_print(0, "JAVA                                           5", 0);
		func_print(0, "LISP                                           6", 0);
		func_print(0, "Haskell                                        7", 1);		
		
		int int_project_choice;
		int_project_choice = func_validInput2(7, "Please enter the number corresponding to the tool you would like to install:"); //change here
	
	//calling appropriate functions for each value that the user can input
	
		func_line(2,2);	

		if (int_project_choice==1) //change here
		{	
			namespace_packages::namespace_language::language_cplusplus();
		}
		else if (int_project_choice==2)
		{
			namespace_packages::namespace_language::language_c();
		}
		else if (int_project_choice==3)
		{
			namespace_packages::namespace_language::language_csharp();
		}
		else if (int_project_choice==4)
		{
			namespace_packages::namespace_language::language_python();
		}
		else if (int_project_choice==5)
		{
			namespace_packages::namespace_language::language_java();
		}
		else if (int_project_choice==6)
		{
			namespace_packages::namespace_language::language_lisp();
		}
		else if (int_project_choice==7)
		{
			namespace_packages::namespace_language::language_haskell();

		}

	//Asking user if they'd like to install another tool of same kind
		func_line(2, 1); //practically aesthetical
	
		char_projectAgain = func_validPrompt(2, "Would you like to install another interpretor/compiler for programming? (Y/N):");

		func_line(2, 1); //practically aesthical
		
		if (char_projectAgain=='Y' || char_projectAgain=='y') //practically aesthetical
		{
			func_print(1, "Asking again...",-1);
			REPEAT=1;
			continue;
		}
		else if (char_projectAgain=='N' || char_projectAgain=='n')
		{
		//making sure that char_projectAgain AND char_project are both 'No' even when one of them is 'No'
		//this is being done because the loop will restart if even one of them is 'Yes' or 'Help'
			REPEAT=0;
			char_project='N';
			break;
		}
	}
	else if (char_project=='N' || char_project=='n')
	{
		REPEAT=0;
		char_projectAgain='N';
		break;
	}	
	else if (char_project=='H' || char_project=='h')
	{
		namespace_def::func_help(namespace_def::HELP_LANG);
		func_line(2,1);
		REPEAT=1;
		continue;
	}
}

//INSTALLING BUFFERS/FILE BROWSING UTILITIES
for(char REPEAT(1), char_projectAgain('N'); REPEAT==1; )
{
	int char_project = func_validPrompt(3, "Would you like to install buffers/file browsing utilities for VIM? (Y/N/H):");
	func_line(2,1);

	if (char_project=='Y' || char_project=='y')
	{
	//Inputting the tool that user wants to install
	
		func_print(0, "Given below is the list of tools you can install:", 1); //change here
		func_print(0, "bufexplorer                                    1", 0);
		func_print(0, "minibufexpl                                    2", 0);
		func_print(0, "Command-T plugin                               3", 0);
		func_print(0, "MRU                                            4", 0);
		func_print(0, "ctrlp                                          5", 0);
		func_print(0, "FuzzyFinder                                    6", 1);
		int int_project_choice;
		int_project_choice = func_validInput2(6, "Please enter the number corresponding to the tool you would like to install:"); //change here
	
	//calling appropriate functions for each value that the user can input
	
		func_line(2,2);	

		if (int_project_choice==1) //change here
		{	
			namespace_packages::namespace_buffer::func_bufexplorer();
		}
		else if (int_project_choice==2)
		{
			namespace_packages::namespace_buffer::func_minibufexpl();
		}
		else if (int_project_choice==3)
		{
			namespace_packages::namespace_buffer::func_commandtplugin();
		}
		else if (int_project_choice==4)
		{
			namespace_packages::namespace_buffer::func_mru();
		}
		else if (int_project_choice==5)
		{
			namespace_packages::namespace_buffer::func_ctrlp();
		}
		else if (int_project_choice==6)
		{
			namespace_packages::namespace_buffer::func_fuzzyfinder();
		}

	//Asking user if they'd like to install another tool of same kind
		func_line(2, 1); //practically aesthetical
	
		char_projectAgain = func_validPrompt(2, "Would you like to install another buffer/file browser for VIM? (Y/N):");

		func_line(2, 1); //practically aesthical
		
		if (char_projectAgain=='Y' || char_projectAgain=='y') //practically aesthetical
		{
			func_print(1, "Asking again...",-1);
			REPEAT=1;
			continue;
		}
		else if (char_projectAgain=='N' || char_projectAgain=='n')
		{
		//making sure that char_projectAgain AND char_project are both 'No' even when one of them is 'No'
		//this is being done because the loop will restart if even one of them is 'Yes' or 'Help'
			REPEAT=0;
			char_project='N';
			break;
		}
	}
	else if (char_project=='N' || char_project=='n')
	{
		REPEAT=0;
		char_projectAgain='N';
		break;
	}	
	else if (char_project=='H' || char_project=='h')
	{
		namespace_def::func_help(namespace_def::HELP_BUFFER);
		func_line(2,1);
		REPEAT=1;
		continue;
	}
}

//ASKING FOR INSTALLATION OF CODE BROWSING TOOLS
//this module can be used again and again, since all the variables inside it have loop scope
for(char REPEAT(1), char_projectAgain('N'); REPEAT==1; )
{
	int char_project = func_validPrompt(3, "Would you like to install a code browsers for VIM? (Y/N/H):");
	func_line(2,1);

	if (char_project=='Y' || char_project=='y')
	{
	//Inputting the tool that user wants to install
		func_print(0, "Given below is the list of tools you can install:", 1);
		func_print(0, "taglist                                        1", 0);
		func_print(0, "Tagbar                                         2", 0);
		func_print(0, "Indexer                                        3", 0);
		func_print(0, "CCTree                                         4", 0);
		func_print(0, "exUtility                                      5", 0);
		func_print(0, "ShowMarks                                      6", 0);
		func_print(0, "lh-tags                                        7", 1);
		
		int int_project_choice;
		int_project_choice = func_validInput2(7, "Please enter the number corresponding to the tool you would like to install:");
	
	//calling appropriate functions for each value that the user can input
	
		func_line(2,2);	

		if (int_project_choice==1)
		{	
			namespace_packages::namespace_code::func_taglist();
		}
		else if (int_project_choice==2)
		{
			namespace_packages::namespace_code::func_tagbar();
		}
		else if (int_project_choice==3)
		{
			namespace_packages::namespace_code::func_indexer();
		}
		else if (int_project_choice==4)
		{
			namespace_packages::namespace_code::func_cctree();
		}
		else if (int_project_choice==5)
		{
			namespace_packages::namespace_code::func_exutility();
		}
		else if (int_project_choice==4)
		{
			namespace_packages::namespace_code::func_showmarks();
		}
		else if (int_project_choice==4)
		{
			namespace_packages::namespace_code::func_lhtags();
		}

	//Asking user if they'd like to install another tool of same kind
		func_line(2, 1); //practically aesthetical
	
		char_projectAgain = func_validPrompt(2, "Would you like to install another code browser for VIM? (Y/N):");

		func_line(2, 1); //practically aesthical
		
		if (char_projectAgain=='Y' || char_projectAgain=='y') //practically aesthetical
		{
			func_print(1, "Asking again...",-1);
			REPEAT=1;
			continue;
		}
		else if (char_projectAgain=='N' || char_projectAgain=='n')
		{
		//making sure that char_projectAgain AND char_project are both 'No' even when one of them is 'No'
		//this is being done because the loop will restart if even one of them is 'Yes' or 'Help'
			REPEAT=0;
			char_project='N';
			break;
		}
	}
	else if (char_project=='N' || char_project=='n')
	{
		REPEAT=0;
		char_projectAgain='N';
		break;
	}	
	else if (char_project=='H' || char_project=='h')
	{
		namespace_def::func_help(namespace_def::HELP_CODE);
		func_line(2,1);
		REPEAT=1;
		continue;
	}
}

//ASKING FOR INSTALLATION OF CODE WRITING TOOLS
//this module can be used again and again, since all the variables inside it have loop scope
for(char REPEAT(1), char_projectAgain('N'); REPEAT==1; )
{
	int char_project = func_validPrompt(3, "Would you like to install code autocomplete and reference tools for VIM? (Y/N/H):");
	func_line(2,1);

	if (char_project=='Y' || char_project=='y')
	{

	//Inputting the tool that user wants to install
		func_print(0, "Given below is the list of tools you can install:", 1);
		func_print(0, "autocomplpop                                   1", 0);
		func_print(0, "youcompleteme                                  2", 0);
		func_print(0, "CRefVim                                        3", 0);
		func_print(0, "Omni Completion (for Erlang)                   4", 1);
		
		int int_project_choice;
		int_project_choice = func_validInput2(4, "Please enter the number corresponding to the tool you would like to install:");
	
	//calling appropriate functions for each value that the user can input
	
		func_line(2,2);	

		if (int_project_choice==1)
		{	
			namespace_packages::namespace_codewrite::func_autocomplpop();
		}
		else if (int_project_choice==2)
		{
			namespace_packages::namespace_codewrite::func_youcompleteme();
		}
		else if (int_project_choice==3)
		{
			namespace_packages::namespace_codewrite::func_crefvim();
		}
		else if (int_project_choice==4)
		{
			namespace_packages::namespace_codewrite::func_omnicompletion();
		}

	//Asking user if they'd like to install another tool of same kind
		func_line(2, 1); //practically aesthetical
	
		char_projectAgain = func_validPrompt(2, "Would you like to install another code autocompletion and reference tool for VIM? (Y/N):");

		func_line(2, 1); //practically aesthical
		
		if (char_projectAgain=='Y' || char_projectAgain=='y') //practically aesthetical
		{
			func_print(1, "Asking again...",-1);
			REPEAT=1;
			continue;
		}
		else if (char_projectAgain=='N' || char_projectAgain=='n')
		{
		//making sure that char_projectAgain AND char_project are both 'No' even when one of them is 'No'
		//this is being done because the loop will restart if even one of them is 'Yes' or 'Help'
			REPEAT=0;
			char_project='N';
			break;
		}
	}
	else if (char_project=='N' || char_project=='n')
	{
		REPEAT=0;
		char_projectAgain='N';
		break;
	}	
	else if (char_project=='H' || char_project=='h')
	{
		namespace_def::func_help(namespace_def::HELP_CODEWRITE);
		func_line(2,1);
		REPEAT=1;
		continue;
	}
}

//ASKING FOR INSTALLATION OF VIM FUNCTIONALITY EXTENDERS
//this module can be used again and again, since all the variables inside it have loop scope
for(char REPEAT(1), char_projectAgain('N'); REPEAT==1; )
{
	int char_project = func_validPrompt(3, "Would you like to install tools for extending basic VIM functionality? (Y/N/H):");
	func_line(2,1);

	if (char_project=='Y' || char_project=='y')
	{

	//Inputting the tool that user wants to install
		func_print(0, "Given below is the list of tools you can install:", 1);
		func_print(0, "matchit                                        1", 0);
		func_print(0, "bufkill                                        2", 0);
		func_print(0, "undotree                                       3", 0);
		func_print(0, "surround                                       4", 1);
		
		int int_project_choice;
		int_project_choice = func_validInput2(4, "Please enter the number corresponding to the tool you would like to install:");
	
	//calling appropriate functions for each value that the user can input
	
		func_line(2,2);	

		if (int_project_choice==1)
		{	
			namespace_packages::namespace_funct::func_matchit();
		}
		else if (int_project_choice==2)
		{
			namespace_packages::namespace_funct::func_bufkill();
		}
		else if (int_project_choice==3)
		{
			namespace_packages::namespace_funct::func_undotree();
		}
		else if (int_project_choice==4)
		{
			namespace_packages::namespace_funct::func_surround();
		}

	//Asking user if they'd like to install another tool of same kind
		func_line(2, 1); //practically aesthetical
	
		char_projectAgain = func_validPrompt(2, "Would you like to install another tool to extend basic VIM functionality? (Y/N):");

		func_line(2, 1); //practically aesthical
		
		if (char_projectAgain=='Y' || char_projectAgain=='y') //practically aesthetical
		{
			func_print(1, "Asking again...",-1);
			REPEAT=1;
			continue;
		}
		else if (char_projectAgain=='N' || char_projectAgain=='n')
		{
		//making sure that char_projectAgain AND char_project are both 'No' even when one of them is 'No'
		//this is being done because the loop will restart if even one of them is 'Yes' or 'Help'
			REPEAT=0;
			char_project='N';
			break;
		}
	}
	else if (char_project=='N' || char_project=='n')
	{
		REPEAT=0;
		char_projectAgain='N';
		break;
	}	
	else if (char_project=='H' || char_project=='h')
	{
		namespace_def::func_help(namespace_def::HELP_FUNCT);
		func_line(2,1);
		REPEAT=1;
		continue;
	}
}

//ASKING FOR INSTALLATION OF BACKGROUND COMPILER(S)
//this module can be used again and again, since all the variables inside it have loop scope
for(char REPEAT(1), char_projectAgain('N'); REPEAT==1; )
{
	int char_project = func_validPrompt(3, "Would you like to install tools for compiling code within VIM? (Y/N/H):");
	func_line(2,1);

	if (char_project=='Y' || char_project=='y')
	{

	//Inputting the tool that user wants to install
		func_print(0, "Given below is the list of tools you can install:", 1);
		func_print(0, "Build Tools Wrappper                           1", 1);
		
		int int_project_choice;
		int_project_choice = func_validInput2(1, "Please enter the number corresponding to the tool you would like to install:");
	
	//calling appropriate functions for each value that the user can input
	
		func_line(2,2);	

		if (int_project_choice==1)
		{	
			namespace_packages::namespace_compl::func_buildtoolswrapper();
		}

	//Asking user if they'd like to install another tool of same kind
		func_line(2, 1); //practically aesthetical
	
		char_projectAgain = func_validPrompt(2, "Would you like to reinstall tools to compile code from VIM? (Y/N):");

		func_line(2, 1); //practically aesthical
		
		if (char_projectAgain=='Y' || char_projectAgain=='y') //practically aesthetical
		{
			func_print(1, "Asking again...",-1);
			REPEAT=1;
			continue;
		}
		else if (char_projectAgain=='N' || char_projectAgain=='n')
		{
		//making sure that char_projectAgain AND char_project are both 'No' even when one of them is 'No'
		//this is being done because the loop will restart if even one of them is 'Yes' or 'Help'
			REPEAT=0;
			char_project='N';
			break;
		}
	}
	else if (char_project=='N' || char_project=='n')
	{
		REPEAT=0;
		char_projectAgain='N';
		break;
	}	
	else if (char_project=='H' || char_project=='h')
	{
		namespace_def::func_help(namespace_def::HELP_COMPL);
		func_line(2,1);
		REPEAT=1;
		continue;
	}
}

//copying the final list of downloaded components to the desktop and the hidden .vim directory in ~
func_print(1, "CREATING A LIST OF INSTALLED COMPONENTS...", 1);
system("cp list.txt ~/Desktop");
system("cp list.txt ~/.vim");
func_print(1, "Command executed.",0);
func_line(2,2);

//THANK-YOU MESSAGE
goto_THANKS:	
	func_print(0, "Thanks.\n   Please report any bugs/issues at https://github.com/prabal1997/anwar-ide-cli-setup/issues", 0);
	func_print(1, "Please refer to the list of installed components on your desktop and inside the hidden .vim directory.", 0);
	func_line(2, 2);
	
	return 0;
}
//----------------------------------------------------
