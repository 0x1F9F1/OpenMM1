cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

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
add_link_options(/IGNORE:4099 /NODEFAULTLIB:LIBCMT)

set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /DEBUG /OPT:REF")

# This object file does not define any previously undefined public symbols, so it will not be used by any link operation that consumes this library
set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} /IGNORE:4221")

include_directories(src)
add_subdirectory(src)

add_library(OpenMM1 SHARED
    loader/OpenMM1.cpp
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT OpenMM1)

target_link_libraries(OpenMM1 dxguid mem midtown)

set_target_properties(OpenMM1 PROPERTIES
    LINK_FLAGS "/INCREMENTAL:NO"
    OUTPUT_NAME "dinput"
)

if((NOT MM1_GAME_DIRECTORY) AND (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/GameDirectory.txt"))
    file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/GameDirectory.txt" MM1_GAME_DIRECTORY)
endif()

if(MM1_GAME_DIRECTORY)
    set_target_properties(OpenMM1 PROPERTIES
        VS_DEBUGGER_COMMAND "${MM1_GAME_DIRECTORY}/midtown1.exe"
        VS_DEBUGGER_WORKING_DIRECTORY "${MM1_GAME_DIRECTORY}"
    )

    if((NOT MM1_COMMAND_LINE) AND (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/CommandLine.txt"))
        file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/CommandLine.txt" MM1_COMMAND_LINE)
    endif()

    if (MM1_COMMAND_LINE)
        set_target_properties(OpenMM1 PROPERTIES
            VS_DEBUGGER_COMMAND_ARGUMENTS "${MM1_COMMAND_LINE}"
        )
    endif()

    install(TARGETS OpenMM1 RUNTIME DESTINATION ${MM1_GAME_DIRECTORY})
    install(FILES "extra/midtown.map" ${SDL2_BINARIES} ${SDL2_TTF_BINARIES} ${GLEW_BINARIES} DESTINATION ${MM1_GAME_DIRECTORY})
    install(FILES $<TARGET_PDB_FILE:OpenMM1> DESTINATION ${MM1_GAME_DIRECTORY} OPTIONAL)
endif()
