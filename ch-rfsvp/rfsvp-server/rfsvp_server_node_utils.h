/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_node_utils.h
 * \author sandeepprakash
 *
 * \date   29-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_NODE_UTILS_H__
#define __RFSVP_SERVER_NODE_UTILS_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_node_establish_conn_to_node (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_establish_conn_to_mgr (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_register_sock (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL    hl_sock_hdl);

RFSVP_RET_E rfsvp_server_node_deregister_sock (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL    hl_sock_hdl);

RFSVP_RET_E rfsvp_server_node_cleanup_socks (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_read_msg (
   PAL_SOCK_HDL hl_sock_hdl,
   uint8_t *puc_msg_buf,
   uint32_t ui_msg_buf_len,
   uint32_t *pui_msg_size);

RFSVP_RET_E rfsvp_server_node_send_msg (
   PAL_SOCK_HDL hl_sock_hdl,
   NODE_MSG_HDR_X *px_msg_hdr);

void rfsvp_server_node_log_status(
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

bool rfsvp_server_check_all_nodes_have_joined (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_get_active_tcp_sock_index (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   uint32_t *pui_index);

RFSVP_RET_E rfsvp_server_node_get_active_udp_sock_index (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header,
   PAL_SOCK_ADDR_IN_X *px_src_sock_addr_in,
   uint32_t *pui_index);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_NODE_UTILS_H__ */
