
add_library( base )

target_sources( base
  PRIVATE
	gui/Distance.cpp gui/Position.cpp gui/Rond.cpp gui/Rectangle.cpp gui/Ligne.cpp gui/Fleche.cpp
)

target_sources( base
  PRIVATE
    module2/module2_fichier1.cpp
)

target_sources( base
  PRIVATE
    resources/resource.qrc
)

# target_include_directories( base . FenetrePrincipale module2 )
target_include_directories( base
  PUBLIC "." )

target_link_libraries( base PUBLIC Qt5::Widgets )

add_executable( ${PROJECT_NAME}
                main.cpp )

target_link_libraries( ${PROJECT_NAME} PRIVATE base Qt5::Widgets Qt5::Core )
