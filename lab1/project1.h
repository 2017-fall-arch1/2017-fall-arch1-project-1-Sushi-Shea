#include <stdio.h>
#ifndef llist_included
#define llist_included


/*Definition of a linked list node */
typedef struct LLNode_s {
  struct LLNode_s *next;
  char *str;
} LLNode;

/*Structure for a list */
typedef struct {
  LLNode *first, *last;
} LList;

extern llDoCheck;

/* create a new list */
LList *llAlloc();

/*Free memory space for a list*/
void llFree(LList *lp);

/*Append a coppy of int to end of the list*/
void llPut(LList *lp, char *s);

/*Delete all elements from list*/
void llMakeEmpty(LList *lp);

/*Print list membership. Prints default if message is null*/
void llPrint(LList *lp);

/*Check LList consistency,always return zero*/
int LLCheck(LList *lp, char *msg);

#endif 
