/**
 * @brief It implements the command interpreter interface
 *
 * @file command.h
 * @author Germán López
 * @version 2.0
 * @date 13-03-2022
 * @copyright GNU Public License
 */

#ifndef COMMAND_H
#define COMMAND_H

#define N_CMDT 2
#define N_CMD 7

typedef enum enum_CmdType {
  CMDS,
  CMDL} T_CmdType;

typedef enum enum_Command {
  NO_CMD = -1,
  UNKNOWN,
  EXIT,
  NEXT,
  BACK,
  TAKE,
  DROP} T_Command;

T_Command command_get_user_input();

#endif
