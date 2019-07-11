add_library(mmphysics OBJECT
    # aero.cpp
    # aero.h
    # bound.cpp
    # bound.h
    # inertia.cpp
    # inertia.h
    # joint3dof.cpp
    # joint3dof.h
    # osample.cpp
    # osample.h
    # phys.cpp
    # phys.h
)

target_link_libraries(mmphysics hooking)
