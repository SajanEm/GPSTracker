/*================================================================
  Copyright (c) 2020 Quectel Wireless Solution, Co., Ltd.  All Rights Reserved.
  Quectel Wireless Solution Proprietary and Confidential.
=================================================================*/
/*=================================================================

                        EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

WHEN              WHO         WHAT, WHERE, WHY
------------     -------     -------------------------------------------------------------------------------

=================================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ql_app_feature_config.h"
#include "ql_api_osi.h"
#include "ql_log.h"
#include "ql_pin_cfg.h"
#include "nw_demo.h"
#include "gpio_demo.h"
#include "gpio_int_demo.h"
#include "datacall_demo.h"
#include "osi_demo.h"
#include "ql_dev_demo.h"
#include "adc_demo.h"
#include "led_cfg_demo.h"
#include "ql_sim_demo.h"
#include "power_demo.h"
#include "ql_api_dev.h"
#include "app_loader.h"
#include "hal_config.h"

#ifdef QL_APP_FEATURE_USB
#include "usb_demo.h"
#endif

#ifdef QL_APP_FEATURE_MMS
#include "mms_demo.h"
#endif

#ifdef QL_APP_FEATURE_UART
#include "uart_demo.h"
#endif
#ifdef QL_APP_FEATURE_RS485
#include "rs485_demo.h"
#endif
#ifdef QL_APP_FEATURE_AUDIO
#include "audio_demo.h"
#endif
#ifdef QL_APP_FEATURE_PWM_AUDIO_DEC
#include "pwm_audio_demo.h"
#endif
#ifdef QL_APP_FEATURE_LCD
#include "lcd_demo.h"
#endif
#ifdef QL_APP_FEATURE_LVGL
#include "lvgl_demo.h"
#endif
#ifdef QL_APP_FEATURE_HTTP
#include "http_demo.h"
#endif
#ifdef QL_APP_FEATURE_FTP
#include "ftp_demo.h"
#endif
#ifdef QL_APP_FEATURE_MQTT
#include "mqtt_demo.h"
#endif
#ifdef QL_APP_FEATURE_SSL
#include "ssl_demo.h"
#endif
#ifdef QL_APP_FEATURE_PING
#include "ping_demo.h"
#endif
#ifdef QL_APP_FEATURE_NTP
#include "ntp_demo.h"
#endif
#ifdef QL_APP_FEATURE_LBS
#include "lbs_demo.h"
#endif
#ifdef QL_APP_FEATURE_QTHSDK
#include "qthsdk_demo.h"
#endif
#ifdef QL_APP_FEATURE_SOCKET
#include "socket_demo.h"
#endif


#ifdef QL_APP_FEATURE_FILE_ZIP
#include "zip_demo.h"
#endif

#ifdef QL_APP_FEATURE_BT
#ifdef QL_APP_FEATURE_BT_A2DP_AVRCP
#include "bt_a2dp_avrcp_demo.h"
#endif
#ifdef QL_APP_FEATURE_BLE_GATT
#include "ble_gatt_demo.h"
#include "ble_hid_demo.h"
#endif

#endif

#ifdef QL_APP_FEATURE_FILE
#include "ql_fs_demo.h"
#endif
#ifdef QL_APP_FEATURE_SMS
#include "sms_demo.h"
#endif
#ifdef QL_APP_FEATURE_VOICE_CALL
#include "voice_call_demo.h"
#endif
#ifdef QL_APP_FEATURE_GNSS
#include "gnss_demo.h"
#endif
#ifdef QL_APP_FEATURE_HD_GNSS
#include "hd_gnss_demo.h"
#endif


#ifdef QL_APP_FEATURE_SPI
#include "spi_demo.h"
#endif

#ifdef QL_APP_FEATURE_SPI_NOR_FLASH
#include "spi_nor_flash_demo.h"
#endif

#ifdef QL_APP_FEATURE_SPI4_EXT_NOR_SFFS
#include "spi4_ext_nor_sffs_demo.h"
#endif

#ifdef QL_APP_FEATURE_SPI6_EXT_NOR
#include "spi6_ext_nor_flash_demo.h"
#endif

#ifdef QL_APP_FEATURE_SPI_NAND_FLASH
#include "spi_nand_flash_demo.h"
#endif


#ifdef QL_APP_FEATURE_CAMERA
#include "camera_demo.h"
#endif

#ifdef QL_APP_FEATURE_WIFISCAN
#include "wifi_scan_demo.h"
#endif

#ifdef QL_APP_FEATURE_HTTP_FOTA
#include "fota_http_demo.h"
#endif

#ifdef QL_APP_FEATURE_FTP_FOTA
#include "fota_ftp_demo.h"
#endif

#ifdef QL_APP_FEATURE_DECODER
#include "decoder_demo.h"
#endif

#ifdef QL_APP_FEATURE_APP_IMG_AT
#include "app_img_at_demo.h"
#endif

#ifdef QL_APP_FEATURE_VOLTE
#include "volte_demo.h"
#endif

#ifdef QL_APP_FEATURE_VSIM_ADAPT
#include "vsim_adapt_demo.h"
#endif

#ifdef QL_APP_FEATURE_KEYPAD
#include "keypad_demo.h"
#endif

#ifdef QL_APP_FEATURE_RTC
#include "ql_rtc_demo.h"
#endif

#ifdef QL_APP_FEATURE_SECURE_BOOT
#include "ql_api_dev.h"
#endif

#ifdef QL_APP_FEATURE_USB_CHARGE
#include "charge_demo.h"
#endif

#ifdef QL_APP_FEATURE_QCLOUD_IOT
#include "qcloud_demo.h"
#endif

#ifdef QL_APP_FEATURE_VIRT_AT
#include "ql_virt_at_demo.h"
#endif

#ifdef QL_APP_FEATURE_TTS
#include "tts_demo.h"
#endif

#ifdef QL_APP_FEATURE_I2C
#include "I2C_demo.h"
#endif

#ifdef QL_APP_FEATURE_PBK
#include "ql_pbk_demo.h"
#endif

#ifdef QL_APP_FEATURE_SDMMC
#include "ql_sdmmc_demo.h"
#endif

#ifdef QL_APP_FEATURE_ALI_LINKSDK
#include "ali_demo.h"
#endif

#ifdef QL_APP_FEATURE_USBNET
#include "usbnet_demo.h"
#endif

#ifdef QL_APP_FEATURE_FS_NAND_FLASH
#include "fs_nand_flash_demo.h"
#endif

#ifdef QL_APP_FEATURE_FS_NOR_FLASH
#include "fs_nor_flash_demo.h"
#endif

#ifdef QL_APP_FEATURE_SFTP
#include "sftp_demo.h"
#endif

#ifdef QL_APP_FEATURE_MXML
#include "mxml_demo.h"
#endif

#ifdef QL_APP_FEATURE_CLOUDOTA
#include "cloudota_demo.h"
#endif

#ifdef QL_APP_FEATURE_EMBED_NOR_FLASH
#include "embed_nor_flash_demo.h"
#endif

#ifdef QL_APP_FEATURE_EXT_NOR_FLASH
#include "ext_nor_flash_demo.h"
#endif

#ifdef QL_APP_FEATURE_HILINK
#include "hilink.h"
#endif

#ifdef QL_APP_FEATURE_PSM
#include "psm_demo.h"
#endif

#ifdef QL_APP_FEATURE_STK
#include "stk_demo.h"
#endif

#ifdef QL_APP_FEATURE_GPRS_DATA_TRANSFER
#include "gprs_data_transfer_demo.h"
#endif

#ifdef QL_APP_FEATURE_TP
#include "tp_demo.h"
#endif

#ifdef QL_APP_FEATURE_ALIOTSMARTCARD
#include "aliotsmartcard_demo.h"
#endif

#ifdef QL_APP_FEATURE_ALIPAY_IOT_SDK
extern void ql_alipay_iot_sdk_app_init(void);
#endif

#ifdef QL_APP_FEATURE_NTRIP_RTK
#include "ntrip_rtk_demo.h"
#endif

#ifdef QL_APP_FEATURE_LWM2M
#include "lwm2m_client_demo.h"
#endif

#ifdef QL_APP_FEATURE_ETHERNET
#include "ethernet_demo.h"
#endif
#ifdef QL_APP_FEATURE_WEBSOCKET
#include "websocket_demo.h"
#endif

#ifdef QL_APP_FEATURE_WIFI
#include "wifi_demo.h"
#endif

#ifdef QL_APP_FEATURE_L2TP
#include "l2tp_demo.h"
#endif

#ifdef QL_APP_FEATURE_KWS
#include "ql_kws_demo.h"
#endif

#define QL_INIT_LOG_LEVEL	QL_LOG_LEVEL_INFO
#define QL_INIT_LOG(msg, ...)			QL_LOG(QL_INIT_LOG_LEVEL, "ql_INIT", msg, ##__VA_ARGS__)
#define QL_INIT_LOG_PUSH(msg, ...)	QL_LOG_PUSH("ql_INIT", msg, ##__VA_ARGS__)

static void prvInvokeGlobalCtors(void)
{
    extern void (*__init_array_start[])();
    extern void (*__init_array_end[])();

    size_t count = __init_array_end - __init_array_start;
    for (size_t i = 0; i < count; ++i)
        __init_array_start[i]();
}

static void ql_init_demo_thread(void *param)
{
    QL_INIT_LOG("init demo thread enter, param 0x%x", param);

#if 1
    ql_gpio_app_init();
    ql_gpioint_app_init();
#endif

    ql_power_app_init();
#ifdef QL_APP_FEATURE_PSM
    //ql_psm_app_init();
#endif

#ifdef QL_APP_FEATURE_MQTT
	ql_mqtt_app_init();
#endif
#ifdef QL_APP_FEATURE_HD_GNSS   
    ql_hd_gnss_app_init();
#endif

    ql_rtos_task_sleep_ms(1000); 
    

    ql_rtos_task_delete(NULL);
}

int appimg_enter(void *param)
{
	QlOSStatus err = QL_OSI_SUCCESS;
	ql_task_t ql_init_task = NULL;
	
    QL_INIT_LOG("init demo enter APP: %s @ %s", QL_APP_VERSION, QL_APP_BUILD_RELEASE_TYPE);
    prvInvokeGlobalCtors();
    if(0 == strcasecmp(QL_APP_BUILD_RELEASE_TYPE, "release"))
    {
    	ql_dev_cfg_wdt(1);
        //open the kernel log
    	//ql_quec_trace_enable(1);
    }
    else
    {
    	ql_dev_cfg_wdt(0);
        //close the kernel log
    	//ql_quec_trace_enable(0);
    }
	
    err = ql_rtos_task_create(&ql_init_task, 1024*4, APP_PRIORITY_NORMAL, "ql_init", ql_init_demo_thread, NULL, 1);
	if(err != QL_OSI_SUCCESS)
    {
		QL_INIT_LOG("init failed");
	}
    
    return err;
}

void appimg_exit(void)
{
    QL_INIT_LOG("init demo exit");
}
