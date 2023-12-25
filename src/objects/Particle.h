#ifndef PARTICLE_H
#define PARTICLE_H

#include "Vector2D.h"

class Particle
{
    public:
        Particle();
        virtual ~Particle();

        float mass;
        Vector2D position;
        Vector2D velocity;
        Vector2D acceleration;

    protected:

    private:
};

#endif // PARTICLE_H
