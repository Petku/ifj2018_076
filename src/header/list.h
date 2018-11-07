
/* Předmět: Algoritmy (IAL) - FIT VUT v Brně
 * Hlavičkový soubor pro c201.c (Jednosměrně vázaný lineární seznam)
 * Vytvořil: Martin Tuček, září 2005
 * Upravil: Kamil Jeřábek, září 2018
 *
 *
 * Tento soubor, prosíme, neupravujte!
 * Please, do not modify this file!
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

#define TRUE 1
#define FALSE 0



typedef struct tElem {
    struct tElem *ptr;
    char *buffer;
    unsigned length;
} *tElemPtr;
                                                            /* Vlastní seznam */
                                                        /* Definition of list */
typedef struct {
    tElemPtr Act;
    tElemPtr First;
} tList;
                                                   /* Funkce pro implementaci */
                                               /* Functions to be implemented */
void InitList (tList *);
void DisposeList (tList *);
void InsertFirst (tList *, int);
void First (tList *);
void CopyFirst (tList *, int *);
void DeleteFirst (tList *);
void PostDelete (tList *);
void PostInsert (tList *, int);
void Succ (tList *);
void Copy (tList *, int *);
void Actualize (tList *, int);
int  Active (tList *);

/* Konec hlavičkového souboru c201.h */
