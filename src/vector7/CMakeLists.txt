add_library(vector7 OBJECT
    # algmath.cpp
    # algmath.h
    # const.cpp
    # const.h
    # geomath.cpp
    # geomath.h
    # matrix34.cpp
    # matrix34.h
    # matrix44.cpp
    # matrix44.h
    # quat.cpp
    # quat.h
    # randmath.cpp
    # randmath.h
    # random.cpp
    # random.h
    # trigmath.cpp
    # trigmath.h
    vector2.cpp
    vector2.h
    vector3.cpp
    vector3.h
    vector4.cpp
    vector4.h
)

target_link_libraries(vector7 hooking)
