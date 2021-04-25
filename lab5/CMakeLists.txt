cmake_minimum_required (VERSION 2.6)
project (Lab5 CXX)

include_directories(include src)

add_executable(Lab5 main.cpp)

set(LIBSRC include/FlatShape.h include/Triangle.h include/FSContainer.h include/Vertex.h src/FlatShape.cpp src/Triangle.cpp src/FSContainer.cpp src/Vertex.cpp)

add_library(lab5 ${LIBSRC})

target_link_libraries(Lab5 lab5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-DLIB_TEST -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -O2")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

install(TARGETS Lab5 DESTINATION bin)

add_custom_target(info # ALL # target zoo is always built
    COMMAND echo "Build commands:"
    COMMAND cat compile_commands.json 
    COMMAND echo ""
    COMMAND echo ""
    COMMAND echo "Debug info:"
    COMMAND readelf --debug-dump=decodedline Lab5
    DEPENDS Lab5
)
