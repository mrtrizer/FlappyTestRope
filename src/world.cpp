#include <cstdlib>

#include "world.h"
#include "ctrl.h"
#include "bird.h"

World::World() {
    srand48(std::time(0));
}

void World::recalc(GObj::DeltaT, const GContext & gContext) {

}

void World::init() {
    bird = getRoot()->ADD_CHILD(Bird,POS(0,0,1));
    getRoot()->ADD_CHILD(GPresenterSprite,"background",200,200,POS(-100,-100,0));
    setActiveCamera(getRoot()->ADD_CHILD(GObjCamera,100,1.0,500,POS(0,0,0)));
}
