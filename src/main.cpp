#include "controller.h"


using namespace Controller;

void GUI::print( const std::string& result )
{
  std::cout << result << std::endl;
}

int main( int argc, char const*argv[] )
{
  std::shared_ptr<View::GUI> GuiPtr = std::make_shared<View::GUI>();
  std::unique_ptr<Model::DocsCore> docPtr = std::make_unique<Model::DocsCore>();
  std::unique_ptr<Model::WidgetCore> widgetPtr = std::make_unique<Model::WidgetCore>();

  DocsManager firstManager( GuiPtr , docPtr );
  WidgetManager secondManager( GuiPtr, widgetPtr );
  //
  firstManager.buttonCreateDoc();
  //
  secondManager.buttonCreateWidget();
  //
  secondManager.buttonDeleteWidet();
  //
  firstManager.buttonExportDoc();
  //
  firstManager.buttonImportDoc();

  return 0;
}
