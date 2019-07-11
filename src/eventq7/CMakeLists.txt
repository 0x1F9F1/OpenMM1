add_library(eventq7 OBJECT
    # event.cpp
    # event.h
    # eventq.cpp
    # eventq.h
    # geinputLib.cpp
    # geinputLib.h
    # replay.cpp
    # replay.h
    # winevent.cpp
    # winevent.h
)

target_link_libraries(eventq7 hooking)
