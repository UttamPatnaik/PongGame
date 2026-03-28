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