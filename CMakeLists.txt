cmake_minimum_required(VERSION 3.22)
project(nginx)

set(CMAKE_CXX_STANDARD 14)


add_custom_target(Debug ALL
        COMMAND rm -f ${CMAKE_CURRENT_BINARY_DIR}/../nginx &&
                ln -sf ${CMAKE_CURRENT_BINARY_DIR}/nginx ${CMAKE_CURRENT_BINARY_DIR}/../nginx &&
                echo ${CMAKE_CURRENT_BINARY_DIR}/../nginx
        COMMAND make -C ../ mkdir
        )
include(objs/CMakeLists.txt)


add_executable(test
        test/test.c
        )

#add_custom_command(
#        COMMAND ln -s ${CMAKE_CURRENT_BINARY_DIR}/nginx ${CMAKE_CURRENT_BINARY_DIR}/../nginx
#        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#        OUTPUT  performCrc32.out
#        COMMENT "Running CRC32 check..."
#)
#add_custom_target(
#        performCrc32 ALL
#        DEPENDS build
#        performCrc32.out
#)

#add_custom_command(
#        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/output.txt
#        COMMAND ls
#        DEPENDS nginx
##        DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/nginx
#)
#add_dependencies(nginx ${CMAKE_CURRENT_BINARY_DIR}/output.txt)
#add_dependencies(${CMAKE_CURRENT_BINARY_DIR}/output.txt ${CMAKE_CURRENT_BINARY_DIR}/nginx)
