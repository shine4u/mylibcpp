#ifndef __LOG_MACROS_H__
#define __LOG_MACROS_H__ 1

/* logger打印命令的宏定义
 */

#define LOGGER_WRITE(format, ...) \
do { \
    printf(format"\n", ##__VA_ARGS__); \
} while(0) 


#define LOGGER_WRITE_LEVEL(level, format, ...) \
    LOGGER_WRITE("%-8s%s:%-3d"format, level, __FILE__, __LINE__, ##__VA_ARGS__)

#define LOGGER_WARNING(format, ...) \
    LOGGER_WRITE_LEVEL("WARNING", format, ##__VA_ARGS__)

#endif /* __LOG_MACROS_H__ */
