if(EXISTS "/home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/tests/test_some_library[1]_tests.cmake")
  include("/home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/tests/test_some_library[1]_tests.cmake")
else()
  add_test(test_some_library_NOT_BUILT test_some_library_NOT_BUILT)
endif()
