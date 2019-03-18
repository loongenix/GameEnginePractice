#pragma once
#include "IRuntimeModule.hpp"
#include "Interface.hpp"

namespace Engine {
class IApplication : implements IRuntimeModule {
 public:
  virtual int Initialize() = 0;
  virtual void Finalize() = 0;
  virtual void Tick() = 0;
  virtual bool IsQuit() = 0;
};
}  // namespace Engine