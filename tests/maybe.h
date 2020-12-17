#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/maybe.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH(maybe) EPILEPSY_CHOICE_MATCH(v(maybe), v(MATCH_), v(123))
#define MATCH_MaybeJust(_87, _123)                                                                 \
    v(EPILEPSY_C_STATIC_ASSERT(_87 == 87); EPILEPSY_C_STATIC_ASSERT(_123 == 123);)
#define MATCH_MaybeNothing(_dummy, _123) v(EPILEPSY_C_STATIC_ASSERT(_123 == 123);)

EPILEPSY_EVAL(call(MATCH, EPILEPSY_MaybeJust(v(87))))
EPILEPSY_EVAL(call(MATCH, EPILEPSY_MaybeNothing()))

#undef MATCH
#undef MATCH_JUST
#undef MATCH_NOTHING

EPILEPSY_ASSERT(EPILEPSY_MaybeIsJust(EPILEPSY_MaybeJust(VAL)));
EPILEPSY_ASSERT_EQ(EPILEPSY_MaybeIsJust(EPILEPSY_MaybeNothing()), v(0));

EPILEPSY_ASSERT_EQ(EPILEPSY_MaybeIsNothing(EPILEPSY_MaybeJust(VAL)), v(0));
EPILEPSY_ASSERT(EPILEPSY_MaybeIsNothing(EPILEPSY_MaybeNothing()));

#undef VAL