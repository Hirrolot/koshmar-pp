#include "assert.h"

#include "../include/insult/lang.h"
#include "../include/insult/uint.h"

// INSULT_UINT_INC

ASSERT_EQ(INSULT_UINT_INC(v(0)), v(1));
ASSERT_EQ(INSULT_UINT_INC(v(15)), v(16));
ASSERT_EQ(INSULT_UINT_INC(v(198)), v(199));
ASSERT_EQ(INSULT_UINT_INC(v(1022)), v(1023));

// INSULT_UINT_DEC

ASSERT_EQ(INSULT_UINT_DEC(v(1)), v(0));
ASSERT_EQ(INSULT_UINT_DEC(v(71)), v(70));
ASSERT_EQ(INSULT_UINT_DEC(v(918)), v(917));
ASSERT_EQ(INSULT_UINT_DEC(v(1023)), v(1022));

// INSULT_UINT_EQ

ASSERT(INSULT_UINT_EQ(v(0), v(0)));
ASSERT(INSULT_UINT_EQ(v(18), v(18)));
ASSERT(INSULT_UINT_EQ(v(910), v(910)));
ASSERT(INSULT_UINT_EQ(v(1023), v(1023)));

// INSULT_UINT_NEQ

ASSERT(INSULT_UINT_NEQ(v(0), v(1)));
ASSERT(INSULT_UINT_NEQ(v(0), v(1023)));
ASSERT(INSULT_UINT_NEQ(v(1), v(34)));
ASSERT(INSULT_UINT_NEQ(v(184), v(1019)));
ASSERT(INSULT_UINT_NEQ(v(603), v(16)));

// INSULT_UINT_GREATER

ASSERT(INSULT_UINT_GREATER(v(1), v(0)));
ASSERT(INSULT_UINT_GREATER(v(1023), v(0)));
ASSERT(INSULT_UINT_GREATER(v(5), v(4)));
ASSERT(INSULT_UINT_GREATER(v(147), v(80)));
ASSERT(INSULT_UINT_GREATER(v(619), v(401)));

// INSULT_UINT_LESSER

ASSERT(INSULT_UINT_LESSER(v(0), v(1)));
ASSERT(INSULT_UINT_LESSER(v(0), v(1023)));
ASSERT(INSULT_UINT_LESSER(v(19), v(25)));
ASSERT(INSULT_UINT_LESSER(v(109), v(110)));
ASSERT(INSULT_UINT_LESSER(v(817), v(1003)));

// INSULT_UINT_GREATER_EQUAL

ASSERT(INSULT_UINT_GREATER_EQUAL(v(0), v(0)));
ASSERT(INSULT_UINT_GREATER_EQUAL(v(18), v(18)));
ASSERT(INSULT_UINT_GREATER_EQUAL(v(175), v(175)));
ASSERT(INSULT_UINT_GREATER_EQUAL(v(1023), v(1023)));

ASSERT(INSULT_UINT_GREATER_EQUAL(v(1), v(0)));
ASSERT(INSULT_UINT_GREATER_EQUAL(v(1023), v(0)));
ASSERT(INSULT_UINT_GREATER_EQUAL(v(19), v(10)));
ASSERT(INSULT_UINT_GREATER_EQUAL(v(760), v(508)));

// INSULT_UINT_LESSER_EQUAL

ASSERT(INSULT_UINT_LESSER_EQUAL(v(0), v(0)));

ASSERT(INSULT_UINT_LESSER_EQUAL(v(2), v(2)));
ASSERT(INSULT_UINT_LESSER_EQUAL(v(1), v(1)));
ASSERT(INSULT_UINT_LESSER_EQUAL(v(25), v(25)));
ASSERT(INSULT_UINT_LESSER_EQUAL(v(498), v(498)));

ASSERT(INSULT_UINT_LESSER_EQUAL(v(0), v(1)));
ASSERT(INSULT_UINT_LESSER_EQUAL(v(0), v(1023)));
ASSERT(INSULT_UINT_LESSER_EQUAL(v(18), v(27)));
ASSERT(INSULT_UINT_LESSER_EQUAL(v(82), v(90)));
ASSERT(INSULT_UINT_LESSER_EQUAL(v(345), v(346)));
ASSERT(INSULT_UINT_LESSER_EQUAL(v(901), v(1023)));
