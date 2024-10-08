/*
 * TITLE: Sistemas Operativos
 * SUBTITLE: Practica 0
 * AUTHOR 1: Pablo Herrero Diaz LOGIN 1: pablo.herrero.diaz
 * AUTHOR 2: Tiago Da Costa Teixeira Veloso E Volta LOGIN 2: tiago.velosoevolta
 * GROUP: 2.3
 * DATE: 27 / 09 / 24
 */

#ifndef FILELIST_H
#define FILELIST_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXFILES 100
#define MAXNAME 25
#define FNULL (-1)

//Estructura para almacenar los ficheros abiertos
typedef struct{
    int df;             //Descriptor de un archivo
    int mode;           //Modo en que se abrió el archivo
    char name[MAXNAME];
} OpenFile;

// Estructura para gestionar la lista de ficheros abiertos
typedef struct {
    OpenFile files[MAXFILES];
    int numOpenFiles;
} OpenFileList;

//Declaraciones de funciones
void InitializeOpenFileList(OpenFileList *list);
char* GetFileName(OpenFileList *list,const int df);
void ListOpenFiles(OpenFileList *list);
void AddToOpenFiles(OpenFileList *list, const int df, const int mode, const char *name);
void RemoveFromOpenFiles(OpenFileList *list, int df);
void CleanOpenFilesList(OpenFileList *list);



#endif //FILELIST_H
