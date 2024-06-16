enable_testing()
find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

add_executable(euler-tests
    0001_tests.cpp
    0002_tests.cpp
    0003_tests.cpp
    0007_tests.cpp
    0010_tests.cpp
    0025_tests.cpp
    0035_tests.cpp
    0885_tests.cpp
    utils_tests.cpp
)

set_target_properties(euler-tests PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

target_link_libraries(euler-tests
    PRIVATE
        euler
        euler-utils
        GTest::gmock_main
)

gtest_discover_tests(euler-tests)
