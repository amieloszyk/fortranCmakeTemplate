cmake_minimum_required(VERSION 3.20)

project(demoProgram)

set(SOURCE
    demoProgram.F90
    )

add_executable(demoProgram ${SOURCE})
