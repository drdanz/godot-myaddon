project(myaddon)

set(SOURCES src/movement.cpp
            src/movement.h
            src/register_types.cpp
            src/register_types.h)

add_library(myaddon MODULE ${SOURCES})
target_link_libraries(myaddon PUBLIC godot::cpp)
