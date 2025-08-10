include_directories(inc)
project(Stack)
add_executable(Stack src/main.c src/stack.c)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mconsole")