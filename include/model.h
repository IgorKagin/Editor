#pragma once
#include<iostream>
#include "model_interface.h"

namespace Model 
{
  class DocsCore: public IDocsCore
  {
  public:
    //
    void importDoc() override;
    //
    void createDoc() override;
    //
    void exportDoc() override;
  };

  class WidgetCore: public IWidgetCore
  {
  public:

    //
    void createWidget() override;
    //
    void deleteWidet() override;
  };
}
