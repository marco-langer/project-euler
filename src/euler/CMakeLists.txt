find_package(Microsoft.GSL CONFIG REQUIRED)

add_library(euler STATIC
    include/euler/0001.hpp
    include/euler/0002.hpp
    include/euler/0003.hpp
    include/euler/0007.hpp
    include/euler/0010.hpp
    include/euler/0025.hpp
    include/euler/0035.hpp
    include/euler/0885.hpp
    src/0001.cpp
    src/0002.cpp
    src/0003.cpp
    src/0007.cpp
    src/0010.cpp
    src/0025.cpp
    src/0035.cpp
    src/0885.cpp
)

set_target_properties(euler PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

target_include_directories(euler PUBLIC include)

target_link_libraries(euler PRIVATE euler-utils Microsoft.GSL::GSL)
