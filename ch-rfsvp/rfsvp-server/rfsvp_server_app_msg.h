/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_app_msg.h
 * \author sandeepprakash
 *
 * \date   03-Dec-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_APP_MSG_H__
#define __RFSVP_SERVER_APP_MSG_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_node_handle_app_msg_halt (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_app_msg_node_down (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_app_msg_node_up (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_app_msg_read (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_app_msg_write (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_APP_MSG_H__ */
