/*
    File    : Registers.h
    Date    : 14/07/2022
    Author  : Ahmed Sheaira
    Version : 1
*/

#ifndef Registers_H_
#define Registers_H_

// CORTEXM4 Processor Register

// CORTEXM4 Peripherals Register
#define CORTEXM4_PERI_BASE 0xE000E000
// System Timer (SysTick) Registers
#define STCTRL    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X010)))
#define STRELOAD  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X014)))
#define STCURRENT (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X018)))
// Nested Vectored Interrupt Controller (NVIC) Registers
#define EN0     (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X100)))
#define EN1     (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X104)))
#define EN2     (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X108)))
#define EN3     (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X10C)))
#define EN4     (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X110)))
#define DIS0    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X180)))
#define DIS1    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X184)))
#define DIS2    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X188)))
#define DIS3    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X18C)))
#define DIS4    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X190)))
#define PEND0   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X200)))
#define PEND1   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X204)))
#define PEND2   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X208)))
#define PEND3   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X20C)))
#define PEND4   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X210)))
#define UNPEND0 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X280)))
#define UNPEND1 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X284)))
#define UNPEND2 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X288)))
#define UNPEND3 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X28C)))
#define UNPEND4 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X290)))
#define ACTIVE0 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X300)))
#define ACTIVE1 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X304)))
#define ACTIVE2 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X308)))
#define ACTIVE3 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X30C)))
#define ACTIVE4 (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X310)))
#define PRI0    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X400)))
#define PRI1    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X404)))
#define PRI2    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X408)))
#define PRI3    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X40C)))
#define PRI4    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X410)))
#define PRI5    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X414)))
#define PRI6    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X418)))
#define PRI7    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X41C)))
#define PRI8    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X420)))
#define PRI9    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X424)))
#define PRI10   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X428)))
#define PRI11   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X42C)))
#define PRI12   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X430)))
#define PRI13   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X434)))
#define PRI14   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X438)))
#define PRI15   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X43C)))
#define PRI16   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X440)))
#define PRI17   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X444)))
#define PRI18   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X448)))
#define PRI19   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X44C)))
#define PRI20   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X450)))
#define PRI21   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X454)))
#define PRI22   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X458)))
#define PRI23   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X45C)))
#define PRI24   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X460)))
#define PRI25   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X464)))
#define PRI26   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X468)))
#define PRI27   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X46C)))
#define PRI28   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X470)))
#define PRI29   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X474)))
#define PRI30   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X478)))
#define PRI31   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X47C)))
#define PRI32   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X480)))
#define PRI33   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X484)))
#define PRI34   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X488)))
#define SWTRIG  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XF00)))
// System Control Block (SCB) Registers
#define ACTLR      (*((volatile uint32*)(CORTEXM4_PERI_BASE+0X008)))
#define CPUID      (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD00)))
#define INTCTRL    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD04)))
#define VTABLE     (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD08)))
#define APINT      (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD0C)))
#define SYSCTRL    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD10)))
#define CFGCTRL    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD14)))
#define SYSPRI1    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD18)))
#define SYSPRI2    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD1C)))
#define SYSPRI3    (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD20)))
#define SYSHNDCTRL (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD24)))
#define FAULTSTAT  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD28)))
#define HFAULTSTAT (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD2C)))
#define MMADDR     (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD34)))
#define FAULTADDR  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD38)))
// Memory Protection Unit (MPU) Registers
#define MPUTYPE   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD90)))
#define MPUCTRL   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD94)))
#define MPUNUMBER (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD98)))
#define MPUBASE   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD9C)))
#define MPUATTR   (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XDA0)))
#define MPUBASE1  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XDA4)))
#define MPUATTR1  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XDA8)))
#define MPUBASE2  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XDAC)))
#define MPUATTR2  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XDB0)))
#define MPUBASE3  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XDB4)))
#define MPUATTR3  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XDB8)))
// Floating-Point Unit (FPU) Registers
#define CPAC  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XD88)))
#define FPCC  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XF34)))
#define FPCA  (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XF38)))
#define FPDSC (*((volatile uint32*)(CORTEXM4_PERI_BASE+0XF3C)))




#endif