/*****************************************************************************
 * RFQuack configuration/
 *****************************************************************************/

/* ID definition */
#define RFQUACK_UNIQ_ID "HUZZAH_RF69HW"

/* Transport configuration */
#define RFQUACK_TRANSPORT_SERIAL
#define RFQUACK_SERIAL_BAUD_RATE 115200

/* Radio configuration */
#define RFQUACK_RADIO_RF69
#define RFQUACK_RADIO_HIGHPOWER 1 // for RF69HCW (note the "H")

#define RFQUACK_RADIO_PIN_CS 15
#define RFQUACK_RADIO_PIN_IRQ 4
#define RFQUACK_RADIO_PIN_RST 5

/* Enable RadioHAL debug messages */
#define RFQUACK_DEBUG_RADIO true
#define RFQUACK_DEV

/*****************************************************************************
 * /RFQuack configuration - DO NOT EDIT BELOW THIS LINE
 *****************************************************************************/

#include "rfquack.h"

void setup() { rfquack_setup(); }
void loop() { rfquack_loop(); }
