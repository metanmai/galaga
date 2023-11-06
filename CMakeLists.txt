cmake_minimum_required(VERSION 3.26)
project(galaga)

set(CMAKE_CXX_STANDARD 23)

# Set SFML directory
set(SFML_DIR "/opt/homebrew/Cellar/sfml/2.6.0")

include_directories(${SFML_DIR}/include)
link_directories(${SFML_DIR}/lib)

add_executable(galaga main.cpp
        src/Game/Game.cpp
        src/Game/Game.hpp
        src/Player/Player.cpp
        src/Player/Player.hpp
        src/Stars/Stars.cpp
        src/Stars/Stars.hpp
        src/Projectile/Projectile.cpp
        src/Projectile/Projectile.hpp
)

target_link_libraries(galaga sfml-graphics sfml-audio sfml-system sfml-window sfml-network)
