/**
 * @file lv_os.h
 *
 */

#ifndef LV_OS_H
#define LV_OS_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../lv_conf_internal.h"
#if LV_USE_OS

#include "../misc/lv_types.h"
#include LV_OS_CUSTOM_INCLUDE

#if LV_USE_PTHREAD
#include "lv_pthread.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef enum {
    LV_THREAD_PRIO_LOWEST,
    LV_THREAD_PRIO_LOW,
    LV_THREAD_PRIO_MID,
    LV_THREAD_PRIO_HIGH,
    LV_THREAD_PRIO_HIGHEST,
} lv_thread_prio_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------------------------------
 * These functions needs to be implemented
 * for specific operating systems
 *---------------------------------------*/

/**
 * Create a new thread
 * @param thread        a variable in which the thread will be stored
 * @param prio          priority of the thread
 * @param callback      function of the thread
 * @param stack_size    stack size in bytes
 * @param user_data     arbitrary data, will be available in the callback
 * @return              LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_thread_init(lv_thread_t * thread, lv_thread_prio_t prio, void (*callback)(void *), size_t stack_size,
                        void * user_data);

/**
 * Delete a thread
 * @param thread        the thread to delete
 * @return              LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_thread_delete(lv_thread_t * thread);

/**
 * Create a mutex
 * @param mutex         a variable in which the thread will be stored
 * @return              LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_mutex_init(lv_mutex_t * mutex);

/**
 * Lock a mutex
 * @param mutex         the mutex to lock
 * @return              LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_mutex_lock(lv_mutex_t * mutex);

/**
 * Lock a mutex from interrupt
 * @param mutex         the mutex to lock
 * @return              LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_mutex_lock_isr(lv_mutex_t * mutex);

/**
 * Unlock a mutex
 * @param mutex         the mutex to unlock
 * @return              LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_mutex_unlock(lv_mutex_t * mutex);

/**
 * Delete a mutex
 * @param mutex         the mutex to delete
 * @return              LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_mutex_delete(lv_mutex_t * mutex);

/**
 * Create a thread synchronization object
 * @param sync          a variable in which the sync will be stored
 * @return              LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_thread_sync_init(lv_thread_sync_t * sync);

/**
 * Wait for a "signal" on a sync object
 * @param sync      a sync object
 * @param mutex     a mutex which will be unlocked while waiting
 * @return          LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_thread_sync_wait(lv_thread_sync_t * sync, lv_mutex_t * mutex);

/**
 * Send a wake-up signal to a sync object
 * @param sync      a sync object
 * @return          LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_thread_sync_signal(lv_thread_sync_t * sync);

/**
 * Delete a sync object
 * @param sync      a sync object to delete
 * @return          LV_RES_OK: success; LV_RES_INV: failure
 */
lv_res_t lv_thread_sync_delete(lv_thread_sync_t * sync);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_OS*/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_OS_H*/
