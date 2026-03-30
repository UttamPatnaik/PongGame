#include<SFML/Graphics.hpp>
#include "Ball.cpp"
#include "Bat.cpp"
#include<sstream>

using namespace sf;

int main()
{
    VideoMode vm(960,540);
    RenderWindow window(vm,"Pong Game");

    int score = 0;
    int lives = 3;
    bool gameOver = false;

    Bat bat(960/2,540-20);
    bool coli = false;

    Ball ball(960/2,0);

    Clock clock;

    Text hud;
    Font font;
    font.loadFromFile("font/KOMIKAP_.ttf");
    hud.setFont(font);
    hud.setCharacterSize(30);
    hud.setFillColor(Color::Yellow);
    hud.setPosition(20,20);

    while(window.isOpen())
    {
        Event event1;
        while (window.pollEvent(event1))
        {
            if (event1.type == Event::Closed)
            {
                window.close();
            }
        }

        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::Left))
        {
            bat.moveLeft();
        }
        else
        {
            bat.stopLeft();
        }

        if (Keyboard::isKeyPressed(Keyboard::Right))
        {
            bat.moveRight();
        }
        else
        {
            bat.stopRight();
        } 

        Time dt = clock.restart();

        if(!gameOver)
        {
            bat.update(dt);
            ball.update(dt);
        }

        std::stringstream ss;

        if(!gameOver)
        {
            ss << "Score " << score << " Lives " << lives;
        }
        else
        {
            ss << "GAME OVER - Press Enter";
        }

        hud.setString(ss.str());

        if(gameOver && Keyboard::isKeyPressed(Keyboard::Enter))
        {
            score = 0;
            lives = 3;
            gameOver = false;
            ball.reboundBottom();
        }

        if(ball.getPosition().left < 0 || 
           ball.getPosition().left + ball.getPosition().width > window.getSize().x)
        {
            ball.reboundSides();
        }

        if(ball.getPosition().top < 0)
        {
            coli = false;
            ball.reboundBatOrTop();
        }

        if(ball.getPosition().top > window.getSize().y)
        {
            ball.reboundBottom();
            lives--;

            if(lives < 1)
            {
                gameOver = true;
            }
        }

        if(ball.getPosition().intersects(bat.getPosition()) && coli == false)
        {
            ball.reboundBatOrTop();
            score++;
            coli = true;
        }

        window.clear(Color(80, 134, 33));
        window.draw(hud);
        window.draw(bat.getShape());
        window.draw(ball.getShape());

        window.display();
    }

    return 0;
}