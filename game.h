/** 
 * @brief It defines the game interface
 * 
 * @file game.h
 * @author Profesores PPROG
 * @version 2.0 
 * @date 29-11-2021 
 * @copyright GNU Public License
 */

#ifndef GAME_H
#define GAME_H

#include "command.h"
#include "space.h"
#include "types.h"
#include "player.h"
#include "object.h"

typedef struct _Game
{
  Object *obj;
  Player *player;
  Space *spaces[MAX_SPACES];
  T_Command last_cmd;
} Game;

STATUS game_add_space(Game *game, Space *space);
STATUS game_create(Game *game);
STATUS game_create_from_file(Game *game, char *filename);
STATUS game_update(Game *game, T_Command cmd);
STATUS game_destroy(Game *game);
BOOL game_is_over(Game *game);
void game_print_data(Game *game);
Space *game_get_space(Game *game, Id id);
T_Command game_get_last_command(Game *game);
#endif
