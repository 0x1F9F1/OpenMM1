cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(CMAKE_VS_INCLUDE_INSTALL_TO_DEFAULT_BUILD 1)

set(CMAKE_DISABLE_SOURCE_CHANGES ON)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(OpenMM1 CXX)

option(MM1_GAME_DIRECTORY "MM1 Game Directory")
option(MM1_COMMAND_LINE "MM1 Command Line")

add_compile_options(/MP /arch:SSE2)

add_subdirectory(vendor EXCLUDE_FROM_ALL)

add_compile_options(/W4)

set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /DEBUG /OPT:REF")

# This object file does not define any previously undefined public symbols, so it will not be used by any link operation that consumes this library
set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} /IGNORE:4221")

include_directories(src)
add_subdirectory(src)

add_library(${PROJECT_NAME} SHARED
    loader/OpenMM1.cpp
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} dxguid mem midtown)

set_target_properties(${PROJECT_NAME} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
    LINK_FLAGS "/INCREMENTAL:NO"
    OUTPUT_NAME "dinput"
)

if((NOT MM1_GAME_DIRECTORY) AND (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/GameDirectory.txt"))
    file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/GameDirectory.txt" MM1_GAME_DIRECTORY)
endif()

if(MM1_GAME_DIRECTORY)
    set_target_properties(${PROJECT_NAME} PROPERTIES
        VS_DEBUGGER_COMMAND "${MM1_GAME_DIRECTORY}/midtown.exe"
        VS_DEBUGGER_WORKING_DIRECTORY "${MM1_GAME_DIRECTORY}"
    )

    if((NOT MM1_COMMAND_LINE) AND (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/CommandLine.txt"))
        file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/CommandLine.txt" MM1_COMMAND_LINE)
    endif()

    if (MM1_COMMAND_LINE)
        set_target_properties(${PROJECT_NAME} PROPERTIES
            VS_DEBUGGER_COMMAND_ARGUMENTS "${MM1_COMMAND_LINE}"
        )
    endif()

    install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${MM1_GAME_DIRECTORY})
    install(FILES "extra/midtown.map" DESTINATION ${MM1_GAME_DIRECTORY})
    install(FILES $<TARGET_PDB_FILE:${PROJECT_NAME}> DESTINATION ${MM1_GAME_DIRECTORY} OPTIONAL)
endif()
