arts_add_component(memory
    allocator.cpp
    allocator.h
    stack.cpp
    stack.h
    stub.cpp
    stub.h
    valloc.cpp
    valloc.h
)

target_link_libraries(memory dbghelp)
