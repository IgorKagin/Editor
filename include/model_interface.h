#pragma once

namespace Model 
{
  struct IDocsCore
  {
    //
    virtual void importDoc() = 0;
    //
    virtual void createDoc() = 0;
    //
    virtual void exportDoc() = 0;
  };

  struct IWidgetCore
  {
    //
    virtual void createWidget() = 0;
    //
    virtual void deleteWidet() = 0;
  };
}
