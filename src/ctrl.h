#ifndef FLAPPYCTRL_H
#define FLAPPYCTRL_H

#include <memory>

#include "world.h"
#include "gl/glworldview.h"
#include "core/gworldctrl.h"
#include "core/gcontext.h"

class Ctrl: public GWorldCtrl {
public:
    void init();
};

#endif // FLAPPYCTRL_H
