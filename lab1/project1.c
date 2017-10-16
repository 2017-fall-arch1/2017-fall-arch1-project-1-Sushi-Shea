#include <stdio.h>
#include "project1.h"
#include <assert.h>
#include <stdlib.h>

int llDoCheck = 1;

#define doCheck(_lp) (llDoCheck && LLCheck(_lp))

/* Create tree*/
LTree *llAlloc(){
  LTree *lp = (LTree *)malloc(sizeof(LTree));
  lp->root= 0;
  doCheck(lp);
  return lp;
}


/*Recycle tree, discarding all elements*/
void llFree(LTree *lp){
  doCheck(lp);
  llMakeEmpty(lp);
  free(lp);
}

/*Delete all elements*/
void llMakeEmpty(LTree *lp){
  LLNode *current = lp->root, *left;
  doCheck(lp);
  while (current) {
    next = current->left;
    free(current->str);
    free(current);
    current = left;
  }

  lp->root = 0;
  doCheck(lp);
}
  

