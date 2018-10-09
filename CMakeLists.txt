cmake_minimum_required(VERSION 2.6)
project(tutorial)

add_compile_options(-std=c++11)

include_directories(include)
add_executable(hello 
	src/main.cpp
        src/hello.cpp
        src/enum.cpp)

add_executable(polymorphism
        src/PolymorphismVirtual.cpp)

add_executable(inheritance 
	src/InheritanceExample.cpp)

add_executable(scope
            src/scopeMain.cpp
            src/scopeExample.cpp)

add_executable(passByRVP src/passByRVP.cpp)

add_executable(argcArgvMain src/argcArgvMain.cpp)
add_executable(overloadingMain src/overloadingMain.cpp)
add_executable(templateMain src/templateMain.cpp)
