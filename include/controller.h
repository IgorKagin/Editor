#pragma once
#include "view.h"
#include "model.h"
#include "controller_interface.h"

using namespace View;
using namespace Model;

namespace Controller
{
  class DocsManager: public IDocsManager
  {
    std::shared_ptr<View::GUI> m_interface;
    std::unique_ptr<Model::DocsCore> m_docCore;

  public:
    DocsManager( std::shared_ptr<View::GUI>& interface, std::unique_ptr<Model::DocsCore>& docCore) :
      m_interface( interface ),
      m_docCore( std::move( docCore ) )
    {}

    void buttonCreateDoc() override;
    void buttonExportDoc() override;
    void buttonImportDoc() override;
  };

  class WidgetManager: public IWidgetManager
  {
    std::shared_ptr<View::GUI> m_interface;
    std::unique_ptr<Model::WidgetCore> m_widgetCore;

  public:
    WidgetManager( std::shared_ptr<View::GUI>& interface, std::unique_ptr<Model::WidgetCore>& widgetCore ) :
      m_interface( interface ),
      m_widgetCore( std::move( widgetCore ) )
    {}

    void buttonCreateWidget() override;
    void buttonDeleteWidet() override;
  };
}
