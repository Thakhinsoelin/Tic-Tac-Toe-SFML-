#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include "checksquares.cpp"
#include <SFML/Window/WindowStyle.hpp>
#include <vector>
#include <iostream>
#define WINDOW_WIDTH 650


#define WINDOW_HEIGHT 700
bool cross = true;
enum shapetype {
    CIRCLE,
    CROSS,
    RECTANGLE
};

enum winnertags {
    x,
    circle,
    draw
};

// struct boundings{
//     float x;
//     float y;
//     float rightmostx;
//     float rightmosty;
// };

struct shapeinfo {
    shapetype type;
    float startposx;
    float startposy;
    float endposx = 0;
    float endposy = 0;

};

std::vector<shapeinfo> shapes;
int squares[3][3] = { {3,3,3}, {3,3,3}, {3,3,3} };


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

void checkclickanddraw(const sf::Vector2i& mouse_position,bool screen_check) {
    // if(mouse_position.x > 25 && mouse_position.x < 225 && mouse_position.y > 75 && mouse_position.y < 275 && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
    //     sf::RectangleShape temp;
    //     temp.setPosition(50,100);
    //     temp.setFillColor(sf::Color(0xff,0x00,0x00,0xff));
    //     window.draw(temp);
    //     MessageBoxW(NULL,L"Clicked",L"mouseclick",MB_OK);
    // }
    if (firstsquarecheck(mouse_position) && firstcheck && screen_check)
    {
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 35;
            temp.startposy = 85;
            temp.endposx = 210;
            temp.endposy = 260;
            shapes.push_back(temp);
            squares[0][0] = 1;
            firstcheck = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 35;
            temp.startposy = 85;
            shapes.push_back(temp);
            squares[0][0] = 0;
            firstcheck = false;
            cross = true;
        }
    }

    if (secondsquarecheck(mouse_position) && secondcheck && screen_check)
    {
       // MessageBoxW(NULL, L"Clicked2", L"mouseclick2",MB_OK);
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 235;
            temp.startposy = 85;
            temp.endposx = 410;
            temp.endposy = 260;
            shapes.push_back(temp);
            squares[0][1] = 1;
            secondcheck = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 235;
            temp.startposy = 85;
            shapes.push_back(temp);
            squares[0][1] = 0;
            secondcheck = false;
            cross = true;
        }
    }

    if(thirdsquarecheck(mouse_position) && thirdcheck && screen_check) {
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 435;
            temp.startposy = 85;
            temp.endposx = 610;
            temp.endposy = 260;
            shapes.push_back(temp);
            squares[0][2] = 1;
            thirdcheck = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 435;
            temp.startposy = 85;
            shapes.push_back(temp);
            squares[0][2] = 0;
            thirdcheck = false;
            cross = true;
        }
    }

    if(forthsquarecheck(mouse_position) && forthcheck && screen_check) {
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 35;
            temp.startposy = 285;
            temp.endposx = 210;
            temp.endposy = 460;
            shapes.push_back(temp);
            squares[1][0] = 1;
            forthcheck = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 35;
            temp.startposy = 285;
            shapes.push_back(temp);
            squares[1][0] = 0;
            forthcheck = false;
            cross = true;
        }
    }

    if(fifthsquarecheck(mouse_position) && fifthcheck && screen_check) {
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 235;
            temp.startposy = 285;
            temp.endposx = 410;
            temp.endposy = 460;
            shapes.push_back(temp);
            squares[1][1] = 1;
            fifthcheck = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 235;
            temp.startposy = 285;
            shapes.push_back(temp);
            squares[1][1] = 0;
            fifthcheck = false;
            cross = true;
        }
    }
    
    if(sixthsquarecheck(mouse_position) && sixthcheck && screen_check) {
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 435;
            temp.startposy = 285;
            temp.endposx = 610;
            temp.endposy = 460;
            shapes.push_back(temp);
            squares[1][2] = 1;
            sixthcheck = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 435;
            temp.startposy = 285;
            shapes.push_back(temp);
            squares[1][2] = 0;
            sixthcheck = false;
            cross = true;
        }
    }

    if(seventhsquarecheck(mouse_position) && seventhcheck && screen_check) {
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 35;
            temp.startposy = 485;
            temp.endposx = 210;
            temp.endposy = 660;
            shapes.push_back(temp);
            squares[2][0] = 1;
            seventhcheck = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 35;
            temp.startposy = 485;
            shapes.push_back(temp);
            squares[2][0] = 0;
            seventhcheck = false;
            cross = true;
        }
    }

    if(eighthsquarecheck(mouse_position) && eighthchcek && screen_check) {
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 235;
            temp.startposy = 485;
            temp.endposx = 410;
            temp.endposy = 660;
            shapes.push_back(temp);
            squares[2][1] = 1;
            eighthchcek = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 235;
            temp.startposy = 485;
            shapes.push_back(temp);
            squares[2][1] = 0;
            eighthchcek = false;
            cross = true;
        }
    }

    if(ninethsquarecheck(mouse_position) && ninthcheck && screen_check) {
        if(cross) {
            shapeinfo temp;
            temp.type = CROSS;
            temp.startposx = 435;
            temp.startposy = 485;
            temp.endposx = 610;
            temp.endposy = 660;
            shapes.push_back(temp);
            squares[2][2] = 1;
            ninthcheck = false;
            cross = false;
        } else {
            shapeinfo temp;
            temp.type = CIRCLE;
            temp.startposx = 435;
            temp.startposy = 485;
            shapes.push_back(temp);
            squares[2][2] = 0;
            ninthcheck = false;
            cross = true;
        }
    }
}

//if return 1 = x win; if return 0 = circle win; if return anything else: draw;
int DoesXwinOrCircleWin() {
    if(squares[0][0] == 1 && squares[0][1] == 1 && squares[0][2] == 1) {
        return 1;
    }

    if(squares[0][0] == 0 && squares[0][1] == 0 && squares[0][2] == 0) {
        return 0;
    }

    if(squares[1][0] == 1 && squares[1][1] == 1 && squares[1][2] == 1) {
        return 1;
    }

    if(squares[1][0] == 0 && squares[1][1] == 0 && squares[1][2] == 0) {
        return 0;
    }

    if(squares[2][0] == 1 && squares[2][1] == 1 && squares[2][2] == 1) {
        return 1;
    }

    if(squares[2][0] == 0 && squares[2][1] == 0 && squares[2][2] == 0) {
        return 0;
    }

    if(squares[0][0] == 1 && squares[1][0] == 1 && squares[2][0] == 1) {
        return 1;
    }

    if(squares[0][0] == 0 && squares[1][0] == 0 && squares[2][0] == 0) {
        return 0;
    }

    if(squares[0][1] == 1 && squares[1][1] == 1 && squares[2][1] == 1) {
        return 1;
    }

    if(squares[0][1] == 0 && squares[1][1] == 0 && squares[2][1] == 0) {
        return 0;
    }

    if(squares[0][2] == 1 && squares[1][2] == 1 && squares[2][2] == 1) {
        return 1;
    }

    if(squares[0][2] == 0 && squares[1][2] == 0 && squares[2][2] == 0) {
        return 0;
    }

    if(squares[0][0] == 1 && squares[1][1] == 1 && squares[2][2] == 1) {
        return 1;
    }

    if(squares[0][0] == 0 && squares[1][1] == 0 && squares[2][2] == 0) {
        return 0;
    }

    if(squares[0][2] == 1 && squares[1][1] == 1 && squares[2][0] == 1) {
        return 1;
    }

    if(squares[0][2] == 0 && squares[1][1] == 0 && squares[2][0] == 0) {
        return 0;
    }

    if (squares[0][0] != 3 && squares[0][1] != 3 && squares[0][2] != 3 &&
        squares[1][0] != 3 && squares[1][1] != 3 && squares[1][2] != 3 &&
        squares[2][0] != 3 && squares[2][1] != 3 && squares[2][2] != 3) {
        return 2;
    }

    bool boardIsFull = true; // Assume it's full until we find an empty spot
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (squares[i][j] == 3) { // If we find a '3', it means the cell is empty
                boardIsFull = false; // The board is NOT full
                break; // No need to check further in this row
            }
        }
        if (!boardIsFull) {
            break; // No need to check further rows if an empty cell was found
        }
    }
    std::cout << std::boolalpha;
    std::cout << "is board full: " << boardIsFull << "\n";

    //// After checking all cells:
    //if (boardIsFull) {
    //    // If boardIsFull is true, and we've already checked for wins (and found none),
    //    // then it must be a draw.
    //    return 2; // Using anything except 1 or 0 for draw.
    //}
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
    auto window = sf::RenderWindow{ { WINDOW_WIDTH, WINDOW_HEIGHT }, "တစ်တက်တိုး",sf::Style::Close };
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

    int winn = winnertags::x;
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

        window.clear(sf::Color(25,25,25,255));
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
            checkclickanddraw(sf::Mouse::getPosition(window), gamemode);
            for(auto& e : shapes) {
                
                if(e.type == CROSS) {
                    sf::VertexArray line(sf::Lines, 4);

                    line[0].position = sf::Vector2f(e.startposx, e.startposy);  // Starting point
                    line[0].color = sf::Color::Green;

                    line[1].position = sf::Vector2f(e.endposx, e.endposy);  // Ending point
                    line[1].color = sf::Color::Green;

                    line[2].position = sf::Vector2f(e.startposx + 200 - 25, e.startposy );  // Starting point
                    line[2].color = sf::Color::Green;

                    line[3].position = sf::Vector2f( e.startposx , e.endposy);  // Ending point
                    line[3].color = sf::Color::Green;
                    window.draw(line);
                }

                if (e.type == CIRCLE) {
                    sf::CircleShape circle(88.f);
                    circle.setPosition(e.startposx,e.startposy);
                    circle.setFillColor(sf::Color(0x00,0x00,0x00,0xff));
                    circle.setOutlineThickness(4);
                    circle.setOutlineColor(sf::Color(0x00,0xff,0x00,0xff));
                    window.draw(circle);
                }
                
            }
            if( DoesXwinOrCircleWin() == 1) {
                winnerscreen = true;
                gamemode = false;
                winn = x;
            }else if( DoesXwinOrCircleWin() == 0){
                winnerscreen = true;
                gamemode = false;
                winn = circle;
            } else if(DoesXwinOrCircleWin() == 2) {
                winnerscreen = true;
                gamemode = false;
                winn = draw;
            }
        }

        if(winnerscreen) {
            
            if(winn == winnertags::x) {
                text.setString(L"X win");
                
            } else if(winn == winnertags::circle){
                text.setString(L"O Win");
            } else if(winn == winnertags::draw){
                text.setString(L"Both Draw");
            }
            int text_width = text.getLocalBounds().width;
            int text_height = text.getLocalBounds().height;
            text.setPosition(window.getSize().x / 2 - text_width / 2, window.getSize().y / 2 - text_height / 2);
            window.clear();
            window.draw(text);
        }
        window.display();
    }
}
