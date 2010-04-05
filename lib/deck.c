#include <malloc.h>
#include "deck.h"

void allocate_deck(struct deck **deck) {
  *deck = malloc(sizeof(**deck));

  allocate_stack(&((*deck)->stock));

  allocate_stack(&((*deck)->foundation_0));
  allocate_stack(&((*deck)->foundation_1));
  allocate_stack(&((*deck)->foundation_2));
  allocate_stack(&((*deck)->foundation_3));

  allocate_stack(&((*deck)->maneuvre_0));
  allocate_stack(&((*deck)->maneuvre_1));
  allocate_stack(&((*deck)->maneuvre_2));
  allocate_stack(&((*deck)->maneuvre_3));
  allocate_stack(&((*deck)->maneuvre_4));
  allocate_stack(&((*deck)->maneuvre_5));
  allocate_stack(&((*deck)->maneuvre_6));

  return;
}

void initialize_deck(struct deck *deck) {
  initialize_stack(deck->stock);

  initialize_stack(deck->foundation_0);
  initialize_stack(deck->foundation_1);
  initialize_stack(deck->foundation_2);
  initialize_stack(deck->foundation_3);

  initialize_stack(deck->maneuvre_0);
  initialize_stack(deck->maneuvre_1);
  initialize_stack(deck->maneuvre_2);
  initialize_stack(deck->maneuvre_3);
  initialize_stack(deck->maneuvre_4);
  initialize_stack(deck->maneuvre_5);
  initialize_stack(deck->maneuvre_6);

  return;
}