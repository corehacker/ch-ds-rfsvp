/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_node_msgs.h
 * \author sandeepprakash
 *
 * \date   24-Nov-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_NODE_MSGS_H__
#define __RFSVP_SERVER_NODE_MSGS_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_node_handle_tcp_msgs_from_nodes (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   uint8_t *puc_msg_data,
   uint32_t ui_msg_size);

RFSVP_RET_E rfsvp_server_node_handle_tcp_data_from_nodes (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   uint8_t *puc_msg_data,
   uint32_t ui_msg_size);

RFSVP_RET_E rfsvp_server_node_handle_tcp_conn_sock_act (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl);

RFSVP_RET_E rfsvp_server_node_handle_udp_conn_sock_act (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl);

RFSVP_RET_E rfsvp_server_node_handle_udp_msgs_from_nodes (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_ADDR_IN_X *px_src_sock_addr_in,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   uint8_t *puc_msg_data,
   uint32_t ui_msg_size);

RFSVP_RET_E rfsvp_server_node_handle_udp_data_from_nodes (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_ADDR_IN_X *px_src_sock_addr_in,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   uint8_t *puc_msg_data,
   uint32_t ui_msg_size);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_NODE_MSGS_H__ */
