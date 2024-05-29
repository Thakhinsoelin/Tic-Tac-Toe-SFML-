#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#define WINDOW_WIDTH 650
#define WINDOW_HEIGHT 825
int main()
{
    auto window = sf::RenderWindow{ { WINDOW_WIDTH, WINDOW_HEIGHT }, "CMake SFML Project" };
    window.setFramerateLimit(144);
    window.setPosition(sf::Vector2i(1366/2 - WINDOW_WIDTH/2 ,766/2 - WINDOW_HEIGHT/2));
    // define a 120x50 rectangle
    sf::RectangleShape rectangels[9] = {sf::RectangleShape(sf::Vector2f(200.f,200.f)),
                                        sf::RectangleShape(sf::Vector2f(200.f,200.f)),
                                        sf::RectangleShape(sf::Vector2f(200.f,200.f)),
                                        sf::RectangleShape(sf::Vector2f(200.f,200.f)),
                                        sf::RectangleShape(sf::Vector2f(200.f,200.f)),
                                        sf::RectangleShape(sf::Vector2f(200.f,200.f)),
                                        sf::RectangleShape(sf::Vector2f(200.f,200.f)),
                                        sf::RectangleShape(sf::Vector2f(200.f,200.f)),
                                        sf::RectangleShape(sf::Vector2f(200.f,200.f))};
    for (int i = 0; i < 9; ++i) {
        for(int j = 0; j < 3; ++j) {
            if (i < 3) {
                rectangels[i].setPosition(25 + j * 200, 200);
                rectangels[i].setOutlineThickness(5);
                rectangels[i].setOutlineColor(sf::Color::Green);
                rectangels[i].setFillColor(sf::Color::Black);
            } /*else if( i >= 3 && i < 6 ) {
                rectangels[i].setPosition(25 + j * 200, 400);
                rectangels[i].setOutlineThickness(5);
                rectangels[i].setOutlineColor(sf::Color::Green);
                rectangels[i].setFillColor(sf::Color::Black);
            } else if( i >= 6 && i < 9) {
                rectangels[i].setPosition(25 + j * 200, 600);
                rectangels[i].setOutlineThickness(5);
                rectangels[i].setOutlineColor(sf::Color::Green);
                rectangels[i].setFillColor(sf::Color::Black);
            }*/
        } /*else if( i >= 6 && i < 9) {
            rectangels[i].setPosition(25 + i * 200, 600);
            rectangels[i].setOutlineThickness(5);
            rectangels[i].setOutlineColor(sf::Color::Green);
            rectangels[i].setFillColor(sf::Color::Black);
        }*/
    }
    // sf::RectangleShape rectangle(sf::Vector2f(200.f, 200.f));
    // rectangle.setPosition(sf::Vector2f(WINDOW_WIDTH/2,WINDOW_HEIGHT/2));
    // rectangle.setOutlineThickness(5);
    // rectangle.setOutlineColor(sf::Color(0x00,0xff,0x00,0xff));
    // rectangle.setFillColor(sf::Color::Black);
    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        for (int i = 0; i < 9; ++i) {
            window.draw(rectangels[i]);
        }
        window.display();
    }
}
