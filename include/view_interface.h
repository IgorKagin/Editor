#pragma once
#include <string>

namespace View 
{
  struct IGUI
  {
    virtual void print( const std::string& ) = 0;
  };
}
