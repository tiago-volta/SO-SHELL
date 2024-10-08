/*
 * TITLE: Sistemas Operativos
 * SUBTITLE: Practica 0
 * AUTHOR 1: Pablo Herrero Diaz LOGIN 1: pablo.herrero.diaz
 * AUTHOR 2: Tiago Da Costa Teixeira Veloso E Volta LOGIN 2: tiago.velosoevolta
 * GROUP: 2.3
 * DATE: 27 / 09 / 24
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>     // Para open()
#include <sys/types.h> // Para definir tipos de datos como mode_t
#include <sys/stat.h>  // Para definir permisos de archivo
#include <sys/utsname.h> // Para obtener información del sistema
#include <unistd.h>  // Para close()
#include <pwd.h>        // Para obtener nombre de usuario
#include <grp.h>        // Para obtener nombre del grupo
#include <dirent.h> //Para obtener información del contenido de un directorio

#include "CommandList.h"
#include "HistoryList.h"
#include "FileList.h"

#define LENGTH_MAX_INPUT 256

void printPrompt();
void readInput(bool *finished, CommandList *commandList, HistoryList *history,OpenFileList *openFileList);
void processInput(bool *finished,Item *str,char *pieces[], CommandList *commandList, HistoryList *history,OpenFileList *fileList);
void PredefinedCommands(CommandList *commandList);

void command_authors(char * pieces[]);
void command_pid();
void command_ppid();
void command_cd(char *pieces[]);
void command_date(char *pieces[]);
void command_historic (char *pieces[],bool *finished,CommandList *commandList, HistoryList *history, OpenFileList *openFileList);
void command_open(char *pieces[],OpenFileList *openFileList);
void command_close(char *pieces[],OpenFileList *openFileList);
void command_dup(char *pieces[], OpenFileList *openFileList);
void command_infosys();
void command_help(char * pieces[],CommandList *commandList);
void command_exit(bool *finished,OpenFileList *openFileList, HistoryList *history, CommandList *commandList);

void command_makefile(char *pieces[]);
void command_makedir(char *pieces[]);
void command_listFile(char *pieces[]);
void command_cwd();
void command_listDir(char *pieces[]);
void command_reclist(char *pieces[]);
void command_revlist(char *pieces[]);
void command_delrec (char *pieces[]);
void command_erase(char *pieces[]);




#endif //FUNCTIONS_H
