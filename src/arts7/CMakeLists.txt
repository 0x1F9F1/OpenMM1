add_library(arts7 OBJECT
    # benchstats.cpp
    # benchstats.h
    # camera.cpp
    # camera.h
    cullable.cpp
    cullable.h
    # cullmgr.cpp
    # cullmgr.h
    # dof.cpp
    # dof.h
    # form.cpp
    # form.h
    # lamp.cpp
    # lamp.h
    # linear.cpp
    # linear.h
    node.cpp
    node.h
    # sim.cpp
    # sim.h
    # view.cpp
    # view.h
)

target_link_libraries(arts7 hooking)
