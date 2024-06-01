#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color(0x00,0x00,0x00,0xff));
        
        sf::VertexArray line(sf::Lines, 10);

        line[0].position = sf::Vector2f(100.f, 50.f);  // Starting point
        line[0].color = sf::Color::Green;

        line[1].position = sf::Vector2f(200.f, 100.f);  // Ending point
        line[1].color = sf::Color::Green;

        line[2].position = sf::Vector2f(101.f, 50.f);
        line[2].color = sf::Color::Green;

        line[3].position = sf::Vector2f(201.f,100.f);
        line[3].color = sf::Color::Green;


        line[4].position = sf::Vector2f(102.f, 50.f);
        line[4].color = sf::Color::Green;

        line[5].position = sf::Vector2f(202.f,100.f);
        line[5].color = sf::Color::Green;

        line[6].position = sf::Vector2f(103.f, 50.f);
        line[6].color = sf::Color::Green;

        line[7].position = sf::Vector2f(203.f,100.f);
        line[7].color = sf::Color::Green;

        line[8].position = sf::Vector2f(104.f, 50.f);
        line[8].color = sf::Color::Green;

        line[9].position = sf::Vector2f(204.f,100.f);
        line[9].color = sf::Color::Green;
        // Draw the line on the window
        window.draw(line);
        window.display();
    }

    return 0;
}