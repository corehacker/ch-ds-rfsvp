/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_mgr_node_utils.h
 * \author sandeepprakash
 *
 * \date   29-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_MGR_NODE_UTILS_H__
#define __RFSVP_MGR_NODE_UTILS_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_mgr_node_establish_conn_to_node (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_mgr_node_register_sock (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   PAL_SOCK_HDL    hl_sock_hdl);

RFSVP_RET_E rfsvp_mgr_node_deregister_sock (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   PAL_SOCK_HDL    hl_sock_hdl);

RFSVP_RET_E rfsvp_mgr_node_cleanup_socks (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt);

RFSVP_RET_E rfsvp_mgr_node_read_msg (
   PAL_SOCK_HDL hl_sock_hdl,
   uint8_t *puc_msg_buf,
   uint32_t ui_msg_buf_len,
   uint32_t *pui_msg_size);

RFSVP_RET_E rfsvp_mgr_node_send_msg (
   PAL_SOCK_HDL hl_sock_hdl,
   NODE_MSG_HDR_X *px_msg_hdr);

void rfsvp_mgr_node_log_status(
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt);

bool rfsvp_mgr_check_all_nodes_have_joined (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt);

RFSVP_RET_E rfsvp_mgr_node_get_active_sock_index (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   PAL_SOCK_HDL *phl_act_sock_hdl,
   uint32_t *pui_index);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_MGR_NODE_UTILS_H__ */
