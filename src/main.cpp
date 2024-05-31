#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <Windows.h>
#include "checksquares.cpp"
#include <vector>
#define WINDOW_WIDTH 650


#define WINDOW_HEIGHT 700

enum shapetype {
    CIRCLE,
    CROSS,
    RECTANGLE
};

struct shapeinfo {
    shapetype type;
    float posx;
    float posy;
};

std::vector<shapeinfo> shapes;
int squares[3][3] = { 0 };


//bools
bool firstcheck = true;
bool secondcheck = true;
bool thirdcheck = true;
bool forthcheck = true;
bool fifthcheck = true;
bool sixthcheck = true;
bool seventhcheck = true;
bool eighthchcek = true;
bool ninthcheck = true;

void checkclickanddraw(const sf::Vector2i& mouse_position) {
    // if(mouse_position.x > 25 && mouse_position.x < 225 && mouse_position.y > 75 && mouse_position.y < 275 && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
    //     sf::RectangleShape temp;
    //     temp.setPosition(50,100);
    //     temp.setFillColor(sf::Color(0xff,0x00,0x00,0xff));
    //     window.draw(temp);
    //     MessageBoxW(NULL,L"Clicked",L"mouseclick",MB_OK);
    // }
    if (firstsquarecheck(mouse_position) && firstcheck)
    {
        shapeinfo temp;
        temp.type = RECTANGLE;
        temp.posx = 50;
        temp.posy = 130;
        shapes.push_back(temp);
        firstcheck = false;
    }

    if (secondsquarecheck(mouse_position))
    {
        MessageBoxW(NULL, L"Clicked2", L"mouseclick2",MB_OK);
    }

    if(forthsquarecheck(mouse_position)) {
        MessageBoxW(NULL, L"Clicked4", L"mouseclick4",MB_OK);
    }
    
}

void testfunction(sf::RenderWindow& window) {
    sf::RectangleShape temp;
        temp.setPosition(50,100);
        temp.setFillColor(sf::Color(0xff,0x00,0x00,0xff));
        window.draw(temp);
}

bool checkwincondition() {
    return true;
}

bool checktostartgame() {
    return true;
}

int main()
{
    bool welcomescreen = true;
    bool gamemode = false;
    bool winnerscreen = false;
    int winner = 0;
    sf::Font font;
    bool running = true;
    if(!font.loadFromFile("Pyidaungsu.ttf")) {
        printf("Font loading failed\n");
    }
    
    sf::Text text;
    sf::Text text2;
    text.setFont(font);
    text.setFillColor(sf::Color::Yellow);
    text2.setFont(font);
    text2.setFillColor(sf::Color::Yellow);
    auto window = sf::RenderWindow{ { WINDOW_WIDTH, WINDOW_HEIGHT }, "CMake SFML Project",sf::Style::Close };
    window.setFramerateLimit(144);
    window.setPosition(sf::Vector2i(1366/2 - WINDOW_WIDTH/2 ,0));
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
    

    for(int i = 0; i < 3; i++) {
        rectangels[i].setPosition(25 + i * 200, 75);
        rectangels[i].setOutlineThickness(5);
        rectangels[i].setOutlineColor(sf::Color::Green);
        rectangels[i].setFillColor(sf::Color::Black);
    }

    for(int i = 0, j = 3; i < 3; i++,j++) {
        rectangels[j].setPosition(25 + i * 200, 275);
        rectangels[j].setOutlineThickness(5);
        rectangels[j].setOutlineColor(sf::Color::Green);
        rectangels[j].setFillColor(sf::Color::Black);
    }

    for(int i = 0, j = 6; i < 3; i++,j++) {
        rectangels[j].setPosition(25 + i * 200, 475);
        rectangels[j].setOutlineThickness(5);
        rectangels[j].setOutlineColor(sf::Color::Green);
        rectangels[j].setFillColor(sf::Color::Black);
    }

    
    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if(event.type == sf::Event::KeyPressed) {
                if(event.key.code == sf::Keyboard::Escape) {
                    window.close();

                }
                if(event.key.code == sf::Keyboard::S) {
                    gamemode = true;
                    welcomescreen = false;
                }
            }
        }

        window.clear();
        if(welcomescreen) {
            text.setString(L"TicTacToe");
            text2.setString("Press S to play");
            text.setCharacterSize(100);
            text2.setCharacterSize(100);
            text.setOutlineThickness(5);
            text.setOutlineColor(sf::Color::Red);
            text2.setOutlineThickness(5);

            int text_width = text.getLocalBounds().width;
            int text_height = text.getLocalBounds().height;

            int text2_width = text2.getLocalBounds().width;
            int text2_height = text2.getLocalBounds().height;

            text.setPosition(window.getSize().x / 2 - text_width / 2,50);
            text2.setPosition(window.getSize().x / 2 - text2_width / 2, 250 + text_height);
            window.draw(text);
            window.draw(text2);

        }
        if(gamemode) {
            for (int i = 0; i < 9; ++i) {
                window.draw(rectangels[i]);
            }
            testfunction(window);
            checkclickanddraw(sf::Mouse::getPosition(window));
            for(auto& e : shapes) {
                if (e.type == RECTANGLE)
                {
                    sf::RectangleShape shape(sf::Vector2f(100,100));
                    shape.setPosition(e.posx,e.posy);
                    window.draw(shape);
                    
                }
                
            }
        }
        window.display();
    }
}
