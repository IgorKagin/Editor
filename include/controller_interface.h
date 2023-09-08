#pragma once

namespace Controller 
{
  struct IDocsManager
  {
    virtual void buttonCreateDoc() = 0;
    virtual void buttonExportDoc() = 0;
    virtual void buttonImportDoc() = 0;
  };

  struct IWidgetManager
  {
    virtual void buttonCreateWidget() = 0;
    virtual void buttonDeleteWidet() = 0;
  };
}
