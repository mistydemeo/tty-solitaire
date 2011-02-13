#ifndef TEST_HELPER_H
#define TEST_HELPER_H

#include <stdbool.h>
#include "../lib/frame.h"
#include "../lib/card.h"
#include "../lib/stack.h"

bool frames_equal(struct frame *, struct frame *);
bool cards_equal(struct card *, struct card *);
bool stacks_equal(struct stack *, struct stack *);
struct frame *duplicate_frame(struct frame *);
struct card *duplicate_card(struct card *);
struct stack *duplicate_stack(struct stack *);

#endif