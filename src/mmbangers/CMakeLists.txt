add_library(mmbangers OBJECT
    active.cpp
    active.h
    banger.cpp
    banger.h
    data.cpp
    data.h
    dof.cpp
    dof.h
)

target_link_libraries(mmbangers hooking)
