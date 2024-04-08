cmake_minimum_required(VERSION 3.20)

project(demoLib)

set(SOURCE
    demoLib.F90
    )

add_library(demoLib STATIC ${SOURCE})
