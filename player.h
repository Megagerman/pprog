/** 
 * @brief It defines the object interface
 * 
 * @file player.h
 * @author Álvaro Gutiérrez de Cabiedes
 * @version 2.0 
 * @date 14-03-2022
 * @copyright GNU Public License
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "types.h"

typedef struct _Player Player;


Player* player_create(Id id);

STATUS player_destroy(Player* player);

Id player_get_id(Player* player);

STATUS player_set_id(Player* player, Id id);

const char * player_get_name(Player* player);

STATUS player_set_name(Player* player, const char * name);

Id player_get_location(Player* player);

STATUS player_set_location(Player* player, Id id);

Id player_get_object_id(Player* player);

STATUS player_set_object_id(Player* player, Id id);


STATUS player_print(Player* player);

#endif