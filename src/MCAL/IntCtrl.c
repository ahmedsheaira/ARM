/*
    File    : IntCtrl_cfg.h
    Date    : 14/07/2022
    Author  : Ahmed Sheaira
    Version : 1
*/

#include "MCAL/IntCtrl.h"

/*
    Syntex          : void Int_Ctrl_init(void)
    Discription     : Initialize NVIC/SCB module by parsing the configuration into NVIC/SCB registers
    Sync/Async      : Synchronous Function
    Reentrancy      : Non Reentrant Function
    Parameters(in)  : None
    Parameters(out) : None
    Return Value    : None
*/

void Int_Ctrl_init(void)
{
    APINT = 0xFA05 | 0x
}

