#include <stdio.h>
#include "IApplication.hpp"
using namespace Engine;

namespace Engine {
  extern IApplication *g_pApp;
}  // Engine

int main() {
  int ret;

  if ((ret = g_pApp->Initialize()) != 0) {
    printf("App Initialize failed, will exit now.");
    return ret;
  }
  while (!g_pApp->IsQuit()) {
    g_pApp->Tick();
  }

  g_pApp->Finalize();
  return 0;
}