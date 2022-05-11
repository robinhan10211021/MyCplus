cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(. DIR_SRCS)

add_executable(main ${DIR_SRCS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# cmake_minimum_required(VERSION 3.9)
# project(HelloWord2)

# set(CMAKE_CXX_STANDARD 11)
# aux_source_directory(. source_list)

# add_executable(HelloWord2 ${source_list})

