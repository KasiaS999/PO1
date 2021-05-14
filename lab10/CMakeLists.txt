cmake_minimum_required (VERSION 2.6)
project (Lab10 CXX)

include_directories(include src)

add_executable(Lab10 main.cpp)

set(LIBSRC include/Sum.h include/Product.h include/Table.h src/Table.cpp src/Product.cpp src/Sum.cpp)

add_library(lab10 ${LIBSRC})

target_link_libraries(Lab10 lab10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-DLIB_TEST -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -O2")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

install(TARGETS Lab10 DESTINATION bin)

add_custom_target(info # ALL # target zoo is always built
    COMMAND echo "Build commands:"
    COMMAND cat compile_commands.json 
    COMMAND echo ""
    COMMAND echo ""
    COMMAND echo "Debug info:"
    COMMAND readelf --debug-dump=decodedline Lab10
    DEPENDS Lab10
)
