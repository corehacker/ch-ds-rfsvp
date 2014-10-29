/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_algo_msg.h
 * \author sandeepprakash
 *
 * \date   03-Dec-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_ALGO_MSG_H__
#define __RFSVP_SERVER_ALGO_MSG_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_node_handle_algo_msg_is_reachable (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_is_reachable_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_vote_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_vote_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_commit_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_commit_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_sync_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_sync_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_sync_update (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_abort_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_abort_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_lock_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

RFSVP_RET_E rfsvp_server_node_handle_algo_msg_lock_rsp (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   NODE_MSG_HDR_X *px_msg_header);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_ALGO_MSG_H__ */
