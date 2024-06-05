#include <SFML/Graphics.hpp>
#include "checksquares.cpp"
#include <vector>
#include <thread>
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

struct checkstruct {
    bool xwin = false;
    bool ywin = false;
    bool draw = false;
};

std::vector<shapeinfo> shapes;
int squares[3][3] ;


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
bool thread_wait = true;

void checkclickanddraw(const sf::Vector2i& mouse_position) {
    if(thread_wait) {
        _sleep(150);
        thread_wait = false;
    }
    // if(mouse_position.x > 25 && mouse_position.x < 225 && mouse_position.y > 75 && mouse_position.y < 275 && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
    //     sf::RectangleShape temp;
    //     temp.setPosition(50,100);
    //     temp.setFillColor(sf::Color(0xff,0x00,0x00,0xff));
    //     window.draw(temp);
    //     MessageBoxW(NULL,L"Clicked",L"mouseclick",MB_OK);
    // }
    if (firstsquarecheck(mouse_position) && firstcheck )
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

    if (secondsquarecheck(mouse_position) && secondcheck )
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

    if(thirdsquarecheck(mouse_position) && thirdcheck ) {
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

    if(forthsquarecheck(mouse_position) && forthcheck ) {
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

    if(fifthsquarecheck(mouse_position) && fifthcheck ) {
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
    
    if(sixthsquarecheck(mouse_position) && sixthcheck ) {
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

    if(seventhsquarecheck(mouse_position) && seventhcheck ) {
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

    if(eighthsquarecheck(mouse_position) && eighthchcek ) {
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

    if(ninethsquarecheck(mouse_position) && ninthcheck ) {
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

bool restartbuttoncheck(const sf::Vector2i& mouse_position,const sf::Vector2f& rect_pos, const sf::Vector2f& rect_size) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < rect_pos.x ) {
        inside = false;
    } else if (mouse_position.x > rect_pos.x + rect_size.x) {
        inside = false;
    } else if (mouse_position.y < rect_pos.y) {
        inside = false;
    } else if (mouse_position.y > rect_pos.y + rect_size.y) {
        inside = false;
    } else {
        inside = true;
    }

    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}

bool isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        if (squares[i][j] == 4) {
                return false;    // Empty square found, so board is not full
            }
        }
    }
    return true;
}
//if return 1 = x win; if return 0 = circle win; if return anything else: draw;
int DoesXwinOrCircleWin() {
    
    bool winnerexist = false;
    if(squares[0][0] == 1 && squares[0][1] == 1 && squares[0][2] == 1) {
        winnerexist = true;
        return 1;
    }

    else if(squares[0][0] == 0 && squares[0][1] == 0 && squares[0][2] == 0) {
        winnerexist = true;
        return 0;
    }

    if(squares[1][0] == 1 && squares[1][1] == 1 && squares[1][2] == 1) {
        winnerexist = true;
        return 1;
    }

    if(squares[1][0] == 0 && squares[1][1] == 0 && squares[1][2] == 0) {
        winnerexist = true;
        return 0;
    }

    if(squares[2][0] == 1 && squares[2][1] == 1 && squares[2][2] == 1) {
        winnerexist = true;
        return 1;
    }

    if(squares[2][0] == 0 && squares[2][1] == 0 && squares[2][2] == 0) {
        winnerexist = true;
        return 0;
    }

    if(squares[0][0] == 1 && squares[1][0] == 1 && squares[2][0] == 1) {
        winnerexist = true;
        return 1;
    }

    if(squares[0][0] == 0 && squares[1][0] == 0 && squares[2][0] == 0) {
        winnerexist = true;
        return 0;
    }

    if(squares[0][1] == 1 && squares[1][1] == 1 && squares[2][1] == 1) {
        winnerexist = true;
        return 1;
    }

    if(squares[0][1] == 0 && squares[1][1] == 0 && squares[2][1] == 0) {
        winnerexist = true;
        return 0;
    }

    if(squares[0][2] == 1 && squares[1][2] == 1 && squares[2][2] == 1) {
        winnerexist = true;
        return 1;
    }

    if(squares[0][2] == 0 && squares[1][2] == 0 && squares[2][2] == 0) {
        winnerexist = true;
        return 0;
    }

    /*this is a comment*/

    if(squares[0][0] == 1 && squares[1][1] == 1 && squares[2][2] == 1) {
        winnerexist = true;
        return 1;
    }

    if(squares[0][0] == 0 && squares[1][1] == 0 && squares[2][2] == 0) {
        winnerexist = true;
        return 0;
    }

    if(squares[0][2] == 1 && squares[1][1] == 1 && squares[2][0] == 1) {
        winnerexist = true;
        return 1;
    }

    if(squares[0][2] == 0 && squares[1][1] == 0 && squares[2][0] == 0) {
        winnerexist = true;
        return 0;
    }
    return 2;
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
    bool winnercheck = false;
    int winner = 0;
    sf::Font font;
    bool running = true;
    if(!font.loadFromFile("Pyidaungsu.ttf")) {
        printf("Font loading failed\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            squares[i][j] = 4;
        }
    }
    
    sf::Text text;
    sf::Text text2;
    text.setFont(font);
    text.setFillColor(sf::Color::Yellow);
    text2.setFont(font);
    text2.setFillColor(sf::Color::Yellow);
    auto window = sf::RenderWindow{ { WINDOW_WIDTH, WINDOW_HEIGHT }, L"Tic Tac Toe",sf::Style::Close };
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
                    winnerscreen = false;
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
            
            printf("Currently in gamemode\n");
            window.clear(sf::Color(0x00,0x00,0x00,0xff));
            for (int i = 0; i < 9; ++i) {
                window.draw(rectangels[i]);
            }
            std::thread another_thread(checkclickanddraw,sf::Mouse::getPosition(window));
            another_thread.join();
            checkclickanddraw(sf::Mouse::getPosition(window));
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
            printf("\"%i\", \"%i\", \"%i\"\n", squares[0][0],squares[0][1],squares[0][2]);
            printf("\"%i\", \"%i\", \"%i\"\n", squares[1][0],squares[1][1],squares[1][2]);
            printf("\"%i\", \"%i\", \"%i\"\n", squares[2][0],squares[2][1],squares[2][2]);
            printf("\n");

            int result = DoesXwinOrCircleWin();
            if(isBoardFull()) {
                winnerscreen = true;
                gamemode = false;
                winn = draw;
            }
            if( result == 1) {
                winnerscreen = true;
                gamemode = false;
                winn = x;
            }else if( result == 0){
                winnerscreen = true;
                gamemode = false;
                winn = circle;
            } 
        }

        if(winnerscreen) {
            // printf("currently in winnerscreen\n");cla
            if(winn == winnertags::x) {
                text.setString(L"X win");
                
            } else if(winn == winnertags::circle){
                text.setString(L"O Win");
            } else if(winn == winnertags::draw){
                text.setString(L"Both Draw");
            }
            text2.setString("Restart");
            text2.setCharacterSize(75);
            int text_width = text.getLocalBounds().width;
            int text_height = text.getLocalBounds().height;

            int text2_width = text2.getLocalBounds().width;
            int text2_height = text2.getLocalBounds().height;
            text.setPosition(window.getSize().x / 2 - text_width / 2,50);
            text2.setPosition(window.getSize().x / 2 - text2_width / 2, 250 + text_height);
            sf::RectangleShape restart(sf::Vector2f(text2.getLocalBounds().width, text2.getLocalBounds().height));
            restart.setFillColor(sf::Color::Green);
            restart.setPosition(text2.getPosition().x, text2.getPosition().y + 20);
            restart.setOutlineThickness(3);
            restart.setOutlineColor(sf::Color::Red);

            window.clear();
            window.draw(text);
            window.draw(restart);
            window.draw(text2);

            if (restartbuttoncheck(sf::Mouse::getPosition(window),restart.getPosition(),restart.getSize()))
            {
                gamemode = true;
                winnerscreen = false;
                welcomescreen = false;
                 firstcheck = true;
                secondcheck = true;
                 thirdcheck = true;
                 forthcheck = true;
                 fifthcheck = true;
                 sixthcheck = true;
                 seventhcheck = true;
                 eighthchcek = true;
                 ninthcheck = true;
                 thread_wait = true;
                shapes.clear();
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        squares[i][j] = 4;
                    }
                }
            }
            
        }
        window.display();
    }
}
