cmake_minimum_required (VERSION 3.8)

project ("библиотека geom")

include_directories(.)

add_subdirectory(complex)

add_executable (complex.test
complex.test.cpp

)

target_link_libraries(complex.test complex)










