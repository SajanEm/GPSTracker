
/*================================================================
  Copyright (c) 2021, Quectel Wireless Solutions Co., Ltd. All rights reserved.
  Quectel Wireless Solutions Proprietary and Confidential.
=================================================================*/
    
/*=================================================================

						EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

WHEN			  WHO		  WHAT, WHERE, WHY
------------	 -------	 -------------------------------------------------------------------------------

=================================================================*/


/*===========================================================================
 * include files
 ===========================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ql_api_osi.h"
#include "ql_log.h"
#include "ql_pin_cfg.h"

#include "gpio_demo.h"

/*===========================================================================
 * Macro Definition
 ===========================================================================*/
#define QL_GPIODEMO_LOG_LEVEL             QL_LOG_LEVEL_INFO
#define QL_GPIODEMO_LOG(msg, ...)         QL_LOG(QL_GPIODEMO_LOG_LEVEL, "ql_GPIODEMO", msg, ##__VA_ARGS__)
#define QL_GPIODEMO_LOG_PUSH(msg, ...)    QL_LOG_PUSH("ql_GPIODEMO", msg, ##__VA_ARGS__)

/*===========================================================================
 * Variate
 ===========================================================================*/
ql_gpio_cfg _ql_gpio_cfg[2] =
{   /* gpio_num   gpio_dir     gpio_pull    gpio_lvl    */
    {  GPIO_0,   GPIO_OUTPUT,  0xff,        LVL_HIGH }    // set output high-level
};

/*===========================================================================
 * Functions
 ===========================================================================*/
void _ql_gpio_demo_init(  void)
{
    uint16_t num;
    for( num = 0; num < sizeof(_ql_gpio_cfg)/sizeof(_ql_gpio_cfg[0]); num++ )
    {
        ql_gpio_deinit(_ql_gpio_cfg[num].gpio_num);
        ql_gpio_init(_ql_gpio_cfg[num].gpio_num, _ql_gpio_cfg[num].gpio_dir, _ql_gpio_cfg[num].gpio_pull, _ql_gpio_cfg[num].gpio_lvl);
    }
}

static void ql_gpio_demo_thread(void *param)
{
    QL_GPIODEMO_LOG("gpio demo thread enter, param 0x%x", param);

    ql_pin_set_func(QL_TEST1_PIN_GPIO0, QL_TEST1_PIN_GPIO0_FUNC_GPIO);      // TEST1_PIN set GPIO0, check STATUS LED on v1 
    ql_pin_set_func(QL_TEST1_PIN_GPIO1, QL_TEST1_PIN_GPIO1_FUNC_GPIO);      // TEST1_PIN set GPIO1

    _ql_gpio_demo_init();


    ql_rtos_task_delete(NULL);
}

void ql_gpio_app_init(void)
{
    QlOSStatus err = QL_OSI_SUCCESS;
    ql_task_t gpio_task = NULL;

    err = ql_rtos_task_create(&gpio_task, 1024, APP_PRIORITY_NORMAL, "ql_gpiodemo", ql_gpio_demo_thread, NULL, 1);
    if( err != QL_OSI_SUCCESS )
    {
        QL_GPIODEMO_LOG("gpio demo task created failed");
    }
}


