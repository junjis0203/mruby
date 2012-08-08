/*
** numeric.h - Numeric, Integer, Float, Fixnum class
**
** See Copyright Notice in mruby.h
*/

#ifndef MRUBY_NUMERIC_H
#define MRUBY_NUMERIC_H

#if defined(__cplusplus)
extern "C" {
#endif

#include <limits.h>

#define POSFIXABLE(f) ((f) <= INT_MAX)
#define NEGFIXABLE(f) ((f) >= INT_MIN)
#define FIXABLE(f) (POSFIXABLE(f) && NEGFIXABLE(f))

#define MRB_NUM_OP_ADD (512 << 0)
#define MRB_NUM_OP_SUB (512 << 1)
#define MRB_NUM_OP_MUL (512 << 2)
#define MRB_NUM_OP_DIV (512 << 3)
#define MRB_NUM_OP_EQ  (512 << 4)
#define MRB_NUM_OP_LT  (512 << 5)
#define MRB_NUM_OP_LE  (512 << 6)
#define MRB_NUM_OP_GT  (512 << 7)
#define MRB_NUM_OP_GE  (512 << 8)

mrb_value mrb_flt2big(mrb_state *mrb, mrb_float d);
mrb_value mrb_fix2str(mrb_state *mrb, mrb_value x, int base);

mrb_value mrb_fixnum_plus(mrb_state *mrb, mrb_value x, mrb_value y);
mrb_value mrb_fixnum_minus(mrb_state *mrb, mrb_value x, mrb_value y);
mrb_value mrb_fixnum_mul(mrb_state *mrb, mrb_value x, mrb_value y);
mrb_value mrb_num_div(mrb_state *mrb, mrb_value x, mrb_value y);

#if defined(__cplusplus)
}  /* extern "C" { */
#endif

#endif  /* MRUBY_NUMERIC_H */
