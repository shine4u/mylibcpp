

#ifndef __LOG_MACROS_H__
#define __LOG_MACROS_H__ 1

/* logger打印命令的宏定义
 */

#define LOGGER_WRITE(format, ...) \
do { \
    printf(format"\n", ##__VA_ARGS__); \
} while(0) 


#define LOGGER_WARNING(format, ...) \
do { \
    LOGGER_WRITE("%s:%d "format, __FILE__, __LINE__, ##__VA_ARGS__); \
} while (0)

#endif /* __LOG_MACROS_H__ */
