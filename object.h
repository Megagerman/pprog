/** 
 * @brief It defines the object interface
 * 
 * @file object.h
 * @author Germán López
 * @version 2.0 
 * @date 13-03-2022 
 * @copyright GNU Public License
 */

#ifndef OBJECT_H
#define OBJECT_H

#include "types.h"

typedef struct _Object Object;

/**
  * @brief It creates a new space
  * @author Germán López
  *
  * object_create allocates memory for a new object
  *  and initializes its members
  * @param id the identification number for the new object
  * @return a new objecct, initialized
  */
Object* object_create(Id id);

/**
  * @brief It destroys an object, freeing the allocated memory
  * @author Germán López
  * 
  * @param object a pointer to the object that must be destroyed  
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS object_destroy(Object* object);

/**
  * @brief It gets the id of an object
  * @author Germán López
  * 
  * @param object a pointer to the object  
  * @return the id of object
  */
Id object_get_id(Object* object);

/**
  * @brief It sets the id of an object
  * @author Germán López
  * 
  * @param object a pointer to the object and an id
  * @return OK, if everything goes well or ERROR if there was some mistake 
  */
STATUS object_set_id(Object* object, Id id);

/**
  * @brief It gets the name of an object
  * @author Gemán López
  * 
  * @param object a pointer to the object
  * @return  a string with the name of the object
  */
const char * object_get_name(Object* object);

/**
  * @brief It sets the name of an object
  * @author Germán López
  * 
  * @param object a pointer to the object and char to the object name
  * @return OK, if everything goes well or ERROR if there was some mistake 
  */
STATUS object_set_name(Object* object, const char * name);

/**
  * @brief It gets the location of an object
  * @author Gemán López
  * 
  * @param object a pointer to the object
  * @return id with the object location
  */
Id object_get_location(Object* object);

/**
  * @brief It sets the location of an object
  * @author Germán López
  * 
  * @param object a pointer to the object and the location of the object
  * @return OK, if everything goes well or ERROR if there was some mistake 
  */
STATUS object_set_location(Object* object, Id location);

/**
  * @brief It prints the object information
  * @author Germán López
  * @param object a pointer to the object
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS object_print(Object* object);

#endif