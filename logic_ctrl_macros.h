#ifndef __LOGIC_CTRL_MACROS_H__
#define __LOGIC_CTRL_MACROS_H__ 1

#include "cpp_std_def.h"
#include "logger_macros.h"

/* REP */
/* example: REP(5), REP(a), REP(5+a), REP(4)REP(4) is ok */
#define REP(x) for(int x_ = (x), rep_##x_ = 0; rep_##x_ < x_; ++  rep_##x_)

/* pass or return */
#define PASS_OR_ACTION(expression, action, format, ...) \
if (1) { \
    int ret_ = (expression); \
    if (ret_ != 0) { \
        LOGGER_WARNING("PASS_OR_ACTION expression=[%s] ret_=[%d] action=[%s] "format, #expression, ret_, #action, ##__VA_ARGS__); \
        action; \
    } \
} else {;}


#endif /* __LOGIC_CTRL_MACROS_H__ */
