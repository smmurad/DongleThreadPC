// #include "Customncp.h"

// /***************************************************************************************************
//  * @section Initialization
//  **************************************************************************************************/

//  /**@brief Function for initializing the Thread Stack in NCP mode.
//  */
// static void thread_ncp_init(void)
// {
//     otSysInit(0, NULL);

//     m_app.p_ot_instance = otInstanceInitSingle();
//     ASSERT(m_app.p_ot_instance);

//     otNcpInit(m_app.p_ot_instance);

//     otThreadSetRouterSelectionJitter(m_app.p_ot_instance, ROUTER_SELECTION_JITTER);

//     uint32_t err_code = bsp_thread_init(m_app.p_ot_instance);
//     APP_ERROR_CHECK(err_code);
// }

// /**@brief Function for deinitializing the Thread Stack in NCP mode.
// */
// static void thread_ncp_deinit(void)
// {
//     bsp_thread_deinit(m_app.p_ot_instance);
//     otInstanceFinalize(m_app.p_ot_instance);
//     m_app.p_ot_instance = NULL;
// }


// /**@brief Function for initializing the Application Timer Module.
//  */
// static void timer_init(void)
// {
//     uint32_t err_code = app_timer_init();
//     APP_ERROR_CHECK(err_code);
// }


// /**@brief Function for initializing the LEDs.
//  */
// static void leds_init(void)
// {
//     LEDS_CONFIGURE(LEDS_MASK);
//     LEDS_OFF(LEDS_MASK);
// }


// /**@brief Function for processing Thread stack.
//  */
// static void thread_process(void)
// {
//     otTaskletsProcess(m_app.p_ot_instance);
//     otSysProcessDrivers(m_app.p_ot_instance);
// }
