add_library(agisw OBJECT
    # swddraw.cpp
    # swddraw.h
    # swemitrunall.cpp
    # swemitrunall.h
    # swpipe.cpp
    # swpipe.h
    # swrend.cpp
    # swrend.h
    # swrsys.cpp
    # swrsys.h
    # swtexdef.cpp
    # swtexdef.h
)

target_link_libraries(agisw hooking)
