#ifndef METALANG99_PRIV_COMPILER_ATTR_H
#define METALANG99_PRIV_COMPILER_ATTR_H

#ifdef __GNUC__
#define METALANG99_PRIV_COMPILER_ATTR_UNUSED __attribute__((unused))
#else
#define METALANG99_PRIV_COMPILER_ATTR_UNUSED
#endif

#ifdef __clang__

#define METALANG99_PRIV_CLANG_SUPPRESS_W_SHADOW _Pragma("clang diagnostic ignored \"-Wshadow\"")
#define METALANG99_PRIV_CLANG_DIAGNOSTIC_PUSH   _Pragma("clang diagnostic push")
#define METALANG99_PRIV_CLANG_DIAGNOSTIC_POP    _Pragma("clang diagnostic pop")

#else

#define METALANG99_PRIV_CLANG_SUPPRESS_W_SHADOW
#define METALANG99_PRIV_CLANG_DIAGNOSTIC_PUSH
#define METALANG99_PRIV_CLANG_DIAGNOSTIC_POP

#endif

#endif // METALANG99_PRIV_COMPILER_ATTR_H
