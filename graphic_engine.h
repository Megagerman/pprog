/**
 * @brief It defines the textual graphic engine interface
 *
 * @file graphic_engine.h
* @author Profesores Álvaro Gutiérrez de Cabiedes
 * @version 2.0
 * @date 12-03-2022
 * @copyright GNU Public License
 */

#ifndef __GRAPHIC_ENGINE__
#define __GRAPHIC_ENGINE__

#include "game.h"

typedef struct _Graphic_engine Graphic_engine;

/**
  * @brief It creates the graphic engine
  * @author Germán López
  *
  * space_create allocates memory for the graphic engine
  * @param none
  * @return the graphic engine
  */
Graphic_engine *graphic_engine_create();

/**
  * @brief It destroys the graphic engine
  * @author Profesores Germán López
  *
  * graphic_engine_destroy frees the previous memory allocation 
  * @param *ge a pointer to the graphic_engine that must be destroyed  
  * @return none
  */
void graphic_engine_destroy(Graphic_engine *ge);

/**
  * @brief It paints in the screen the game
  * the object and the player
  * @author Profesores Germán López
  * @param *ge a pointer to the graphic_engine that must be painted and theactual game  
  * @return none
  */
void graphic_engine_paint_game(Graphic_engine *ge, Game *game);

#endif
