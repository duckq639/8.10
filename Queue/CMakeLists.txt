include_directories(inc)
project(Queue)
add_executable(Queue src/main.c src/queue.c)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mconsole")