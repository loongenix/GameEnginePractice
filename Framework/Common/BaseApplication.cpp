#include "BaseApplication.hpp"

int Engine::BaseApplication::Initialize(){
    m_bQuit=false;
    return 0;
}
// Finalize all sub modules and clean up all runtime temporary files.
void Engine::BaseApplication::Finalize()
{
}


// One cycle of the main loop
void Engine::BaseApplication::Tick()
{
}

bool Engine::BaseApplication::IsQuit()
{
        return m_bQuit;
}