add_library(stream OBJECT
    filestream.cpp
    filestream.h
    fsystem.cpp
    fsystem.h
    # hfsystem.cpp
    # hfsystem.h
    problems.cpp
    problems.h
    sparser.cpp
    sparser.h
    stream.cpp
    stream.h
    token.cpp
    token.h
    # vfsystem.cpp
    # vfsystem.h
    # vstream.cpp
    # vstream.h
)

target_link_libraries(stream hooking)
