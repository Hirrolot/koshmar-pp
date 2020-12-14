#ifndef EPILEPSY_PRIV_VARIADICS_GET_H
#define EPILEPSY_PRIV_VARIADICS_GET_H

#define EPILEPSY_PRIV_VARIADICS_HEAD(...)        EPILEPSY_PRIV_VARIADICS_HEAD_AUX(__VA_ARGS__)
#define EPILEPSY_PRIV_VARIADICS_HEAD_AUX(x, ...) x

#define EPILEPSY_PRIV_VARIADICS_TAIL(...)        EPILEPSY_PRIV_VARIADICS_TAIL_AUX(__VA_ARGS__)
#define EPILEPSY_PRIV_VARIADICS_TAIL_AUX(x, ...) __VA_ARGS__

#endif // EPILEPSY_PRIV_VARIADICS_GET_H