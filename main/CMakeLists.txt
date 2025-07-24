idf_component_register(SRCS "LuppiterStation.c" "./services/CommunicationService/Communication_Service.c"
                    INCLUDE_DIRS "." "./services/CommunicationService"
                    REQUIRES nvs_flash driver esp_wifi)