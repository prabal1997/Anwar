//PACKAGE MODULE

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

namespace namespace_packages
{

	namespace namespace_language
	{
		void language_cpluscplus()
		{
		}
		void language_c()
		{
		}
		void language_csharp()
		{
		}
		void language_python()
		{
		}
		void language_java()
		{
		}
		void language_lisp()
		{
		}
		void language_haskell()
		{
		}
		void language_ruby()
		{
		}
	}
	namespace namespace_project
	{	

		void func_nerdtree()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("git clone https://github.com/scrooloose/nerdtree.git");

		}
		
		void func_vtreeexplorer()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("git clone https://github.com/vim-scripts/vtreeexplorer.git");
		}

		void func_project()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");			
			system("git clone https://github.com/vim-scripts/project.tar.gz.git");
		}

		void func_ide()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");			
			system("git clone https://github.com/vim-scripts/c.vim.git");

		}

	}
	namespace namespace_buffer
	{
		void func_bufexplorer()
		{
			//INSTALLATION  //VUNDLE
			system("cd ~/.vim/bundle");
			system("git clone https://github.com/scrooloose/nerdtree.git");
		}
		
		void func_minibufexpl()
		{

		}

		void func_commandtplugin()
		{

		}

		void func_mru()
		{

		}

		void func_ctrlp()
		{

		}
		
		void func_fuzzyfinder()
		{

		}
	}
	namespace namespace_code
	{
		void func_taglist()
		{

		}
		
		void func_tagbar()
		{

		}

		void func_indexer()
		{

		}

		void func_cctree()
		{

		}
		void func_exutility()
		{

		}
		
		void func_showmarks()
		{

		}

		void func_lhtags()
		{

		}

	}

	namespace namespace_codewrite
	{
		void func_autocomplpop()
		{

		}
		
		void func_youcompleteme()
		{

		}

		void func_crefvim()
		{

		}

		void func_omnicompletion()
		{

		}
	}
	
	namespace namespace_funct
	{	
		void func_matchit()
		{

		}
		
		void bufkill()
		{

		}

		void undotree()
		{

		}

		void surround()
		{

		}
	}
	namespace namespace_compl
	{
		void buildtoolswrapper()
		{

		}
	}
	namespace namespace_integ
	{
		void fugitive()
		{

		}

		void perforce()
		{

		}

		void lawrencium()
		{

		}

		void gitv()
		{
		
		}

		void splice()
		{

		}
	}
	namespace namespace_themes
	{
		void buildtoolswrapper()
		{

		}
	}
}

//----------------------------------------------------

