/**
 * @file tkl_output.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 *
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 *
 */

// --- BEGIN: user defines and implements ---
#include "tkl_output.h"
#include "tuya_error_code.h"
#include <stdio.h>

#ifndef MAX_SIZE_OF_DEBUG_BUF
#define MAX_SIZE_OF_DEBUG_BUF (4096)
#endif

static char s_output_buf[MAX_SIZE_OF_DEBUG_BUF] = {0};
// --- END: user defines and implements ---

/**
 * @brief Output log information
 *
 * @param[in] format: log information
 *
 * @note This API is used for outputing log information
 *
 * @return
 */
void tkl_log_output(const char *format, ...)
{
    // --- BEGIN: user implements ---
    va_list ap;
    va_start(ap, format);
    vsnprintf(s_output_buf, MAX_SIZE_OF_DEBUG_BUF, format, ap);
    va_end(ap);
    printf("%s", s_output_buf);
    fflush(stdout);
    return;
    // --- END: user implements ---
}

/**
 * @brief Close log port
 *
 * @param void
 *
 * @note This API is used for closing log port.
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_log_close(void)
{
    // --- BEGIN: user implements ---
    return OPRT_OK;
    // --- END: user implements ---
}

/**
 * @brief Open log port
 *
 * @param void
 *
 * @note This API is used for openning log port.
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_log_open(void)
{
    // --- BEGIN: user implements ---
    return OPRT_OK;
    // --- END: user implements ---
}
