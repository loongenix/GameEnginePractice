#pragma once
#include "../Interface/IApplication.hpp"

namespace Engine {
class BaseApplication : implements IApplication {
 private:
  /* data */
 public:
  virtual int Initialize();
  virtual void Finalize();
  virtual void Tick();
  virtual bool IsQuit();

 protected:
  bool m_bQuit;
};

}  // namespace Engine