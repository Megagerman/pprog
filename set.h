/**
    @Descripcion: Nombra las funciones que se van a utilizar en el set.c
    @Nombre: set.h
    @Autor: Álvaro Gutiérrez
    @date 22-02-2022
    @copyright GNU Public License
 */

#include "types.h"

 typedef struct _Set Set;


/*
  Set* set_create(int n_ids)
    @Autor:Álvaro Gutiérrez
    @Paramentros: Numero de ids
    @Return: Estructura set
    @Descripcion: Crea el set

  STATUS set_destroy(Set *set)
    @Autor: Álvaro Gutiérrez
    @Paramentros: Estructura set
    @Return: Ok o NULL
    @Descripcion: Destruye el set

  STATUS set_add(Set *set, Id id)
    @Autor: Álvaro Gutiérrez
    @Paramentros: Estructura set y la id que quieres añadir
    @Return: Estructura set
    @Descripcion: Añade Id

  STATUS set_del(Set *set, Id id)
    @Autor: Álvaro Gutiérrez
    @Paramentros: Estructura set y la id que quieres destruir
    @Return: Estructura set
    @Descripcion: Destruye el Id

  STATUS set_print(FILE *pf, Set *set)
    @Autor: Álvaro Gutiérrez
    @Paramentros: Estructura set y el file
    @Return: Ok o NULL
    @Descripcion: Printea el set
  
  BOOL set_test(Set *s, Id id)
    @Autor: Álvaro Gutiérrez
    @Paramentros: Estructura set y la Id
    @Return: TRUE o FALSE
    @Descripcion: Dice si hay la Id que le mandas en el conjunto de Ids
  
  Id *get_list_ids(Set* s)
    @Autor: Álvaro Gutiérrez
    @Paramentros: Estructura set 
    @Return: Lista de ids
    @Descripcion: Nos devuelve una estructura con todas las ids
  
  int n_ids(Set *s)
    @Autor: Álvaro Gutiérrez
    @Paramentros: Estructura set 
    @Return: numero de ids
    @Descripcion: Nos devuelve el numero de ids
*/

Set* set_create();
STATUS set_destroy(Set *set);
STATUS set_add(Set *set, Id id);
STATUS set_del(Set *set, Id id);
STATUS set_print(FILE *pf, Set *set);
BOOL set_test(Set *s, Id id);
Id *get_list_ids(Set* s);
int n_ids(Set *s);
