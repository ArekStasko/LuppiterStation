#include <stdio.h>
#include "nvs_flash.h"
#include "Communication_Service.h"
#include "nvs_flash.h"

void app_main(void)
{
	nvs_flash_init();
    enable_service();
}
