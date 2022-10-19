project(simple_project)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB date.cpp factorial.cpp fibonacci.cpp)

add_library(foo STATIC ${SOURCE_LIB})
add_executable(main ${SOURCE_EXE})

target_link_libraries(main foo)
