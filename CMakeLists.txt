#cmake_minimum_required(VERSION 3.3)
project(SimpleHexRiskGame)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS_RELEASE} -std=c99")

set(SOURCE_FILES
    src/board.c
    src/board.h
    src/defs.h
    src/graphic.c
    src/graphic.h
    src/input.c
    src/input.h
    src/main.c
    src/main.h
    src/player.c
    src/player.h
    src/utility.c
    src/utility.h src/game.c src/game.h src/battle.c src/battle.h src/ai.c src/ai.h src/generator.c src/generator.h)

add_executable(SimpleHexRiskGame ${SOURCE_FILES})
target_link_libraries(SimpleHexRiskGame -lSDL2 -lSDL2_gfx -lSDL2_ttf -lm)