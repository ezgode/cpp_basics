add_subdirectory(my_lib)

add_executable(main1 main.cpp)
target_link_libraries(main1 my_lib1)
