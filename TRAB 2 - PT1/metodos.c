#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void Swap(no *p, no *q){
	
	no *aux;

	aux = p;
	p = q;
	q = aux;
}

void Bubble(Lista *L, int *erro){

	int size = tamanho(L);

	if (size == 0)
		*erro = 1;

	else{

		*erro = 0;

		no *p, *q;
		p = L->inicio;
		q = p->prox;

		while(1){
			while(1){

				if(q->prox == NULL){
					break;
				}
				else if((p->info) < (q->info))
					Swap(p, q);

				q = q->prox;
			}
			if(p->prox == NULL)
				break;
			else{
				p = p->prox;
				q = p->prox;
			}
		}
	}
}

void Insertion(Lista *L, int *erro){

	int size = tamanho(L);

	no *p, *q, *aux;

	p = L->inicio;
	q = p->prox;

	if (size == 0){
		*erro = 1;		
	else{
		*erro = 0;

		while(1){
			while(1){

				if(q->prox == NULL)
					break;

				if (q->info < q->info->prox){
					aux = q;
				q = q->prox;
				}
			}
			if (p-> info < aux->info){

			}
		}
	}
}