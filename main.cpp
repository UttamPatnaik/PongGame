#include <SFML/Graphics.hpp>
#include "bat.cpp"
using namespace sf;

int main()
{
    VideoMode vm(960, 540);
    RenderWindow window(vm, "Pong Game!!!");
    Bat bat(960 / 2, 540 - 20);
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event)) 
        {
            
            if (event.type == Event::Closed)
                window.close(); 
        }
        window.clear(Color(10, 10, 18));
        window.draw(bat.getShape());
        window.display();
    } 
    return 0;
}