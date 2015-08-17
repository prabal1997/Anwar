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
	{ HELP_VIM, HELP_LANG, HELP_PROJECT, HELP_BUFFER, HELP_CODE, HELP_CODEWRITE, HELP_FUNCT, HELP_COMPL, HELP_INTEG, HELP_THEMES };
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
	int func_validInput2(int, std::string);
	//help module
	namespace namespace_def
	{
		void func_help(int);
	}
	//writing module
	void func_writeVIM(std::string);
	void func_writeLIST(std::string);
	//internet check
	bool func_internetAvail();

//package modules

	//package managers
	namespace namespace_packages
	{
		namespace namespace_language
		{
			void language_cplusplus();
			void language_c();
			void language_csharp();
			void language_python();
			void language_java();
			void language_lisp();
			void language_haskell();
		}
		
		namespace namespace_project
		{
			void func_nerdtree();
			void func_vtreeexplorer();
			void func_project();
			void func_ide();
		}
		namespace namespace_buffer
		{
			void func_bufexplorer();
			void func_minibufexpl();
			void func_commandtplugin();
			void func_mru();
			void func_ctrlp();
			void func_fuzzyfinder();
		}
		namespace namespace_code
		{
			void func_taglist();
			void func_tagbar();
			void func_indexer();
			void func_cctree();
			void func_exutility();
			void func_showmarks();
			void func_lhtags();
		}
		namespace namespace_codewrite
		{
			void func_autocomplpop();
			void func_youcompleteme();
			void func_crefvim();
			void func_omnicompletion();
		}

		namespace namespace_funct
		{
			void func_matchit();
			void func_bufkill();
			void func_undotree();
			void func_surround();
		}

		namespace namespace_compl
		{
			void func_buildtoolswrapper(); 
		}
		namespace namespace_integ
		{
			void func_fugitive();
			void func_perforce();
			void func_lawrencium();
			void func_gitv();
			void func_splice();
		}
		namespace namespace_themes
		{
		}
	}
//----------------------------------------------------

#endif
