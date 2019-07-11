add_library(mmdyna OBJECT
    # bndtmpl.cpp
    # bndtmpl.h
    # bndtmpl2.cpp
    # bndtmpl2.h
    # isect.cpp
    # isect.h
    # poly.cpp
    # poly.h
)

target_link_libraries(mmdyna hooking)
