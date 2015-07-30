cmake_minimum_required(VERSION 2.8)

project(travis-sandbox)

find_package(Threads REQUIRED)
find_package(Boost REQUIRED COMPONENTS
    system)

add_definitions(-DBOOST_ASIO_HAS_GETADDRINFO=1) 

include_directories(${Boost_INCLUDE_DIRS})

add_executable(resolver 
    main.cpp)

target_link_libraries(resolver
    ${Boost_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT})

