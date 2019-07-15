add_library(agigl OBJECT
    glpipe.cpp
    glpipe.h
    glrsys.cpp
    glrsys.h
    glview.cpp
    glview.h
    glbitmap.cpp
    glbitmap.h
    gltexdef.cpp
    gltexdef.h
)

target_link_libraries(agigl hooking)
