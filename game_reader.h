/** 
 * @brief It defines the game_reader interface
 * 
 * @file game.h
 * @author Germán López Vázquez
 * @version 2.0 
 * @date 10-03-2022 
 * @copyright GNU Public License
 */

#ifndef GAME_READER_H
#define GAME_READER_H

#include "game.h"

/**
  * @brief It loads a space created
  * @author Germán López
  *
  * game_load_spaces allocates memory for a new space, initializes its members and
	print them.
  * @param game the identification of a player, object and space; filename. 
  * @return STATUS (OK/ERROR)
  */
STATUS game_reader_load_spaces(Game *game, char *filename);

#endif