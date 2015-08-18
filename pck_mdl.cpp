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
			system("git clone https://github.com/scrooloose/nerdtree.git ~/.vim/bundle/nerdtree");
			
			//ADDITION TO LIST
			func_writeLIST("NERDTree");
		}
		
		void func_vtreeexplorer()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/vtreeexplorer.git ~/.vim/bundle/vtreeexplorer");
		
			//ADDITION TO LIST
			func_writeLIST("vtreeexplorer");
		}

		void func_project()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/project.tar.gz.git ~/.vim/bundle/project.tar.gz");
		
			//ADDITION TO LIST
			func_writeLIST("project");
		}

		void func_ide()
		{
			//INSTALLATION
			system("https://github.com/dmonllao/vim-IDE.git ~/.vim/bundle/vim-IDE");
			
			//ADDITION TO LIST
			func_writeLIST("ide");
		}

	}
	namespace namespace_buffer
	{
		void func_bufexplorer()
		{
			//INSTALLATION
			system("git clone https://github.com/jlanzarotta/bufexplorer.git ~/.vim/bundle/bufexplorer");
			
			//ADDITION TO LIST
			func_writeLIST("bufexplorer");
		}
		
		void func_minibufexpl()
		{
			//INSTALLATION //UNKNOWN
			system("git clone https://github.com/fholgado/minibufexpl.vim.git ~/.vim/bundle/minibufexpl.vim");
		
			//ADDITION TO LIST
			func_writeLIST("minibufexpl");
		}

		void func_commandtplugin()
		{
			//INSTALLATION //PATHOGEN
			system("git clone https://github.com/wincent/command-t.git ~/.vim/bundle/command-t");
		
			//ADDITION TO LIST
			func_writeLIST("command-t explorer");
		}

		void func_mru()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/mru.vim.git ~/.vim/bundle/mru.vim");
		
			//ADDITION TO LIST
			func_writeLIST("MRU for VIM");			
		}

		void func_ctrlp()
		{
			//INSTALLATION
			system("git clone https://github.com/kien/ctrlp.vim.git ~/.vim/bundle/ctrlp.vim");
		
			//ADDITION TO LIST
			func_writeLIST("CTRLP for VIM");
		}
		
		void func_fuzzyfinder()
		{
			//INSTALLATION
			system("git clone https://github.com/junegunn/fzf.git ~/.vim/bundle/fzf");
		
			//ADDITION TO LIST
			func_writeLIST("fuzzyfinder");

		}
	}
	namespace namespace_code
	{
		void func_tagbar()
		{
			//INSTALLATION
			system("git clone https://github.com/majutsushi/tagbar.git ~/.vim/bundle/tagbar");
		
			//ADDITION TO LIST
			func_writeLIST("tagbar");

		}
		
		void func_taglist()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/taglist.vim.git ~/.vim/bundle/taglist.vim");
		
			//ADDITION TO LIST
			func_writeLIST("taglist");

		}

		void func_indexer()
		{
			//INSTALLATION
			system("git clone https://github.com/everzet/vim-indexer.git ~/.vim/bundle/vim-indexer");
		
			//ADDITION TO LIST
			func_writeLIST("indexer");

		}

		void func_cctree()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/CCTree.git ~/.vim/bundle/CCTree");
		
			//ADDITION TO LIST
			func_writeLIST("cctree");

		}
		void func_exutility()
		{
			//INSTALLATION
			system("git clone https://github.com/exvim/ex-utility.git ~/.vim/bundle/ex-utility");
		
			//ADDITION TO LIST
			func_writeLIST("exutility");

		}
		
		void func_showmarks()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/ShowMarks.git ~/.vim/bundle/ShowMarks");
		
			//ADDITION TO LIST
			func_writeLIST("showmarks");

		}

		void func_lhtags()
		{
			//INSTALLATION
			system("git clone https://github.com/LucHermitte/lh-tags.git ~/.vim/bundle/lh-tags");
		
			//ADDITION TO LIST
			func_writeLIST("lh-tags by LucHermitte");

		}

	}

	namespace namespace_codewrite
	{
		void func_autocomplpop()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/AutoComplPop.git ~/.vim/bundle/AutoComplPop");
		
			//ADDITION TO LIST
			func_writeLIST("autocomplpop");

		}
		
		void func_youcompleteme()
		{
			//INSTALLATION
			system("git clone https://github.com/Valloric/YouCompleteMe.git ~/.vim/bundle/YouCompleteMe");
		
			//ADDITION TO LIST
			func_writeLIST("youcompleteme");

		}

		void func_crefvim()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/CRefVim.git ~/.vim/bundle/CRefVim");
		
			//ADDITION TO LIST
			func_writeLIST("crefvim");

		}

		void func_omnicompletion()
		{

			//INSTALLATION
			system("git clone https://github.com/vim-erlang/vim-erlang-omnicomplete.git ~/.vim/bundle/vim-erlang-omnicomplete");
		
			//ADDITION TO LIST
			func_writeLIST("omnicomplete for Erlang");
		}
	}
	
	namespace namespace_funct
	{	
		void func_matchit()
		{
			//INSTALLATION
			system("git clone https://github.com/edsono/vim-matchit.git ~/.vim/bundle/vim-matchit");
		
			//ADDITION TO LIST
			func_writeLIST("matchit");

		}
		
		void func_bufkill()
		{
			//INSTALLATION
			system("git clone https://github.com/vim-scripts/bufkill.vim.git ~/.vim/bundle/bufkill.vim");
		
			//ADDITION TO LIST
			func_writeLIST("bufkill");

		}

		void func_undotree()
		{
			//INSTALLATION
			system("git clone https://github.com/mbbill/undotree.git ~/.vim/bundle/undotree");
		
			//ADDITION TO LIST
			func_writeLIST("undotree");

		}

		void func_surround()
		{
			//INSTALLATION
			system("git clone https://github.com/tpope/vim-surround.git ~/.vim/bundle/vim-surround");
		
			//ADDITION TO LIST
			func_writeLIST("surround");

		}
	}
	namespace namespace_compl
	{
		void func_buildtoolswrapper()
		{
			//INSTALLATION
			system("git clone https://github.com/LucHermitte/vim-build-tools-wrapper.git ~/.vim/bundle/vim-build-tools-wrapper");
		
			//ADDITION TO LIST
			func_writeLIST("build tools wrapper");

		}
	}
	namespace namespace_integ
	{
		void func_fugitive()
		{
			//INSTALLATION
			system("git clone https://github.com/tpope/vim-fugitive.git ~/.vim/bundle/vim-fugitive");
		
			//ADDITION TO LIST
			func_writeLIST("fugitive");

		}

		void func_perforce()
		{

			//INSTALLATION
			system("git clone https://github.com/vim-scripts/perforce.vim.git ~/.vim/bundle/perforce.vim");
		
			//ADDITION TO LIST
			func_writeLIST("perforce");
		}

		void func_lawrencium()
		{
			//INSTALLATION
			system("git clone https://github.com/ludovicchabant/vim-lawrencium.git ~/.vim/bundle/vim-lawrencium");
		
			//ADDITION TO LIST
			func_writeLIST("lawrencium");

		}

		void func_gitv()
		{
			//INSTALLATION
			system("git clone https://github.com/gregsexton/gitv.git ~/.vim/bundle/gitv");
		
			//ADDITION TO LIST
			func_writeLIST("GitV");
		
		}

		void func_splice()
		{
			//INSTALLATION //PATHOGEN
			system("git clone https://github.com/sjl/splice.vim.git ~/.vim/bundle/splice.vim");
		
			//ADDITION TO LIST
			func_writeLIST("Splice");

		}
	}
	namespace namespace_themes
	{
	
	}
}

//----------------------------------------------------

