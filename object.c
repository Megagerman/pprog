/** 
 * @brief It implements the object module
 * 
 * @file object.c
 * @author Germán López
 * @version 1.0 
 * @date 10-03-2022 
 * @copyright GNU Public License
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "object.h"
#include "types.h"

#define MAX_NAME 32 

/**
 * @brief Object
 *
 * This struct stores all the information of an object.
 */
struct _Object {
  Id id;
  char name[WORD_SIZE];
  Id location;
};

/** object_create allocates memory for a new object
  *  and initializes its members
  */
Object* object_create(Id id){
  Object *newObject = NULL;

  /* Error control */
  if (id == NO_ID)
    return NULL;

  newObject = (Object *) malloc(sizeof (Object));
  if (newObject == NULL) {
    return NULL;
  }

  /* Initialization of an empty object*/
  newObject->id = id;
  newObject->name[0] = '\0';

  return newObject;
}

/** object_destroy frees the previous memory allocation 
  *  for an object
  */
STATUS object_destroy(Object* object) {
  if (!object) {
    return ERROR;
  }

  free(object);
  object = NULL;
  return OK;
}

/** object_get_id gets the id of an objecct
  */
Id object_get_id(Object* object) {
  if (!object) {
    return NO_ID;
  }
  return object->id;
}

/** object_set_id sets the id of an object
  */
STATUS object_set_id(Object* object, Id id) {
  if (!object || id == NO_ID) {
    return ERROR;
  }
  object->id = id;
  return OK;
}

/** object_get_name gets the name of an object
  */
const char * object_get_name(Object* object) {
  if (!object) {
    return NULL;
  }
  return object->name;
}

/** object_set_name sets the name of an object
  */
STATUS object_set_name(Object* object, const char * name) {
    
    if (!object || !name) {
    return ERROR;
  }
  if (!strcpy(object->name,name))
    return ERROR;
  return OK;
}


/** object_get_location gets the location of an object
  */
Id object_get_location(Object* object) {
  if (!object) {
    return NO_ID;
  }
  return object->location;
}

/** object_set_location sets the location of an object
  */
STATUS object_set_location(Object* object, Id location) {
  if (!object || location == NO_ID) {
    return ERROR;
  }
  object->location = location;
  return OK;
}

/** It prints the object information
  */
STATUS object_print(Object* object) {

  /* Error Control */
  if (!object) {
    return ERROR;
  }
  
  /* 1. Print the id and the name of the object */
  fprintf(stdout, "--> Object (Id: %ld; Name: %s)\n", object->id, object->name);
 
 
  return OK;
}
