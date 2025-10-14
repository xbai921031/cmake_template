# SUB
file(GLOB SUB_SOURCES "*.c")
file(GLOB SUB_HEADERS "*.h")

if(SUB_SOURCES)
    add_library(sub STATIC ${SUB_SOURCES})
    target_include_directories(sub PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
    message(STATUS "SUB library configured with sources: ${SUB_SOURCES}")
else()
    add_library(sub INTERFACE)
    target_include_directories(sub INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
    message(STATUS "SUB interface library configured (headers only)")
endif()