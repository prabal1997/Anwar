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
		void language_cplusplus()
		{
			//INSTALLATION
			system("sudo apt-get install g++");
			
			//ADDITION TO LIST
			func_writeLIST("C++");
		}
		void language_c()
		{
			//INSTALLATION
			system("sudo apt-get install gcc");
			
			//ADDITION TO LIST
			func_writeLIST("C");
		}
		void language_csharp()
		{
			//INSTALLATION
			system("sudo apt-get install mono-complete");

			//ADDITION TO LIST
			func_writeLIST("C# Compiler Mono Complete");
		}
		void language_python()
		{
			//INSTALLATION
			system("sudo apt-get install idle-python3.4");

			//ADDITION TO LIST
			func_writeLIST("Python Idle 3");
		}
		void language_java()
		{
			//INSTALLATION
			system("sudo apt-get install openjdk-7-jre");
			system("sudo apt-get install openjdk-7-jdk");
			system("sudo apt-get install icedtea-plugin");
	
			//ADDITION TO LIST
			func_writeLIST("JAVA OpenJDK, JAVA OpenJRE, and IceTea");
		}
		void language_lisp()
		{
			//INSTALLATION
			system("apt-cache search lisp");
			system("sudo apt-get install clisp");

			
			//ADDITION TO LIST
			func_writeLIST("Clisp");
		}
		void language_haskell()
		{
			//INSTALLATION
			system("sudo apt-get install haskell-platform");


			//ADDITION TO LIST
			func_writeLIST("Haskell");
		}
	}
	namespace namespace_project
	{	

		void func_nerdtree()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("git clone https://github.com/scrooloose/nerdtree.git");
			
			//ADDITION TO LIST
			func_writeLIST("NERDTree");
		}
		
		void func_vtreeexplorer()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("git clone https://github.com/vim-scripts/vtreeexplorer.git");
		
			//ADDITION TO LIST
			func_writeLIST("vtreeexplorer");
		}

		void func_project()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");			
			system("git clone https://github.com/vim-scripts/project.tar.gz.git");
		
			//ADDITION TO LIST
			func_writeLIST("project");
		}

		void func_ide()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");			
			system("git clone https://github.com/vim-scripts/c.vim.git");
			
			//ADDITION TO LIST
			func_writeLIST("ide");
		}

	}
	namespace namespace_buffer
	{
		void func_bufexplorer()
		{
			//INSTALLATION  //VUNDLE
			system("cd ~/.vim/bundle");
			system("git clone https://github.com/scrooloose/nerdtree.git");
			
			//ADDITION TO LIST
			func_writeLIST("bufexplorer");
		}
		
		void func_minibufexpl()
		{
			//INSTALLATION //UNKNOWN
			system("cd ~/.vim/bundle");
			system("git clone https://github.com/fholgado/minibufexpl.vim.git");
		
			//ADDITION TO LIST
			func_writeLIST("minibufexpl");
		}

		void func_commandtplugin()
		{
			//INSTALLATION //PATHOGEN
			system("cd ~/.vim/bundle");
			system("git clone https://github.com/wincent/command-t.git");
		
			//ADDITION TO LIST
			func_writeLIST("command-t explorer");
		}

		void func_mru()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-scripts/mru.vim.git");
		
			//ADDITION TO LIST
			func_writeLIST("MRU for VIM");			
		}

		void func_ctrlp()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/kien/ctrlp.vim.git");
		
			//ADDITION TO LIST
			func_writeLIST("CTRLP for VIM");
		}
		
		void func_fuzzyfinder()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/junegunn/fzf.git");
		
			//ADDITION TO LIST
			func_writeLIST("fuzzyfinder");

		}
	}
	namespace namespace_code
	{
		void func_tagbar()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/majutsushi/tagbar.git");
		
			//ADDITION TO LIST
			func_writeLIST("tagbar");

		}
		
		void func_taglist()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-scripts/taglist.vim.git");
		
			//ADDITION TO LIST
			func_writeLIST("taglist");

		}

		void func_indexer()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/everzet/vim-indexer.git");
		
			//ADDITION TO LIST
			func_writeLIST("indexer");

		}

		void func_cctree()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-scripts/CCTree.git");
		
			//ADDITION TO LIST
			func_writeLIST("cctree");

		}
		void func_exutility()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/exvim/ex-utility.git");
		
			//ADDITION TO LIST
			func_writeLIST("exutility");

		}
		
		void func_showmarks()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-scripts/ShowMarks.git");
		
			//ADDITION TO LIST
			func_writeLIST("showmarks");

		}

		void func_lhtags()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/LucHermitte/lh-tags.git");
		
			//ADDITION TO LIST
			func_writeLIST("lh-tags by LucHermitte");

		}

	}

	namespace namespace_codewrite
	{
		void func_autocomplpop()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-scripts/AutoComplPop.git");
		
			//ADDITION TO LIST
			func_writeLIST("autocomplpop");

		}
		
		void func_youcompleteme()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/Valloric/YouCompleteMe.git");
		
			//ADDITION TO LIST
			func_writeLIST("youcompleteme");

		}

		void func_crefvim()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-scripts/CRefVim.git");
		
			//ADDITION TO LIST
			func_writeLIST("crefvim");

		}

		void func_omnicompletion()
		{

			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-erlang/vim-erlang-omnicomplete.git");
		
			//ADDITION TO LIST
			func_writeLIST("omnicomplete");
		}
	}
	
	namespace namespace_funct
	{	
		void func_matchit()
		{
			//INSTALLATION //PATHOGEN
			system("cd ~/.vim/bundle");
			system("https://github.com/edsono/vim-matchit.git");
		
			//ADDITION TO LIST
			func_writeLIST("matchit");

		}
		
		void bufkill()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-scripts/bufkill.vim.git");
		
			//ADDITION TO LIST
			func_writeLIST("bufkill");

		}

		void undotree()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/mbbill/undotree.git");
		
			//ADDITION TO LIST
			func_writeLIST("undotree");

		}

		void surround()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/tpope/vim-surround.git");
		
			//ADDITION TO LIST
			func_writeLIST("surround");

		}
	}
	namespace namespace_compl
	{
		void buildtoolswrapper()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/LucHermitte/vim-build-tools-wrapper.git");
		
			//ADDITION TO LIST
			func_writeLIST("build tools wrapper");

		}
	}
	namespace namespace_integ
	{
		void fugitive()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/tpope/vim-fugitive.git");
		
			//ADDITION TO LIST
			func_writeLIST("fugitive");

		}

		void perforce()
		{

			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/vim-scripts/perforce.vim.git");
		
			//ADDITION TO LIST
			func_writeLIST("perforce");
		}

		void lawrencium()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/ludovicchabant/vim-lawrencium.git");
		
			//ADDITION TO LIST
			func_writeLIST("lawrencium");

		}

		void gitv()
		{
			//INSTALLATION
			system("cd ~/.vim/bundle");
			system("https://github.com/gregsexton/gitv.git");
		
			//ADDITION TO LIST
			func_writeLIST("GitV");
		
		}

		void splice()
		{
			//INSTALLATION //PATHOGEN
			system("cd ~/.vim/bundle");
			system("https://github.com/sjl/splice.vim.git");
		
			//ADDITION TO LIST
			func_writeLIST("Splice");

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

