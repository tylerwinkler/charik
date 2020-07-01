#include "SFML/Graphics/RenderWindow.hpp"

#include "SFML/Window/Event.hpp"

int main(int argc, char* argv[])
{
    sf::RenderWindow window;
    window.create(sf::VideoMode(800, 600, 32), "Charik by Tyler Winkler");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            default:
                break;
            }
        }

        window.clear();
        window.display();
    }
    return 0;
}
