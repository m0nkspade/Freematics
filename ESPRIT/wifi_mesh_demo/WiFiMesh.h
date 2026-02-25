/******************************************************************************
* Copyright (c) 2026 Zunicor LLC. All rights reserved.
*
* This software is proprietary and confidential. Unauthorized copying,
* distribution, or modification of this file, via any medium, is strictly
* prohibited.
******************************************************************************/
class WiFiMeshNode
{
public:
    bool begin(int channel, const char* id);
    bool send(char *data, size_t len);
    size_t receive(char *buffer, size_t size, int timeout = 5000);
};

class WiFiMeshRoot
{
public:
    bool begin(int channel, const char* id);
    bool send(char *data, size_t len);
    size_t receive(char *buffer, size_t size, int timeout = 5000);
private:
    uint8_t src_addr[6] = {0x0};
};
