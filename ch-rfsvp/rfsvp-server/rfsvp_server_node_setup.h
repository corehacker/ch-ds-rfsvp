/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_node_setup.h
 * \author sandeepprakash
 *
 * \date   29-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_NODE_SETUP_H__
#define __RFSVP_SERVER_NODE_SETUP_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_node_handle_setup_join_done (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_setup_establish_peers (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_forward_msg (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   NODE_MSG_HDR_X *px_msg_header);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_NODE_SETUP_H__ */
