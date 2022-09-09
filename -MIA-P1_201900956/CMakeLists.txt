cmake_minimum_required(VERSION 3.23)
project(_MIA_P1_201900956)
set(CMAKE_CXX_STANDARD 14)
include_directories(.)



add_executable(_MIA_P1_201900956 main.cpp
        ./include/Archivos.h ./include/Disk.h ./include/StructD.h ./include/nodo.h
        ./src/Archivos.cpp ./src/Disk.cpp ./src/nodo.cpp
        ./Analyzer/parser.cpp  ./Analyzer/scanner.cpp
        ./Analyzer/parser.h  ./Analyzer/scanner.h)