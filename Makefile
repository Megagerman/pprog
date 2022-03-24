CC = gcc
CFLAGS = -c -Wall -ansi -pedantic

.PHONY: clean all

hormiguero: command.o game.o space.o graphic_engine.o game_loop.o game_reader.o object.o player.o set.o
	$(CC) -g -o $@ $^ -L. -lscreen

command.o: command.c command.h
	$(CC) $(CFLAGS) $<

game.o: game.c game.h command.h space.h types.h game_reader.h player.h object.h
	$(CC) $(CFLAGS) $<

space.o: space.c space.h types.h
	$(CC) $(CFLAGS) $<

graphic_engine.o: graphic_engine.c graphic_engine.h libscreen.h game.h command.h space.h types.h player.h object.h
	$(CC) $(CFLAGS) $<

game_loop.o: game_loop.c graphic_engine.h game.h command.h space.h types.h player.h object.h
	$(CC) $(CFLAGS) $<

game_reader.o: game_reader.c game_reader.h command.h space.h types.h player.h object.h
	$(CC) $(CFLAGS) $<

object.o: object.c object.h types.h
	$(CC) $(CFLAGS) $<

player.o:  player.c player.h object.h types.h
	$(CC) $(CFLAGS) $<

set.o:  set.c set.h types.h
	$(CC) $(CFLAGS) $<

all: clean hormiguero exe

clean: 
	@rm -fv hormiguero *.o
  
exe:
	./hormiguero hormiguero.dat


