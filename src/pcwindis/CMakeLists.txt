add_library(pcwindis OBJECT
    dxinit.cpp
    dxinit.h
    dxmovie.cpp
    dxmovie.h
    dxsetup.cpp
    dxsetup.h
    pcwindis.cpp
    pcwindis.h
    setupdata.cpp
    setupdata.h
)

target_link_libraries(pcwindis hooking)
