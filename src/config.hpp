#pragma once
#include <SFML/Window.hpp>

namespace conf
{
    // Window config
    sf::Vector2u const WINDOW_SIZE = {1920, 1080};
    sf::Vector2f const fWINDOW_SIZE = static_cast<sf::Vector2f>(WINDOW_SIZE);
    uint32_t MAX_FRAMERATE = 60;
    float const dt = 1.0f / static_cast<float>(MAX_FRAMERATE);
    sf::State const window_state = sf::State::Windowed;
}