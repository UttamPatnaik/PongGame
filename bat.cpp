#include "bat.h"

Bat::Bat(float startX, float startY)
{
    m_position.x = startX;
    m_position.y = startY;
    m_shape.setSize(Vector2f(120, 12));
    m_shape.setPosition(m_position);
    m_shape.setFillColor(Color(0, 200, 255));
}
FloatRect Bat::getPosition()
{
    return m_shape.getGlobalBounds();
}
RectangleShape Bat::getShape()
{
    return m_shape;
}
void Bat::moveLeft()
{
    m_isMovingLeft = true;
}
void Bat::moveRight()
{
    m_isMovingRight = true;
}
void Bat::stopLeft()
{
    m_isMovingLeft = false;
}
void Bat::stopRight()
{
    m_isMovingRight = false;
}
void Bat::update(Time dt)
{
    if (m_isMovingLeft)
        if(m_position.x > 0)
            m_position.x -= m_speed * dt.asSeconds();
    if (m_isMovingRight)
        if(m_position.x < 910)
            m_position.x += m_speed * dt.asSeconds();
    m_shape.setPosition(m_position);
}           
