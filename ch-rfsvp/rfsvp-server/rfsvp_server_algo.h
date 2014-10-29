/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_algo.h
 * \author sandeepprakash
 *
 * \date   05-Dec-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_ALGO_H__
#define __RFSVP_SERVER_ALGO_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_node_algo_init (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_algo_deinit (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

void rfsvp_server_node_print_voting_table (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

bool rfsvp_server_node_is_distinguished (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

RFSVP_RET_E rfsvp_server_node_do_update (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_ALGO_H__ */
