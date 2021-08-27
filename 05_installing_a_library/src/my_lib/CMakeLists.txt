add_library(my_lib src/SharedBuffer.cpp)

target_include_directories(my_lib PUBLIC 
	$<INSTALL_INTERFACE:include>
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

install(FILES 
${CMAKE_CURRENT_SOURCE_DIR}/include/my_lib/SharedBuffer.h
DESTINATION 
${CMAKE_INSTALL_PREFIX}/include/my_lib)

install(TARGETS my_lib
EXPORT 
my_export
DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/my_lib)

install(EXPORT my_export FILE my_lib-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/my_lib)