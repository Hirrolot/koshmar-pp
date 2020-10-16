#include "../assert.h"

#include "../../include/insult/eval.h"
#include "../../include/insult/lang.h"
#include "../../include/insult/variadics.h"

#include <assert.h>

ASSERT_EQ(INSULT_VARIADICS_HEAD(v(51) v(21) v(1) v(7378)), v(51));
ASSERT_EQ(INSULT_VARIADICS_HEAD(v(51) v(21) v(1) v(7378)), v(51));

#define CHECK_TAIL(a, b, c, d)                                                                     \
    v(static_assert(a == 51, ""); static_assert(b == 21, ""); static_assert(c == 1, "");           \
      static_assert(d == 7378, "");)

ASSERT_EQ(INSULT_VARIADICS_TAIL(v(120) v(19801)), v(19801));
// INSULT_EVAL(c(CHECK_TAIL, c(INSULT_VARIADICS_TAIL, v(9191) v(51) v(21) v(7378))))

#undef CHECK_TAIL
