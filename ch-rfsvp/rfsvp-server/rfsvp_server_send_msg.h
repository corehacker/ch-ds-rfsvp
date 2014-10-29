/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_send_msg.h
 * \author sandeepprakash
 *
 * \date   07-Oct-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_SEND_MSG_H__
#define __RFSVP_SERVER_SEND_MSG_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_node_send_join_to_mgr (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_send_establish_done_to_mgr (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_send_app_msg_cmd_rsp_to_mgr (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_APP_CMD_RSP_X *px_cmd_rsp);

RFSVP_RET_E rfsvp_server_node_send_udp_ping_to_all (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_send_udp_ping_to_node (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_is_reachable_to_all (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_send_is_reachable_to_node (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_is_reachable_rsp_to_node (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_vote_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index,
   NODE_VOTE_REQ_PURPOSE_E e_purpose);

RFSVP_RET_E rfsvp_server_node_send_vote_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_sync_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_sync_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index,
   NODE_MSG_ALGO_SYNC_RSP_X *px_sync_rsp);

RFSVP_RET_E rfsvp_server_node_send_sync_update (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index,
   NODE_MSG_ALGO_SYNC_UPDATE_X *px_sync_update);

RFSVP_RET_E rfsvp_server_node_send_commit_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_commit_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_abort_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_abort_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_lock_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_server_node_send_lock_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint32_t ui_index);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_SEND_MSG_H__ */
