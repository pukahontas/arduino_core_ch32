/* Alternate pin name */

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
/* USB */
#ifdef USBCON
  USB_DM = PC_16,
  USB_DP = PC_17,
#endif

/* Define the alternate-function mapping for the pins to enable PWM */
/* Mappings come from the CH32X035RM.pdf reference manual for the AFIO_PCFR1 register */
/* This set of defines associates the remapped pins to their correct channels */
/* Set the AFIO_TIMx_MAP values below to the desired mapping for your project */
#define AFIO_TIM1_MAP 0
#define AFIO_TIM2_MAP 6
#define AFIO_TIM3_MAP 3

#ifndef AFIO_TIM1_MAP
  #define AFIO_TIM1_MAP      0
#endif

#ifndef AFIO_TIM2_MAP
  #define AFIO_TIM2_MAP      0
#endif

#ifndef AFIO_TIM3_MAP
  #define AFIO_TIM3_MAP      0
#endif

/* Define Timer 1 Remapping Pins */
#if AFIO_TIM1_MAP == 0         // (CH1/PB9, CH2/PB10, CH3/PB11, CH4/PC16, ETR/PC17, BKIN/PB5, C1N/PB6, C2N/PB7, C3N/PB8)
  #define PIN_TIM1_CH1      PB_9
  #define PIN_TIM1_CH2      PB_10
  #define PIN_TIM1_CH3      PB_11
  #define PIN_TIM1_CH4      PC_16
  #define PIN_TIM1_CH1N     PB_6
  #define PIN_TIM1_CH2N     PB_7
  #define PIN_TIM1_CH3N     PB_8
  #define AFIO_TIM1_Mapping      AFIO_NONE
#elif AFIO_TIM1_MAP == 1       // (CH1/PB9, CH2/PB10, CH3/PB11, CH4/PC16, ETR/PC17, BKIN/PA6, C1N/PA7, C2N/PB0, C3N/PB1) 
  #define PIN_TIM1_CH1      PB_9
  #define PIN_TIM1_CH2      PB_10
  #define PIN_TIM1_CH3      PB_11
  #define PIN_TIM1_CH4      PC_16
  #define PIN_TIM1_CH1N     PA_7
  #define PIN_TIM1_CH2N     PB_0
  #define PIN_TIM1_CH3N     PB_1
  #define AFIO_TIM1_Mapping      AFIO_PartialRemap1_TIM1_ENABLE
#elif AFIO_TIM1_MAP == 2       // (CH1/PB9, CH2/PB10, CH3/PB11, CH4/PB12, ETR/PC18, BKIN/PB5, C1N/PB6, C2N/PB7, C3N/PB8)
  #define PIN_TIM1_CH1      PB_9
  #define PIN_TIM1_CH2      PB_10
  #define PIN_TIM1_CH3      PB_11
  #define PIN_TIM1_CH4      PB_12
  #define PIN_TIM1_CH1N     PB_6
  #define PIN_TIM1_CH2N     PB_7
  #define PIN_TIM1_CH3N     PB_8
  #define AFIO_TIM1_Mapping      AFIO_PartialRemap2_TIM1_ENABLE
#elif AFIO_TIM1_MAP == 3       // (CH1/PC0, CH2/PC1, CH3/PC2, CH4/PC3, ETR/PC18, BKIN/PC4, C1N/PC5, C2N/PC6, C3N/PC7)
  #define PIN_TIM1_CH1      PC_0
  #define PIN_TIM1_CH2      PC_1
  #define PIN_TIM1_CH3      PC_2
  #define PIN_TIM1_CH4      PC_3
  #define PIN_TIM1_CH1N     PC_5
  #define PIN_TIM1_CH2N     PC_6
  #define PIN_TIM1_CH3N     PC_7
  #define AFIO_TIM1_Mapping      AFIO_PartialRemap3_TIM1_ENABLE
#elif AFIO_TIM1_MAP == 4       // (CH1/CH2/CH4/BKIN/C1N/C2N/C3N/cannot use, CH3/PC14, ETR/PC15) 
  #define PIN_TIM1_CH1      NC
  #define PIN_TIM1_CH2      NC
  #define PIN_TIM1_CH3      PC_14
  #define PIN_TIM1_CH4      NC
  #define PIN_TIM1_CH1N     NC
  #define PIN_TIM1_CH2N     NC
  #define PIN_TIM1_CH3N     NC
  #define AFIO_TIM1_Mapping      AFIO_FullRemap_TIM1_ENABLE
#endif


/* Define Timer 2 Remapping Pins */
#if AFIO_TIM2_MAP == 0         // (CH1/PA0, CH2/PA1, CH3/PA2, CH4/PA3, ETR/PA19, BKIN/PA20, C1N/PA21, C2N/PA22, C3N/PA23) 
  #define PIN_TIM2_CH1      PA_0
  #define PIN_TIM2_CH2      PA_1
  #define PIN_TIM2_CH3      PA_2
  #define PIN_TIM2_CH4      PA_3
  #define PIN_TIM2_CH1N     PA_21
  #define PIN_TIM2_CH2N     PA_22  
  #define PIN_TIM2_CH3N     PA_23
  #define AFIO_TIM2_Mapping      AFIO_NONE
#elif AFIO_TIM2_MAP == 1       // (CH1/PB21, CH2/PB15, CH3/PA2, CH4/PA3, ETR/PA18, BKIN/PA9, C1N/PA12, C2N/PA13, C3N/PA14) 
  #define PIN_TIM2_CH1      PB_21
  #define PIN_TIM2_CH2      PB_15
  #define PIN_TIM2_CH3      PA_2
  #define PIN_TIM2_CH4      PA_3
  #define PIN_TIM2_CH1N     PA_12
  #define PIN_TIM2_CH2N     PA_13  
  #define PIN_TIM2_CH3N     PA_14
  #define AFIO_TIM2_Mapping      AFIO_PartialRemap1_TIM2_ENABLE
#elif AFIO_TIM2_MAP == 2       // (CH1/PA0, CH2/PA1, CH3/PB3, CH4/PB4, ETR/PA19, BKIN/PA20, C1N/PC3, C2N/PA22, C3N/PA23) 
  #define PIN_TIM2_CH1      PA_0
  #define PIN_TIM2_CH2      PA_1
  #define PIN_TIM2_CH3      PB_3
  #define PIN_TIM2_CH4      PB_4
  #define PIN_TIM2_CH1N     PC_3
  #define PIN_TIM2_CH2N     PA_22  
  #define PIN_TIM2_CH3N     PA_23
  #define AFIO_TIM2_Mapping      AFIO_PartialRemap2_TIM2_ENABLE
#elif AFIO_TIM2_MAP == 3       // (CH1/PB21, CH2/PB15, CH3/PB3, CH4/PB4, ETR/PA18, BKIN/PA9, C1N/PA12, C2N/PA13, C3N/PA14) 
  #define PIN_TIM2_CH1      PB_21
  #define PIN_TIM2_CH2      PB_15
  #define PIN_TIM2_CH3      PB_3
  #define PIN_TIM2_CH4      PB_4
  #define PIN_TIM2_CH1N     PA_12
  #define PIN_TIM2_CH2N     PA_13  
  #define PIN_TIM2_CH3N     PA_14
  #define AFIO_TIM2_Mapping      AFIO_PartialRemap3_TIM2_ENABLE
#elif AFIO_TIM2_MAP == 4       // (CH1/PB16, CH2/PB17, CH3/PB18, CH4/PB19, ETR/PC4, BKIN/PC0, C1N/PC1, C2N/PC2, C3N/PC3)
  #define PIN_TIM2_CH1      PB_16
  #define PIN_TIM2_CH2      PB_17
  #define PIN_TIM2_CH3      PB_18
  #define PIN_TIM2_CH4      PB_19
  #define PIN_TIM2_CH1N     PC_1
  #define PIN_TIM2_CH2N     PC_2  
  #define PIN_TIM2_CH3N     PC_3
  #define AFIO_TIM2_Mapping      AFIO_PartialRemap4_TIM2_ENABLE
#elif AFIO_TIM2_MAP == 5       // (CH1/PC19, CH2/PA12, CH3/PA13, CH4/PC0, ETR/PA2, BKIN/PB4, C1N/PC18, C2N/PB12, C3N/PB3) 
  #define PIN_TIM2_CH1      PC_19
  #define PIN_TIM2_CH2      PA_12
  #define PIN_TIM2_CH3      PA_13
  #define PIN_TIM2_CH4      PC_0
  #define PIN_TIM2_CH1N     PC_18
  #define PIN_TIM2_CH2N     PB_12  
  #define PIN_TIM2_CH3N     PB_3
  #define AFIO_TIM2_Mapping      AFIO_PartialRemap5_TIM2_ENABLE
#else                     // (CH1/PC19, CH2/PC14, CH3/PC15, CH4/PC0, ETR/PA2, BKIN/PB4, C1N/PB11, C2N/PB12, C3N/PB3) 
  #define PIN_TIM2_CH1      PC_19
  #define PIN_TIM2_CH2      PC_14
  #define PIN_TIM2_CH3      PC_15
  #define PIN_TIM2_CH4      PC_0
  #define PIN_TIM2_CH1N     PB_11
  #define PIN_TIM2_CH2N     PB_12  
  #define PIN_TIM2_CH3N     PB_3
  #define AFIO_TIM2_Mapping      AFIO_FullRemap_TIM2_ENABLE
#endif

/* Define Timer 2 Remapping Pins */
#if AFIO_TIM3_MAP == 0         //  (CH1/PA6, CH2/PA7) 
  #define PIN_TIM3_CH1      PA_6
  #define PIN_TIM3_CH2      PA_7
  #define AFIO_TIM3_Mapping      AFIO_NONE
#elif AFIO_TIM3_MAP == 1       //  (CH1/PB4, CH2/PB5) 
  #define PIN_TIM3_CH1      PB_4
  #define PIN_TIM3_CH2      PB_5
  #define AFIO_TIM3_Mapping      AFIO_PartialRemap1_TIM3_ENABLE
#elif AFIO_TIM3_MAP == 2       // (CH1/PC19, CH2/PC18) 
  #define PIN_TIM3_CH1      PC_19
  #define PIN_TIM3_CH2      PC_18
  #define AFIO_TIM3_Mapping      AFIO_PartialRemap2_TIM3_ENABLE
#else                     // (CH1/PA3, CH2/PA4)  
  #define PIN_TIM3_CH1      PA_3
  #define PIN_TIM3_CH2      PA_4
  #define AFIO_TIM3_Mapping      AFIO_FullRemap_TIM3_ENABLE
#endif
