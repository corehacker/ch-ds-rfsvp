/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_algo_task.h
 * \author sandeepprakash
 *
 * \date   02-Dec-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_ALGO_TASK_H__
#define __RFSVP_SERVER_ALGO_TASK_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/
#define RFSVP_SERVER_ALGO_TASK_Q_WAIT_TIMEOUT          (500)

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
void *rfsvp_server_node_algo_task (
   void *p_thread_args);

RFSVP_RET_E rfsvp_server_post_msg_to_algo_task_q (
   RFSVP_SERVER_CTXT_X *px_rfsvp_server_ctxt,
   uint8_t *puc_data,
   uint32_t ui_data_len);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_ALGO_TASK_H__ */
