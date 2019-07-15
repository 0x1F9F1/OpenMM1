cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

add_definitions(-DGLEW_STATIC)
include_directories(${GLEW_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})

add_subdirectory(agi)
add_subdirectory(agid3d)
# add_subdirectory(agisw)
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

add_subdirectory(agigl)

add_library(hooking STATIC
    hooking.cpp
    hooking.h
)

target_link_libraries(hooking mem)

add_library(midtown STATIC
    midtown.cpp
    midtown.h

    $<TARGET_OBJECTS:agi>
    $<TARGET_OBJECTS:agid3d>
    # $<TARGET_OBJECTS:agisw>
    # $<TARGET_OBJECTS:agiworld>
    $<TARGET_OBJECTS:arts7>
    $<TARGET_OBJECTS:data7>
    $<TARGET_OBJECTS:dyna7>
    # $<TARGET_OBJECTS:eventq7>
    $<TARGET_OBJECTS:localize>
    $<TARGET_OBJECTS:memory>
    # $<TARGET_OBJECTS:mmai>
    # $<TARGET_OBJECTS:mmanim>
    # $<TARGET_OBJECTS:mmaudio>
    # $<TARGET_OBJECTS:mmbangers>
    # $<TARGET_OBJECTS:mmcamcs>
    # $<TARGET_OBJECTS:mmcar>
    # $<TARGET_OBJECTS:mmcity>
    # $<TARGET_OBJECTS:mmcityinfo>
    # $<TARGET_OBJECTS:mmdjpeg>
    # $<TARGET_OBJECTS:mmdyna>
    $<TARGET_OBJECTS:mmeffects>
    # $<TARGET_OBJECTS:mmgame>
    # $<TARGET_OBJECTS:mminput>
    # $<TARGET_OBJECTS:mmnetwork>
    # $<TARGET_OBJECTS:mmphysics>
    # $<TARGET_OBJECTS:mmui>
    # $<TARGET_OBJECTS:mmwidget>
    $<TARGET_OBJECTS:pcwindis>
    $<TARGET_OBJECTS:stream>
    $<TARGET_OBJECTS:vector7>

    $<TARGET_OBJECTS:agigl>
)

target_link_libraries(midtown hooking
    opengl32 glu32 ${GLEW_LIBRARIES} ${SDL2_LIBRARIES} ${SDL2_TTF_LIBRARIES})
