#include <SFML/Graphics.hpp>
#include "function/homescreen.hpp"

int main() {
    // preload (declare shapes here)
    sf::RenderWindow window(sf::VideoMode({200, 200}), "2D Game Experiment");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {
        // loop to close window after use
        while (const std::optional event = window.pollEvent()) {
            // why tf is there an arrow?!
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear();

        window.draw(shape);
        
        window.display();
    }
}