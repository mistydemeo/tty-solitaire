#ifndef CARD_H
#define CARD_H

enum value {
  NO_VALUE = -1,
  TWO      = 2,
  THREE    = 3,
  FOUR     = 4,
  FIVE     = 5,
  SIX      = 6,
  SEVEN    = 7,
  EIGHT    = 8,
  NINE     = 9,
  TEN      = 10,
  JACK     = 11,
  QUEEN    = 12,
  KING     = 13,
  ACE      = 14
};

enum suit {
  NO_SUIT  = -1,
  DIAMONDS = 0,
  SPADES   = 1,
  HEARTS   = 2,
  CLUBS    = 3
};

enum face {
  NO_FACE = -1,
  COVERED = 0,
  EXPOSED = 1
};

struct card {
  struct frame *frame;
  enum value   value;
  enum suit    suit;
  char         face;
};

struct card *initialize_card();
void delete_card(struct card *);
void set_card(struct card *, enum value, enum suit, enum face, int, int);
void refresh_card(struct card *);

#endif