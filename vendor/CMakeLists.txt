add_subdirectory(mem)
add_subdirectory(lua)

set(SDL2_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/sdl2/include" CACHE PATH "")
set(SDL2_LIBRARIES "${CMAKE_CURRENT_LIST_DIR}/sdl2/lib/SDL2.lib;${CMAKE_CURRENT_LIST_DIR}/sdl2/lib/SDL2main.lib" CACHE PATH "")
set(SDL2_BINARIES "${CMAKE_CURRENT_LIST_DIR}/sdl2/lib/SDL2.dll" CACHE PATH "")

set(GLEW_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/glew/include" CACHE PATH "")
set(GLEW_LIBRARIES "${CMAKE_CURRENT_LIST_DIR}/glew/lib/glew32.lib" CACHE PATH "")
set(GLEW_BINARIES "${CMAKE_CURRENT_LIST_DIR}/glew/lib/glew32.dll" CACHE PATH "")

set(SDL2_TTF_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/sdl2_ttf/include" CACHE PATH "")
set(SDL2_TTF_LIBRARIES "${CMAKE_CURRENT_LIST_DIR}/sdl2_ttf/lib/SDL2_ttf.lib" CACHE PATH "")
set(SDL2_TTF_BINARIES "${CMAKE_CURRENT_LIST_DIR}/sdl2_ttf/lib/SDL2_ttf.dll;${CMAKE_CURRENT_LIST_DIR}/sdl2_ttf/lib/zlib1.dll;${CMAKE_CURRENT_LIST_DIR}/sdl2_ttf/lib/libfreetype-6.dll" CACHE PATH "")
