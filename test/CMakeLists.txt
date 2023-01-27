find_package(GTest REQUIRED)

add_executable(functions functions.cpp)

target_link_libraries(functions
  PRIVATE
  GTest::GTest
  my_func)

add_test(my_func_gtests functions)