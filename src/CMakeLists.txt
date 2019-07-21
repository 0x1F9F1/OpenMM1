cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake/CMakePCHCompiler)

project(Midtown CXX CXXPCH)

if (USE_SDL2)
    include_directories(${GLEW_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})
endif()

add_library(midtown STATIC
    midtown.cpp
    midtown.h

    hooking.cpp
    hooking.h
)

target_link_libraries(midtown mem)
target_precompiled_header(midtown pch.h)

set(ARTS_COMPONENTS)

macro(arts_add_component name)
    add_library(${name} OBJECT ${ARGN})
    target_link_libraries(${name} mem)
    list(APPEND ARTS_COMPONENTS ${name})
    set(ARTS_COMPONENTS ${ARTS_COMPONENTS} PARENT_SCOPE)
endmacro(arts_add_component)

add_subdirectory(agi)
add_subdirectory(agid3d)
add_subdirectory(agisw)
# add_subdirectory(agiworld)
add_subdirectory(arts7)
add_subdirectory(data7)
add_subdirectory(dyna7)
# add_subdirectory(eventq7)
add_subdirectory(localize)
add_subdirectory(memory)
# add_subdirectory(mmai)
# add_subdirectory(mmanim)
# add_subdirectory(mmaudio)
# add_subdirectory(mmbangers)
# add_subdirectory(mmcamcs)
# add_subdirectory(mmcar)
# add_subdirectory(mmcity)
# add_subdirectory(mmcityinfo)
# add_subdirectory(mmdjpeg)
# add_subdirectory(mmdyna)
add_subdirectory(mmeffects)
# add_subdirectory(mmgame)
# add_subdirectory(mminput)
# add_subdirectory(mmnetwork)
# add_subdirectory(mmphysics)
# add_subdirectory(mmui)
# add_subdirectory(mmwidget)
add_subdirectory(pcwindis)
add_subdirectory(stream)
add_subdirectory(vector7)

if (USE_SDL2)
    add_subdirectory(agigl)
    add_subdirectory(agisdl)
endif()

target_link_libraries(midtown ${ARTS_COMPONENTS})
target_precompiled_header(${ARTS_COMPONENTS} pch.h REUSE midtown)

if (USE_SDL2)
    target_link_libraries(midtown
        opengl32
        glu32
        ${SDL2_LIBRARIES}
        ${SDL2_TTF_LIBRARIES}
        ${GLEW_LIBRARIES})
endif()
