#include <SFML/Graphics.hpp>
using namespace sf;
class Bat
{
private:
    RectangleShape m_shape;
    Vector2f m_position;
    float m_speed = 600.f;
    bool m_isMovingLeft = false;
    bool m_isMovingRight = false;
public:
    Bat(float startX, float startY);
    FloatRect getPosition();
    RectangleShape getShape();
};
