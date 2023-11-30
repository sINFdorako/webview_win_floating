// my_macros.h
#ifndef MY_MACROS_H
#define MY_MACROS_H

#define CHECK_FAILURE(hr) \
    do { \
        HRESULT result = (hr); \
        if (FAILED(result)) { \
            throw std::exception("Operation failed"); \
        } \
    } while(0)

#endif // MY_MACROS_H
