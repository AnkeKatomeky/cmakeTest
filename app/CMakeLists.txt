project(MyApp)

add_executable(MyApp main.cpp)

include_directories(../lib)

target_link_libraries(MyApp MyLib)