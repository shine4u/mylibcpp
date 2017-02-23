#ifndef __LOGIC_CTRL_MACROS_H__
#define __LOGIC_CTRL_MACROS_H__ 1

#include "cpp_std_def.h"
#include "logger_macros.h"


/* pass or exit.
 */
#define PASS_OR_EXIT(expression, format, ...) \
do { \
    int ret_ = (expression); \
    if (ret_ != 0) { \
        LOGGER_FATAL("PASS_OR_EXIT expression=%s ret_=%d", #expression, ret_); \
        LOGGER_FATAL(format, ##__VA_ARGS__); \
        exit(1); \
    } \
} while(0)


/* pass or return
 */
#define PASS_OR_RETURN(expression, format, ...) \
do { \
    int ret_ = (expression); \
    if (ret_ != 0) { \
        LOGGER_WARNING("PASS_OR_RETURN expression=\"%s\" ret_=%d "format, #expression, ret_, ##__VA_ARGS__); \
        return ret_; \
    } \
} while(0)



#define PASS_OR_ACTION_RETURN(expression, action, ret_code, format, ...) \
do { \
    int ret_ = (expression); \
    if (ret_ != 0) { \
        if (strlen(format) != 0) { \
            LOGGER_WARNING(format, ##__VA_ARGS__); \
        } \
        action; \
        return ret_code; \
    } \
} while(0)

#define PASS_OR_CONTINUE(expression, format, ...) \
if (1) { \
    int ret_ = (expression); \
    if (ret_ != 0) { \
        if (strlen(format) != 0) { \
            LOGGER_WARNING(format, ##__VA_ARGS__); \
        }\
        continue; \
    } \
} else {;}

#endif /* __LOGIC_CTRL_MACROS_H__ */
