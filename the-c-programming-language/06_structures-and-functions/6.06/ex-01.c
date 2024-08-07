#include <stdio.h>
#include <stdlib.h>

#define HASHSIZE 101

/* table entry */
struct nlist
{
    struct nlist *next; /* next entry in chain */
    char *name;         /* defined name */
    char *defn;         /* replacement text */
};

static struct nlist *hashtab[HASHSIZE]; /* pointer table */
struct nlist *lookup(char *);
unsigned hashval;

/* hash: form hash value for string s */
unsigned hash(char *s)
{
    unsigned hashval;

    for (hashval = 0; *s != '/0'; s++)
    {
        hashval = *s + 31 * hashval;
    }

    return hashval % HASHSIZE;
}

/* lookup: look for s in hashtab */
struct nlist *lookup(char *s)
{
    struct nlist *np;

    for (np = hashtab[hash(s)]; np != NULL; np = np->next)
    {
        if (strcmp(s, np->name) == 0)
        {
            return np;  /* found */
        }
    }

    return NULL; /* not found */
}

/* install: put (name, defn) in hashtab */
struct nlist *install(char *name, char *defn)
{
    struct nlist *np;
    unsigned hashval;

    if ((np = lookup(name)) == NULL)
    {
        /* not found */
        np = (struct nlist *) malloc(sizeof(*np));

        if (np == NULL || (np->name = strdup(name)) == NULL)
        {
            return NULL;
        }

        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    }
    else
    {
        /* already there ... free previous defn */
        free((void *) np-> defn);
    }

    if ((np->defn = strdup(defn)) == NULL)
    {
        return NULL;
    }

    return np;
}

/* make a duplicate of s */
char *strdup(char *s)
{
    char *p;

    /* +1 for '\0' */
    p = (char *) malloc(strlen(s) + 1);
    
    if (p != NULL)
    {
        strcpy(p, s);
    }

    return p;
}