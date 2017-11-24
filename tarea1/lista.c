#include "lista.h"

Lista crearLista(){
  Lista lst = (Lista) malloc(sizeof(Elemento)*MAX);
  int i;

  for(i = 0; i < MAX; i++)
    lst[i] = NULL;
  
  return lst;
}

Lista anxLista(Lista lst, Elemento elem){
  int i=0;

  while(lst[i] != NULL){
    i++; 
  }
  
  lst[i] = elem;
  
  return lst;
}

Lista insLista(Lista lst, Elemento elem, int pos){
  int tam = longLista(lst);
  if(pos >= 1 && pos <= tam && tam != MAX){
    int i = tam - 1;
    
    while(i > pos - 2){
      lst[i+1] = lst[i];
      i--;
    }
    
    lst[i+1] = elem;
  }
  
  return lst;
}

Lista elimLista(Lista lst, int pos){
  int tam = longLista(lst);
  
  if(pos >= 1 && pos <= tam && tam != MAX){
    int i = pos - 1;
    
    while(i < tam){
      lst[i] = lst[i+1];
      i++;
    }
  }
 
  return lst;
}

Elemento infoLista(Lista lst, int pos){
  return lst[pos-1];
}

int longLista(Lista lst){
  int cont = 0;
  
  while(lst[cont] != NULL){
    cont++;
  }
  
  return cont;
}

int vaciaLista(Lista lst){
  return lst[0] == NULL;
}