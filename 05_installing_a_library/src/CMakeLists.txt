add_subdirectory(my_lib)

add_executable(main main.cpp)
target_link_libraries(main my_lib)
