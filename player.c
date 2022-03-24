/** 
 * @brief It implements the player module
 * 
 * @file player.c
 * @author Álvaro Gutiérrez de Cabiedes Gonzalvo
 * @version 1.0 
 * @date 14-03-2022 
 * @copyright GNU Public License
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "object.h"
#include "player.h"
#include "types.h"

#define MAX_NAME 32 

/**
 * @brief Player
 *
 * This struct stores all the information of a player.
 */
struct _Player {
  Id id;
  char name[WORD_SIZE];
  Id location;
  Id object_id;
};

/** player_create allocates memory for a new player
  *  and initializes its members
  */
Player * player_create(Id id){
  Player *newPlayer = NULL;

  /* Error control */
  if (id == NO_ID)
    return NULL;

  newPlayer = (Player *) malloc(sizeof (Player));
  if (newPlayer == NULL) {
    return NULL;
  }

  /* Initialization of an empty space*/
  newPlayer->id = id;
  newPlayer->name[0] = '\0';

  return newPlayer;
}

/** player_destroy frees the previous memory allocation 
  *  for an object
  */
STATUS player_destroy(Player* player) {
  if (!player) {
    return ERROR;
  }

  free(player);
  player = NULL;
  return OK;
}

Id player_get_id(Player* player) {
  if (!player) {
    return NO_ID;
  }
  return player->id;
}

STATUS player_set_id(Player* player, Id id) {
  if (!player || id == NO_ID) {
    return ERROR;
  }
  player->id = id;
  return OK;
}


const char * player_get_name(Player* player) {
  if (!player) {
    return NULL;
  }
  return player-> name;
}

STATUS player_set_name(Player* player, const char * name) {
  if (!player || !name) {
    return ERROR;
  }
  if (!strcpy(player->name,name))
    return ERROR;
  return OK;
}

STATUS player_set_location(Player* player, Id id) {
  if (!player || id == NO_ID) {
    return ERROR;
  }
  player->location = id;
  return OK;
}
/** It gets the id of the space located at the north
  */
Id player_get_location(Player* player) {
  if (!player) {
    return NO_ID;
  }
  return player->location;
}

Id player_get_object_id(Player* player) {
  if (!player) {
    return NO_ID;
  }
  return player->object_id;
}

/** It sets the id of the space located at the east
  */
STATUS player_set_object_id(Player* player, Id id) {
  if (!player || id == NO_ID) {
    return ERROR;
  }
  player->object_id = id;
  return OK;
}

STATUS player_print(Player* player) {
  
  /* Error Control */
  if (!player) {
    return ERROR;
  }

  /* 1. Print the id and the name of the player */
  fprintf(stdout, "--> Player (Id: %ld; Name: %s, Location: %ld, Object: %ld)\n", player->id, player->name, player->location, player->object_id);
 
 
  return OK;
}
