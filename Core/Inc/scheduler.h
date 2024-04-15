/*
 * scheduler.h
 *
 *  Created on: Apr 4, 2024
 *      Author: HI
 */

#ifndef APP_SCHEDULER_H_
#define APP_SCHEDULER_H_

#include "stdint.h"

typedef struct{
	void (*pTask)(void);
	uint32_t 	Delay;
	uint32_t 	Period;
	uint8_t 	RunMe;

	uint32_t 	TaskID;
}sTask;


#define SCH_MAX_TASKS 			10
#define	NO_TASK_ID				0

#ifdef __cplusplus
extern "C" {
#endif

    void SCH_Init(void);
    void SCH_Update(void);
    uint32_t SCH_Add_Task(void (*p_function)(), uint32_t DELAY, uint32_t PERIOD);
    void SCH_Dispatch_Tasks(void);
    uint8_t SCH_Delete_Task(uint32_t TASK_ID);

#ifdef __cplusplus
}
#endif
#endif /* APP_SCHEDULER_H_ */
