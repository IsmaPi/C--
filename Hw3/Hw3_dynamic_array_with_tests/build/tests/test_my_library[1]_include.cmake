if(EXISTS "/home/ismapi/Desktop/C++/Hw3/Hw3_dynamic_array_with_tests/build/tests/test_my_library[1]_tests.cmake")
  include("/home/ismapi/Desktop/C++/Hw3/Hw3_dynamic_array_with_tests/build/tests/test_my_library[1]_tests.cmake")
else()
  add_test(test_my_library_NOT_BUILT test_my_library_NOT_BUILT)
endif()
