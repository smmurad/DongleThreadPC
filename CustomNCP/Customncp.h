/** @file
 *
 * @defgroup ncp_example_main main.c
 * @{
 * @ingroup ncp_example
 * @brief An example presenting OpenThread NCP.
 *
 */
#include <stdint.h>
#include <string.h>

#include "app_scheduler.h"
#include "app_timer.h"
#include "bsp_thread.h"
#include "nrf_assert.h"

#include <openthread/ncp.h>
#include <openthread/tasklet.h>
#include <openthread/thread_ftd.h>
#include <openthread/platform/openthread-system.h>

#define ROUTER_SELECTION_JITTER  5                               /**< A value of router selection jitter. */
#define SCHED_QUEUE_SIZE         32                              /**< Maximum number of events in the scheduler queue. */
#define SCHED_EVENT_DATA_SIZE    APP_TIMER_SCHED_EVENT_DATA_SIZE /**< Maximum app_scheduler event size. */

typedef struct
{
    otInstance * p_ot_instance;
} application_t;

static application_t m_app =
{
    .p_ot_instance = NULL
};

/***************************************************************************************************
 * @section Initialization
 **************************************************************************************************/

//  /**@brief Function for initializing the Thread Stack in NCP mode.
//  */
// static void thread_ncp_init(void);

// /**@brief Function for deinitializing the Thread Stack in NCP mode.
// */
// static void thread_ncp_deinit(void);

// /**@brief Function for initializing the Application Timer Module.
//  */
// static void timer_init(void);

// /**@brief Function for initializing the LEDs.
//  */
// static void leds_init(void);

// /**@brief Function for processing Thread stack.
//  */
// static void thread_process(void);

/**
 *@}
 **/
