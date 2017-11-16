#include <string.h>
#include "can_message.h"
#include "mcp2515.h"
#include "can_message_2_tCAN.h"

void can_message_2_tCAN(CAN_MESSAGE *in, tCAN *out)
{
	/* CAN ID */
	out->id = (uint16_t) in->ID;
	
	/* RTR */
	out->header.rtr = in->Remote;
	
	/* Length */
	out->header.length = in->Length;
	
	/* Data */
	memcpy(out->data,in->Data,8);
}

void tCAN_2_can_message(tCAN *in, CAN_MESSAGE *out)
{
	/* CAN ID */
	out->ID = (uint32_t) in->id;
	
	/* RTR */
	in->Remote = (uint8_t) out->header.rtr;
	
	/* Length */
	in->Length = (uint8_t) out->header.length;
	
	/* Data */
	memcpy(out->Data,in->data,8);
}


