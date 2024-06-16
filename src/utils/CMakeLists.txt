find_package(Microsoft.GSL CONFIG REQUIRED)

add_library(euler-utils STATIC
    include/utils/algorithm.hpp
    include/utils/digits.hpp
    include/utils/fibonacci.hpp
    include/utils/functional.hpp
    include/utils/primes.hpp
    src/digits.cpp
    src/fibonacci.cpp
    src/primes.cpp
)

set_target_properties(euler-utils PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

target_include_directories(euler-utils PUBLIC include)

target_link_libraries(euler-utils PRIVATE Microsoft.GSL::GSL)
