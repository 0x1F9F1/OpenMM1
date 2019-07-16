add_library(agisdl OBJECT
    sdlinit.cpp
    sdlinit.h
    sdlfont.cpp
    sdlfont.h
)

target_link_libraries(agisdl hooking)
