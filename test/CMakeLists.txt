project(weasel_test)

add_executable(test_main test_main.cpp)
target_link_libraries(test_main PRIVATE crypt_lib catch)