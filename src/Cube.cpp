#include "Cube.hpp"

Cube::Cube()
{

}

void Cube::Update()
{
    float dt = 1.0f;
    _mRigidbody.UpdateFirstOrder(this, dt);
}