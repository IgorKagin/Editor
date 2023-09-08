#include "controller.h"

using namespace Controller;


void DocsManager::buttonCreateDoc()
{
  m_docCore->createDoc();
  m_interface->print( "Doc is created" );
}
void DocsManager::buttonExportDoc()
{
  m_docCore->exportDoc();
  m_interface->print( "Export is done" );
}
void DocsManager::buttonImportDoc()
{
  m_docCore->importDoc();
  m_interface->print( "Import is done" );
}
void WidgetManager::buttonCreateWidget()
{
  m_widgetCore->createWidget();
  m_interface->print( "Widget is created" );
}
void WidgetManager::buttonDeleteWidet()
{
  m_widgetCore->deleteWidet();
  m_interface->print( "Widget is deleted" );
}
