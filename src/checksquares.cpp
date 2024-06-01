#pragma once
#include <SFML/Graphics.hpp>
bool firstsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 25 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 200) {
        inside = false;
    } else if (mouse_position.y < 75) {
        inside = false;
    } else if (mouse_position.y > 75 + 200) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}

bool secondsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 225 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 400) {
        inside = false;
    } else if (mouse_position.y < 75) {
        inside = false;
    } else if (mouse_position.y > 75 + 200) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}

bool thirdsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 425 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 600) {
        inside = false;
    } else if (mouse_position.y < 75) {
        inside = false;
    } else if (mouse_position.y > 75 + 200) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}

bool forthsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 25 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 200) {
        inside = false;
    } else if (mouse_position.y < 75 + 200) {
        inside = false;
    } else if (mouse_position.y > 75 + 400) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}

bool fifthsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 225 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 400) {
        inside = false;
    } else if (mouse_position.y < 75 + 200) {
        inside = false;
    } else if (mouse_position.y > 75 + 400) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}


bool sixthsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 425 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 600) {
        inside = false;
    } else if (mouse_position.y < 75 + 200) {
        inside = false;
    } else if (mouse_position.y > 75 + 400) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}


bool seventhsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 25 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 200) {
        inside = false;
    } else if (mouse_position.y < 75 + 400) {
        inside = false;
    } else if (mouse_position.y > 75 + 600) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}

bool eighthsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 225 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 400) {
        inside = false;
    } else if (mouse_position.y < 75 + 400) {
        inside = false;
    } else if (mouse_position.y > 75 + 600) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}

bool ninethsquarecheck(const sf::Vector2i& mouse_position) {
    bool inside = true;
    bool click = false;
    // printf("mouse_x: %i, mouse_y: %i\n",mouse_position.x, mouse_position.y);
    if (mouse_position.x < 425 ) {
        inside = false;
    } else if (mouse_position.x > 25 + 600) {
        inside = false;
    } else if (mouse_position.y < 75 + 400) {
        inside = false;
    } else if (mouse_position.y > 75 + 600) {
        inside = false;
    } else {
        inside = true;
    }
    if(inside == true && sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
        click = true;
    }
    return click;
}
