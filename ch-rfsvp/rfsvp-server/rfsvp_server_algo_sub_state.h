/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_algo_sub_state.h
 * \author sandeepprakash
 *
 * \date   03-Dec-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_ALGO_SUB_STATE_H__
#define __RFSVP_SERVER_ALGO_SUB_STATE_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_algo_sub_state_reach_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_reach_waiting (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_reach_req_done (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_lock_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_lock_req_done (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_vote_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_vote_req_done (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_commit_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_sync_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_sync_progress (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_commit_req_done (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_abort_req (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_abort_req_done (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_algo_sub_state_complete (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_ALGO_SUB_STATE_H__ */
