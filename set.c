/** 
 * @brief It implements the set module
 * 
 * @file set.c
 * @author Álvaro Gutiérrez
 * @version 2.0 
 * @date 22-02-2022
 * @copyright GNU Public License
 */

#include <stdio.h>
#include <stdlib.h>

#include "set.h"

struct _Set {
  Id *ids;                   
  int n_ids;                  
};

Set* set_create(){
    Set *create;
    create = (Set*)malloc(sizeof(Set)); 
    if(create == NULL)
      return NULL;
    create->n_ids = 0;
    return create;
}

STATUS set_destroy(Set *set){
  if(set == NULL)
    return ERROR;
  free(set);
  return OK;
} 

STATUS set_add(Set *set, Id id){
  if(set == NULL || id == NO_ID)
    return ERROR;
  set->n_ids++; /*Aumentas el numero de ids*/
  set->ids = realloc(set->ids, (set->n_ids)*sizeof(Id));
  set->ids[(set->n_ids)-1] = id; 
  return OK;
}

STATUS set_del(Set *set, Id id){
  int i;
  if(set == NULL || set->n_ids == 0)
    return ERROR;
  
  for(i=0;i<set->n_ids;i++){
    if(set->ids[i] == id) 
      set->ids[i] = set->ids[set->n_ids-1]; 
    }
  set->n_ids--;
  return OK;
}

BOOL set_test(Set *s, Id id) {
  int i;
  if(s == NULL || id == NO_ID)
    return FALSE;
  
  for(i=0;i<s->n_ids;i++){ 
    if(s->ids[i] == id)
      return TRUE;
  }
  return FALSE;
}

Id *get_list_ids(Set* s){
  if (s == NULL)
    return NULL;
  return s->ids;
}

int n_ids(Set *s){
  if (s == NULL)
    return NO_ID;
  return s->n_ids;
}

STATUS set_print(FILE *pf, Set *set){
  int i;
  if(set == NULL || pf == NULL)
    return ERROR;
  
  fprintf(pf, "Total ids: %d", set->n_ids);
  for(i=0;i<set->n_ids;i++){
    fprintf(pf, "    Id %d: %ld", i, set->ids[i]);
  }
  return OK; 
}