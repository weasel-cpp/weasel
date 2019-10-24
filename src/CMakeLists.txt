project(weasel_main)

add_library(crypt_lib STATIC crypt.hpp crypt.cpp)
target_include_directories(crypt_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(file-io_lib STATIC file-io.hpp file-io.cpp)
target_include_directories(file-io_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(main main.cpp)
target_link_libraries(main PRIVATE crypt_lib file-io_lib)