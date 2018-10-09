# Notes for ARPRO classes 


## Basic Unix commands 

1. "pwd"	: get the path of the directory where I am, or where the terminal is 
	'''
	coro_group2@PC-PROBO-02:~/code/ecn_arpro$ pwd 
	/home/coro_group2/code/ecn_arpro
	'''
2. "ls"		: to list the files of the directory you are present at 
	'''
	coro_group2@PC-PROBO-02:~/code/ecn_arpro$ ls 
	lecture_examples  live_examples  mobile_robot   open_projects_solutions
	LICENSE           maze           open_projects  README.md
	'''
3. "cd"		:  Change director
	'''
	// to move inside a sub directory 
	coro_group2@PC-PROBO-02:~/code/ecn_arpro$ cd open_projects
	coro_group2@PC-PROBO-02:~/code/ecn_arpro/open_projects$

	// to move out of the sub directoty 
	coro_group2@PC-PROBO-02:~/code/ecn_arpro/open_projects$ cd ./..
	coro_group2@PC-PROBO-02:~/code/ecn_arpro$
	''''
4. "touch"	: to create a file

	'''
	coro_group2@PC-PROBO-02:~/code/tutorial$ touch README.md
	coro_group2@PC-PROBO-02:~/code/tutorial$ ls 
	README.md
	'''

## CMAKE 

### Structure of a cmake directory 

    '''
    MyProject
            CMakeLists.txt
            include
                    a class.h
                    some functions.h
                    a basic header.h
            src
                    main.cpp
                    a class.cpp
                    some functions.cpp
            buid
            devel
    '''
Note: "CMakeLists.txt" should be the exact name of the class, including the cases. 
If the name of the file is any different then the cmake program will not identify this folder as a cmake project. 

    '''
MyProject  -> name of the project that you want to create 
	CMakeLists.txt -> the file should be directly in the subdirectory of your project, it cannot be anywhere else
	include -> contains the header files
		a class.h
		some functions.h
		a basic header.h
	src	-> contians the main code
		main.cpp
		a class.cpp
		some functions.cpp
	buid -> where the build files go
	devel -> this is the development space is
    '''

### Steps for building the structure of the project 

1. Create the include, src and build folders 
    '''
    coro_group2@PC-PROBO-02:~/code$ mkdir tutorial
    coro_group2@PC-PROBO-02:~/code$ ls
    ARPRO                     build-lab2-Desktop-Du00e9faut  lab1  Lab 3
    build-lab2-Desktop-Debug  ecn_arpro                      lab2  tutorial
    coro_group2@PC-PROBO-02:~/code$ cd tutorial/
    coro_group2@PC-PROBO-02:~/code/tutorial$ ls
    coro_group2@PC-PROBO-02:~/code/tutorial$ touch README.md
    coro_group2@PC-PROBO-02:~/code/tutorial$ ls
    README.md
    coro_group2@PC-PROBO-02:~/code/tutorial$ ls
    README.md
    coro_group2@PC-PROBO-02:~/code/tutorial$ mkdir include
    coro_group2@PC-PROBO-02:~/code/tutorial$ mkdir src
    coro_group2@PC-PROBO-02:~/code/tutorial$ mkdir build
    coro_group2@PC-PROBO-02:~/code/tutorial$ ls
    build  include  README.md  src
    '''

2. Create a CMakeLists.txt file just under the main folder of the project 

coro_group2@PC-PROBO-02:~/code/tutorial$ touch CMakeLists.txt
coro_group2@PC-PROBO-02:~/code/tutorial$ ls 
build  CMakeLists.txt  include  README.md  src

3. Now we need to initialize folder tutorial as a cmake project folder 

	3.1 go to the build folder 
	3.2 run the command "cmake .."
		".." is actually a way to specify the position of the CMakeLists.txt directory 
		which is saying "go a folder above and look there"
		
		Note: where every the cmake command is run, all the compilation files are generated inside 
		that folder, so here we go inside the build folder and then run the cmake command 
		
	'''
	coro_group2@PC-PROBO-02:~/code/tutorial$ cd build/
	coro_group2@PC-PROBO-02:~/code/tutorial/build$ ls 
	coro_group2@PC-PROBO-02:~/code/tutorial/build$ cmake ..
	-- The C compiler identification is GNU 5.4.0
	-- The CXX compiler identification is GNU 5.4.0
	-- Check for working C compiler: /usr/bin/cc
	-- Check for working C compiler: /usr/bin/cc -- works
	-- Detecting C compiler ABI info
	-- Detecting C compiler ABI info - done
	-- Detecting C compile features
	-- Detecting C compile features - done
	-- Check for working CXX compiler: /usr/bin/c++
	-- Check for working CXX compiler: /usr/bin/c++ -- works
	-- Detecting CXX compiler ABI info
	-- Detecting CXX compiler ABI info - done
	-- Detecting CXX compile features
	-- Detecting CXX compile features - done
	-- Configuring done
	-- Generating done
	-- Build files have been written to: /home/coro_group2/code/tutorial/build
	coro_group2@PC-PROBO-02:~/code/tutorial/build$ ls 
	CMakeCache.txt  CMakeFiles  cmake_install.cmake  Makefile
	coro_group2@PC-PROBO-02:~/code/tutorial/build$
	'''


### Making code files and putting them in the right folder

1. Lets say we make 3 files 
	a. main.cpp: the main entry point of the code
	b. hello.cpp: a class that helps us display hello msg 
	c. hello.h: the header, which contains the definition of the hello.cpp file

	'''
	coro_group2@PC-PROBO-02:~/code/tutorial$ ls 
	build  CMakeLists.txt  include  README.md  src
	coro_group2@PC-PROBO-02:~/code/tutorial$ cd src/
	coro_group2@PC-PROBO-02:~/code/tutorial/src$ ls 
	coro_group2@PC-PROBO-02:~/code/tutorial/src$ touch main.cpp
	coro_group2@PC-PROBO-02:~/code/tutorial/src$ touch hello.cpp
	coro_group2@PC-PROBO-02:~/code/tutorial/src$ ls 
	hello.cpp  main.cpp
	coro_group2@PC-PROBO-02:~/code/tutorial/src$ cd ./..
	coro_group2@PC-PROBO-02:~/code/tutorial$ ls 
	build  CMakeLists.txt  include  README.md  src
	coro_group2@PC-PROBO-02:~/code/tutorial$ cd include/
	coro_group2@PC-PROBO-02:~/code/tutorial/include$ ls 
	coro_group2@PC-PROBO-02:~/code/tutorial/include$ touch hello.h
	coro_group2@PC-PROBO-02:~/code/tutorial/include$ ls 
	hello.h
	coro_group2@PC-PROBO-02:~/code/tutorial/include$ 
	''' 

2. write the contents in the respective file
### Compiling the code and running
1. run "cmake .." from the build folder
2. run "make" in the build folder
3. depending on what name you have given in add_executable() in CMakeLists.txt , there will be an executable file generated
    use it to fun the code for example  "./hello" command will run the executable "hello" in the build folder

## QTCreator
1. create a folder with atleast a CMakeLists.txt
2. Load the project in qt creator from new project -> and selecting the CMakeLists.txt
3. Uncheck the default boxes and set the build directory to the correct build folder for your project
