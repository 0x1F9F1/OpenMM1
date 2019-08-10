cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project(Lua C)

file(GLOB LUA_SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/src/*.c
    ${CMAKE_CURRENT_LIST_DIR}/src/*.h)

list(REMOVE_ITEM LUA_SOURCE_FILES ${CMAKE_CURRENT_LIST_DIR}/src/lua.c)

add_library(lua STATIC
    ${LUA_SOURCE_FILES}
)

target_include_directories(lua PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src)
