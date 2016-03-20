#ifndef FLAPPYWORLD_H
#define FLAPPYWORLD_H

#include "core/gworldmodel.h"
#include "core/gobjcamera.h"
#include "bird.h"

class Ctrl;
class Score;

class World: public GWorldModel
{
public:
    World();

protected:
    void recalc(GObj::DeltaT, const GContext &) override;
    virtual void init() override;

private:
    std::shared_ptr<Bird> bird;
};

#endif // FLAPPYWORLD_H
