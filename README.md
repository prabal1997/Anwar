```sh 
       "8888    888b    888    888       888           d8888    8888888b.  
      d88888    8888b   888    888   o   888          d88888    888   Y88b 
     d88P888    88888b  888    888  d8b  888         d88P888    888    888 
    d88P 888    888Y88b 888    888 d888b 888        d88P 888    888   d88P 
   d88P  888    888 Y88b888    888d88888b888       d88P  888    8888888P8  
  d88P~~~888    888  Y88888    88888P Y88888      d88P~~~888    888 T88b   
 d8888888888    888   Y8888    8888P   Y8888     d8888888888    888  T88b  
d88P     888    888    Y888    888P     Y888    d88P     888    888   T88b
```
# Anwar
Anwar is a CLI(Command Line Interface) program that simplifies the process of creating a custom VIM based IDE(Integrated Development Environment) for everyone, especially those new to developing on Ubuntu.

## What does Anwar do?
Anwar helps you install the different components that an IDE uses and configures the VIM text-editor appropriately. This allows you to develop your own blazing-fast lightweight VIM based IDE on Ubuntu.

## What systems can Anwar run on?
Anwar has been developed to work on Ubuntu linux. Anwar also works with Ubuntu derivatives, which includes Ubuntu Kylin, Edubuntu, Ubuntu GNOME, Kubuntu, Lubuntu, Xubuntu, Ubuntu Studio, and Ubuntu MATE.
This is not an exhaustive list and Anwar should work on other Ubuntu derivatives too.

## Anwar for IDE Building
If you would like to use Anwar, follow the steps given to download and start it.

###Downloading Anwar
Execute the following commands in sequence to download Anwar on your Ubuntu operating system.
```sh
# creating a new hidden directory
mkdir ~/.anwar

# navigating to the new directory
cd ~/.anwar

# downloading the executable from github to the new directory
git clone https://github.com/prabal1997/anwar-ide-cli-setup.git
```

###Starting Anwar
Execute the following commands in sequence to start Anwar for use
```sh
# navigating to the correct directory
cd ~/.anwar/anwar-ide-cli-setup

# changing file permissions for Anwar
chmod u+x anwar.out

# running Anwar
./anwar.out
```

## Contributing to Anwar
To contribute to Anwar, create a new branch and then sumbit a merge request. Please understand that only valuable patches will be integrated into the master branch. Please read the following instructions to install pre-requisite compilers, clone this repository, understand the structure of Anwar, and to compile your build.

###Installing Compilers
Anwar uses 'C', 'C++', and 'BASH' programming languages to operate. While 'BASH' is a part of the Ubuntu operating system by default, 'C' and 'C++' compilers might not be available on some machines running Ubuntu and its derivatives. Use the following commands to install the compilers for 'C' and 'C++' programming languages.
```sh
# updating list of repositories
sudo apt-get update

# installing 'C' compiler
sudo apt-get install gcc

#installing 'C++' compiler
sudo apt-get install g++
```

###Downloading Anwar
```sh
# creating a new directory
mkdir ~/anwar

# navigating to the new directory
cd ~/anwar

# downloading Anwar inside the new directory
git clone https://github.com/prabal1997/anwar-ide-cli-setup.git
```

###Understanding Anwar
Anwar has been developed in a highly modular way. Please Read the CONTRIBUTE.md file to understand the structure of Anwar.

###Compiling & Executing Anwar
```sh
# navigate to the directory where Anwar is located
cd ~/anwar/anwar-ide-cli-setup

# compiling Anwar by listing every file with '.cpp' or '.h' extension after 'g++'
g++ anwar.cpp anwar_head.h fwd_decl.h format.cpp ind_mdl.cpp pck_mdl.cpp 

# changing file permissions for Anwar
chmod u+x a.out

# running Anwar
./a.out
```

##License
'Anwar' is under Apache License Version 2.0. Please read LICENSE.md for more information.
