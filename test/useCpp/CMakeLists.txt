cmake_minimum_required(VERSION 3.20)

project(demoCppTest)

enable_language(CXX)

include(FortranCInterface)
FortranCInterface_VERIFY(CXX)
FortranCInterface_HEADER(${CMAKE_CURRENT_SOURCE_DIR}/fortran_interface.h
MACRO_NAMESPACE "FC_"
SYMBOL_NAMESPACE "FC_"
SYMBOLS sum_ints sum_real
)

set(SOURCE
    demoCppTest.cpp
)

add_executable(demoCppTest ${SOURCE})
target_compile_features(demoCppTest PRIVATE cxx_std_17)

target_link_libraries(demoCppTest PRIVATE GTest::gtest GTest::gtest_main)
target_link_libraries(demoCppTest PRIVATE demoLib)
