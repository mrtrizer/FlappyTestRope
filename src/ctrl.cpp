#include "ctrl.h"
#include "core/gviewfactory.h"

/// World initialization
/// @see setWorld()
void Ctrl::init() {
    setWorld(std::make_shared<World>());
}
