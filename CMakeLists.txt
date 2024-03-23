cmake_minimum_required(VERSION 3.0)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Entities/Entity.cpp
        Entities/Entity.h
        Entities/LanguageInput.cpp
        Entities/LanguageInput.h
        Entities/CSVReader.cpp
        Entities/CSVReader.h)
