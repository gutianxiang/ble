#include <stdio.h>
//log need head file
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"
//end

static void log_init(void)
{
	//init log moduel
	ret_code_t err_code = NRF_LOG_INIT(NULL);
	APP_ERROR_CHECK(err_code);
	//accorfing to SDK_config.h config output RTT or UART
	NRF_LOG_DEFAULT_BACKENDS_INIT();
}

int main(void)
{
	log_init();
	NRF_LOG_INFO("test started.");
	while(1)
	{
		
	}
	return 0;
}
