#pragma once
#include "view_interface.h"

namespace View
{
  class GUI:public IGUI
  {
  public:
    void print(const std::string&) override;

  };
}
