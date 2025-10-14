# MAIN
file(GLOB MAIN_SOURCES "*.c")
file(GLOB MAIN_HEADERS "*.h")

if(MAIN_SOURCES)
    add_library(main STATIC ${MAIN_SOURCES})
    target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
    message(STATUS "MAIN library configured with sources: ${MAIN_SOURCES}")
else()
    add_library(main INTERFACE)
    target_include_directories(main INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
    message(STATUS "MAIN interface library configured (headers only)")
endif()