add_library(agigl OBJECT
    glpipe.cpp
    glpipe.h
    glrsys.cpp
    glrsys.h
    glview.cpp
    glview.h
    glbitmap.cpp
    glbitmap.h
)

target_link_libraries(agigl hooking)

target_include_directories(agigl PRIVATE
    ${GLEW_INCLUDE_DIRS})
