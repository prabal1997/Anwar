# Anwar
Anwar is a simple, lightweight tool that gives you the power to build your own development enviornment in VIM.

![Anwar Logo](http://i.imgur.com/kIXS6Yr.jpg)

Anwar is a CLI(Command Line Interface) program that simplifies the process of creating a custom VIM based IDE(Integrated Development Environment) for everyone, especially those new to developing on Ubuntu.
## What does Anwar do?
Anwar helps you install the different components that an IDE uses and configures the VIM text-editor appropriately. This allows you to develop your own blazing-fast lightweight VIM based IDE on Ubuntu.

You can use Anwar to set up a new development environment in a matter of mere minutes, allowing you to practically set up any machine as your development hub.

## What systems can Anwar run on?
Anwar is compatible with Ubuntu and all its official flavours, including Ubuntu Kylin, Edubuntu, Ubuntu GNOME, Kubuntu, Lubuntu, Xubuntu, Ubuntu Studio, and Ubuntu MATE.

![Ubuntu Flavours](http://i.imgur.com/E31M5rT.jpg)

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
To contribute to Anwar, create a new branch and then sumbit a pull request. Please understand that only valuable patches will be integrated into the master branch. Please read the following instructions to install pre-requisite compilers, clone this repository, understand the structure of Anwar, and to compile your build.

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
Anwar has been developed in a highly modular way. Please read the introductory notes inside ```anwar.cpp ``` file to understand the structure of Anwar.

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
'Anwar' is licenced under Apache License Version V2. Please read LICENSE for more information.
