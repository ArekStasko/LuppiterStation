#include <stdio.h>
#include "esp_wifi.h"
#include "esp_now.h"
#include "esp_log.h"
#include <string.h>

static const char *TAG = "LUPPITER-C-STATION";
uint8_t broadcast_address[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

void on_data_recv(const uint8_t *mac, const uint8_t *data, int len)
{
    printf("%.*s\n", len, data);
}

void init_esp_now()
{
  esp_now_init();
  esp_now_register_recv_cb(on_data_recv);
}

void enable_service()
{
	esp_netif_init();
    esp_event_loop_create_default();
    esp_wifi_init(&(wifi_init_config_t)WIFI_INIT_CONFIG_DEFAULT());
    esp_wifi_set_mode(WIFI_MODE_STA);
    esp_wifi_set_channel(1, WIFI_SECOND_CHAN_NONE);
    esp_wifi_start();
    init_esp_now();
}