cmake_minimum_required(VERSION 2.8.9)
project (GOOGLETEST)

file(GLOB SOURCES "src/*.cpp")

INCLUDE_DIRECTORIES(include/)
LINK_DIRECTORIES(lib/x86_64-linux-gnu/)
#For the shared library:
set ( PROJECT_LINK_LIBS libgmock.a libgtest.a libpthread.so)

add_executable(runme ${SOURCES})
target_compile_options(runme PUBLIC -std=c++11)
target_link_libraries(runme ${PROJECT_LINK_LIBS} )
install(TARGETS runme DESTINATION /bin)
