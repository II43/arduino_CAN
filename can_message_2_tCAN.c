/* Converting MATLAB-Simulink CAN_MESSAGE to / from MCP2515 tCAN format structure */

#include "can_message_2_tCAN.h"

void can_message_2_tCAN(CAN_DATATYPE *in, tCAN *out)
{
	/* CAN ID */
	out->id = (uint16_t) in->ID;
	
	/* RTR */
	out->header.rtr = in->Remote;
	
	/* Length */
	out->header.length = in->Length;
	
	/* Data */
	(void) memcpy(out->data,in->Data,out->header.length * sizeof(uint8_t));
}

void tCAN_2_can_message(tCAN *in, CAN_DATATYPE *out)
{
	/* CAN ID */
	out->ID = (uint32_t) in->id;
	
	/* RTR */
	out->Remote = (uint8_t) in->header.rtr;
	
	/* Length */
	out->Length = (uint8_t) in->header.length;
	
	/* Data */
	(void) memcpy(out->Data,in->data,out->Length * sizeof(uint8_t));
}


