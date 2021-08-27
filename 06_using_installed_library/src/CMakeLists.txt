find_package(my_lib)
if(my_lib_FOUND)
	message("I found the library")
	add_executable(main main.cpp)
	target_link_libraries(main my_lib)
else()
	message(FATAL_ERROR "Where is my library?")
endif()


