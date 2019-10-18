cmake_minimum_required(VERSION 3.5)

include_directories(include)
link_directories(./ThirdParty/LibraryExample/)
include_directories(ThirdParty/LibraryExample/include)

file(GLOB_RECURSE SOURCES "src/*.cpp" main.cpp)
add_executable(example ${SOURCES})
target_link_libraries (example ExampleLibrary)