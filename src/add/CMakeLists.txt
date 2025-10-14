# ADD
file(GLOB ADD_SOURCES "*.c")
file(GLOB ADD_HEADERS "*.h")

if(ADD_SOURCES)
    add_library(add STATIC ${ADD_SOURCES})
    target_include_directories(add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
    message(STATUS "ADD library configured with sources: ${ADD_SOURCES}")
else()
    add_library(add INTERFACE)
    target_include_directories(add INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
    message(STATUS "ADD interface library configured (headers only)")
endif()