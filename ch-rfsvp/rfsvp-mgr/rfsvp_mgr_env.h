/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_mgr_env.h
 * \author sandeepprakash
 *
 * \date   28-Oct-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_MGR_ENV_H__
#define __RFSVP_MGR_ENV_H__

#include "ch-pal/exp_pal.h"
#include "ch-utils/exp_sock_utils.h"
#include "ch-utils/exp_msgq.h"
#include "ch-utils/exp_task.h"
#include "ch-sockmon/exp_sockmon.h"

#include "../rfsvp-common/rfsvp_node_comm.h"

#include "../rfsvp-common/rfsvp.h"
#include "rfsvp_mgr.h"
#include "rfsvp_mgr_node.h"
#include "rfsvp_mgr_private.h"
#include "rfsvp_mgr_node_task.h"
#include "rfsvp_mgr_node_setup.h"
#include "rfsvp_mgr_node_utils.h"
#include "rfsvp_mgr_send_msg.h"
#include "rfsvp_mgr_cmd_task.h"
#include "rfsvp_mgr_cmd_parser.h"
#include "rfsvp_mgr_cmd_interpret.h"

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_MGR_ENV_H__ */
