/* Converting MATLAB-Simulink CAN_MESSAGE to / from MCP2515 tCAN format structure */

#ifndef CAN_MESSAGE_2_TCAN_H_
#define CAN_MESSAGE_2_TCAN_H_

void can_message_2_tCAN(CAN_MESSAGE *in, tCAN *out);
void tCAN_2_can_message(tCAN *in, CAN_MESSAGE *out);

#endif