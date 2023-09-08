cmake_minimum_required(VERSION 3.0)

set( PROJECT_NAME editor)
set( PROJECT_LANGUAGES CXX )

project( ${PROJECT_NAME} ${PROJECT_LANGUAGES} )


set( SOURCES
  src/model.cpp
  src/controller.cpp
  src/main.cpp
)

set(HEADERS
  include/model.h
  include/controller.h
  include/view.h
  include/view_interface.h
  include/model_interface.h
  include/controller_interface.h
)

add_executable( ${PROJECT_NAME} ${SOURCES} ${HEADERS} )


