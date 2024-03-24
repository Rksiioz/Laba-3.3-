cmake_minimum_required(VERSION 3.27)
project(Laba_3_3_A)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_3_3_A main.cpp
        Complex.h
        Complex.cpp
        PublicDerived.h
        PrivateDerived.h
        PublicDerived.cpp
        PrivateDerived.cpp)
