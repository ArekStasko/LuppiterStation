#include <stdio.h>
#include "Nvs_Service.h"
#include "Communication_Service.h"
#include "nvs_flash.h"

void app_main(void)
{
	nvs_flash_init();
    enable_service();
}
