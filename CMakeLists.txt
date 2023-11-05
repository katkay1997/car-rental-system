cmake_minimum_required(VERSION 3.0)

project(CarRentalSystem
        VERSION 1.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wpedantic -Wconversion")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lpthread")

# add_library(libuuid uuid/uuid.h)

add_executable(CarRentalSystem
        src/index.cpp)

target_include_directories(CarRentalSystem
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/CarRentalSystem)
target_include_directories(CarRentalSystem
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# target_link_libraries(CarRentalSystem PRIVATE libuuid)
