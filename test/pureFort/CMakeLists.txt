cmake_minimum_required(VERSION 3.20)

project(demoTest)

set(SOURCE
    demoTest.F90
    test_suite1.F90
    )

add_executable(demoTest ${SOURCE})

target_link_libraries(demoTest PRIVATE demoLib)

# Note this is not the best approach, but works (this is not the pattern in test-drive's docs)
target_link_libraries(demoTest PRIVATE test-drive-lib)
