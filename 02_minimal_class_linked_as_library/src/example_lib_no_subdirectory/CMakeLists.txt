add_library(my_lib SharedBuffer.cpp)

add_executable(main main.cpp)
target_link_libraries(main my_lib)
