cmake_minimum_required(VERSION 3.20)

project(fortranCmakeTemplate)

enable_language(Fortran)

include(GNUInstallDirs)

add_subdirectory(external/test-drive)
add_subdirectory(external/googletest)

add_subdirectory(src/demoLib)
add_subdirectory(src/demoProgram)
add_subdirectory(test/pureFort)
add_subdirectory(test/useCpp)
