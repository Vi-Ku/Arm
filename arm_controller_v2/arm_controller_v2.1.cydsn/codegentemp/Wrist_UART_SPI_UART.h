/*******************************************************************************
* File Name: Wrist_UART_SPI_UART.h
* Version 2.0
*
* Description:
*  This file provides constants and parameter values for the SCB Component in
*  SPI and UART modes.
*
* Note:
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_SPI_UART_Wrist_UART_H)
#define CY_SCB_SPI_UART_Wrist_UART_H

#include "Wrist_UART.h"


/***************************************
*   SPI Initial Parameter Constants
****************************************/

#define Wrist_UART_SPI_MODE                   (0u)
#define Wrist_UART_SPI_SUB_MODE               (0u)
#define Wrist_UART_SPI_CLOCK_MODE             (0u)
#define Wrist_UART_SPI_OVS_FACTOR             (16u)
#define Wrist_UART_SPI_MEDIAN_FILTER_ENABLE   (0u)
#define Wrist_UART_SPI_LATE_MISO_SAMPLE_ENABLE (0u)
#define Wrist_UART_SPI_RX_DATA_BITS_NUM       (8u)
#define Wrist_UART_SPI_TX_DATA_BITS_NUM       (8u)
#define Wrist_UART_SPI_WAKE_ENABLE            (0u)
#define Wrist_UART_SPI_BITS_ORDER             (1u)
#define Wrist_UART_SPI_TRANSFER_SEPARATION    (1u)
#define Wrist_UART_SPI_NUMBER_OF_SS_LINES     (1u)
#define Wrist_UART_SPI_RX_BUFFER_SIZE         (8u)
#define Wrist_UART_SPI_TX_BUFFER_SIZE         (8u)

#define Wrist_UART_SPI_INTERRUPT_MODE         (0u)

#define Wrist_UART_SPI_INTR_RX_MASK           (0u)
#define Wrist_UART_SPI_INTR_TX_MASK           (0u)

#define Wrist_UART_SPI_RX_TRIGGER_LEVEL       (7u)
#define Wrist_UART_SPI_TX_TRIGGER_LEVEL       (0u)

#define Wrist_UART_SPI_BYTE_MODE_ENABLE       (0u)
#define Wrist_UART_SPI_FREE_RUN_SCLK_ENABLE   (0u)
#define Wrist_UART_SPI_SS0_POLARITY           (0u)
#define Wrist_UART_SPI_SS1_POLARITY           (0u)
#define Wrist_UART_SPI_SS2_POLARITY           (0u)
#define Wrist_UART_SPI_SS3_POLARITY           (0u)


/***************************************
*   UART Initial Parameter Constants
****************************************/

#define Wrist_UART_UART_SUB_MODE              (0u)
#define Wrist_UART_UART_DIRECTION             (3u)
#define Wrist_UART_UART_DATA_BITS_NUM         (8u)
#define Wrist_UART_UART_PARITY_TYPE           (2u)
#define Wrist_UART_UART_STOP_BITS_NUM         (4u)
#define Wrist_UART_UART_OVS_FACTOR            (16u)
#define Wrist_UART_UART_IRDA_LOW_POWER        (0u)
#define Wrist_UART_UART_MEDIAN_FILTER_ENABLE  (1u)
#define Wrist_UART_UART_RETRY_ON_NACK         (0u)
#define Wrist_UART_UART_IRDA_POLARITY         (0u)
#define Wrist_UART_UART_DROP_ON_FRAME_ERR     (0u)
#define Wrist_UART_UART_DROP_ON_PARITY_ERR    (0u)
#define Wrist_UART_UART_WAKE_ENABLE           (0u)
#define Wrist_UART_UART_RX_BUFFER_SIZE        (8u)
#define Wrist_UART_UART_TX_BUFFER_SIZE        (8u)
#define Wrist_UART_UART_MP_MODE_ENABLE        (0u)
#define Wrist_UART_UART_MP_ACCEPT_ADDRESS     (0u)
#define Wrist_UART_UART_MP_RX_ADDRESS         (2u)
#define Wrist_UART_UART_MP_RX_ADDRESS_MASK    (255u)

#define Wrist_UART_UART_INTERRUPT_MODE        (0u)

#define Wrist_UART_UART_INTR_RX_MASK          (0u)
#define Wrist_UART_UART_INTR_TX_MASK          (0u)

#define Wrist_UART_UART_RX_TRIGGER_LEVEL      (7u)
#define Wrist_UART_UART_TX_TRIGGER_LEVEL      (0u)

#define Wrist_UART_UART_BYTE_MODE_ENABLE      (0u)
#define Wrist_UART_UART_CTS_ENABLE            (0u)
#define Wrist_UART_UART_CTS_POLARITY          (0u)
#define Wrist_UART_UART_RTS_POLARITY          (0u)
#define Wrist_UART_UART_RTS_FIFO_LEVEL        (4u)

/* SPI mode enum */
#define Wrist_UART_SPI_SLAVE  (0u)
#define Wrist_UART_SPI_MASTER (1u)

/* UART direction enum */
#define Wrist_UART_UART_RX    (1u)
#define Wrist_UART_UART_TX    (2u)
#define Wrist_UART_UART_TX_RX (3u)


/***************************************
*   Conditional Compilation Parameters
****************************************/

#if(Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG)

    /* Mode */
    #define Wrist_UART_SPI_MASTER_CONST       (1u)

    /* Direction */
    #define Wrist_UART_RX_DIRECTION           (1u)
    #define Wrist_UART_TX_DIRECTION           (1u)
    #define Wrist_UART_UART_RX_DIRECTION      (1u)
    #define Wrist_UART_UART_TX_DIRECTION      (1u)

    /* Only external RX and TX buffer for Uncofigured mode */
    #define Wrist_UART_INTERNAL_RX_SW_BUFFER   (0u)
    #define Wrist_UART_INTERNAL_TX_SW_BUFFER   (0u)

    /* Get RX and TX buffer size */
    #define Wrist_UART_RX_BUFFER_SIZE (Wrist_UART_rxBufferSize)
    #define Wrist_UART_TX_BUFFER_SIZE (Wrist_UART_txBufferSize)

    /* Return true if buffer is provided */
    #define Wrist_UART_CHECK_RX_SW_BUFFER (NULL != Wrist_UART_rxBuffer)
    #define Wrist_UART_CHECK_TX_SW_BUFFER (NULL != Wrist_UART_txBuffer)

    /* Always provide global variables to support RX and TX buffers */
    #define Wrist_UART_INTERNAL_RX_SW_BUFFER_CONST    (1u)
    #define Wrist_UART_INTERNAL_TX_SW_BUFFER_CONST    (1u)

    /* Get wakeup enable option */
    #define Wrist_UART_SPI_WAKE_ENABLE_CONST  (1u)
    #define Wrist_UART_CHECK_SPI_WAKE_ENABLE  (0u != Wrist_UART_scbEnableWake)
    #define Wrist_UART_UART_WAKE_ENABLE_CONST (1u)

    /* SPI/UART: TX or RX FIFO size */
    #if (Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1)
        #define Wrist_UART_SPI_UART_FIFO_SIZE (Wrist_UART_FIFO_SIZE)
    #else
        #define Wrist_UART_SPI_UART_FIFO_SIZE (Wrist_UART_GET_FIFO_SIZE(Wrist_UART_CTRL_REG & \
                                                                                    Wrist_UART_CTRL_BYTE_MODE))
    #endif /* (Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1) */

#else

    /* Internal RX and TX buffer: for SPI or UART */
    #if (Wrist_UART_SCB_MODE_SPI_CONST_CFG)

        /* SPI Direction */
        #define Wrist_UART_SPI_RX_DIRECTION (1u)
        #define Wrist_UART_SPI_TX_DIRECTION (1u)

        /* Get FIFO size */
        #if (Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1)
            #define Wrist_UART_SPI_UART_FIFO_SIZE    (Wrist_UART_FIFO_SIZE)
        #else
            #define Wrist_UART_SPI_UART_FIFO_SIZE \
                                           Wrist_UART_GET_FIFO_SIZE(Wrist_UART_SPI_BYTE_MODE_ENABLE)

        #endif /* (Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1) */

        /* SPI internal RX and TX buffers */
        #define Wrist_UART_INTERNAL_SPI_RX_SW_BUFFER  (Wrist_UART_SPI_RX_BUFFER_SIZE > \
                                                                Wrist_UART_SPI_UART_FIFO_SIZE)
        #define Wrist_UART_INTERNAL_SPI_TX_SW_BUFFER  (Wrist_UART_SPI_TX_BUFFER_SIZE > \
                                                                Wrist_UART_SPI_UART_FIFO_SIZE)

        /* Internal SPI RX and TX buffer */
        #define Wrist_UART_INTERNAL_RX_SW_BUFFER  (Wrist_UART_INTERNAL_SPI_RX_SW_BUFFER)
        #define Wrist_UART_INTERNAL_TX_SW_BUFFER  (Wrist_UART_INTERNAL_SPI_TX_SW_BUFFER)

        /* Internal SPI RX and TX buffer size */
        #define Wrist_UART_RX_BUFFER_SIZE         (Wrist_UART_SPI_RX_BUFFER_SIZE + 1u)
        #define Wrist_UART_TX_BUFFER_SIZE         (Wrist_UART_SPI_TX_BUFFER_SIZE)

        /* Get wakeup enable option */
        #define Wrist_UART_SPI_WAKE_ENABLE_CONST  (0u != Wrist_UART_SPI_WAKE_ENABLE)
        #define Wrist_UART_UART_WAKE_ENABLE_CONST (0u)

    #else

        /* UART Direction */
        #define Wrist_UART_UART_RX_DIRECTION (0u != (Wrist_UART_UART_DIRECTION & Wrist_UART_UART_RX))
        #define Wrist_UART_UART_TX_DIRECTION (0u != (Wrist_UART_UART_DIRECTION & Wrist_UART_UART_TX))

        /* Get FIFO size */
        #if (Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1)
            #define Wrist_UART_SPI_UART_FIFO_SIZE    (Wrist_UART_FIFO_SIZE)
        #else
            #define Wrist_UART_SPI_UART_FIFO_SIZE \
                                           Wrist_UART_GET_FIFO_SIZE(Wrist_UART_UART_BYTE_MODE_ENABLE)
        #endif /* (Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1) */

        /* UART internal RX and TX buffers */
        #define Wrist_UART_INTERNAL_UART_RX_SW_BUFFER  (Wrist_UART_UART_RX_BUFFER_SIZE > \
                                                                Wrist_UART_SPI_UART_FIFO_SIZE)
        #define Wrist_UART_INTERNAL_UART_TX_SW_BUFFER  (Wrist_UART_UART_TX_BUFFER_SIZE > \
                                                                    Wrist_UART_SPI_UART_FIFO_SIZE)

        /* Internal UART RX and TX buffer */
        #define Wrist_UART_INTERNAL_RX_SW_BUFFER  (Wrist_UART_INTERNAL_UART_RX_SW_BUFFER)
        #define Wrist_UART_INTERNAL_TX_SW_BUFFER  (Wrist_UART_INTERNAL_UART_TX_SW_BUFFER)

        /* Internal UART RX and TX buffer size */
        #define Wrist_UART_RX_BUFFER_SIZE         (Wrist_UART_UART_RX_BUFFER_SIZE + 1u)
        #define Wrist_UART_TX_BUFFER_SIZE         (Wrist_UART_UART_TX_BUFFER_SIZE)

        /* Get wakeup enable option */
        #define Wrist_UART_SPI_WAKE_ENABLE_CONST  (0u)
        #define Wrist_UART_UART_WAKE_ENABLE_CONST (0u != Wrist_UART_UART_WAKE_ENABLE)

    #endif /* (Wrist_UART_SCB_MODE_SPI_CONST_CFG) */

    /* Mode */
    #define Wrist_UART_SPI_MASTER_CONST   (Wrist_UART_SPI_MODE == Wrist_UART_SPI_MASTER)

    /* Direction */
    #define Wrist_UART_RX_DIRECTION ((Wrist_UART_SCB_MODE_SPI_CONST_CFG) ? \
                                            (Wrist_UART_SPI_RX_DIRECTION) : (Wrist_UART_UART_RX_DIRECTION))

    #define Wrist_UART_TX_DIRECTION ((Wrist_UART_SCB_MODE_SPI_CONST_CFG) ? \
                                            (Wrist_UART_SPI_TX_DIRECTION) : (Wrist_UART_UART_TX_DIRECTION))

    /* Internal RX and TX buffer: for SPI or UART. Used in conditional compilation check */
    #define Wrist_UART_CHECK_RX_SW_BUFFER (Wrist_UART_INTERNAL_RX_SW_BUFFER)
    #define Wrist_UART_CHECK_TX_SW_BUFFER (Wrist_UART_INTERNAL_TX_SW_BUFFER)

    /* Provide global variables to support RX and TX buffers */
    #define Wrist_UART_INTERNAL_RX_SW_BUFFER_CONST    (Wrist_UART_INTERNAL_RX_SW_BUFFER)
    #define Wrist_UART_INTERNAL_TX_SW_BUFFER_CONST    (Wrist_UART_INTERNAL_TX_SW_BUFFER)

    /* Wakeup for SPI */
    #define Wrist_UART_CHECK_SPI_WAKE_ENABLE  (Wrist_UART_SPI_WAKE_ENABLE_CONST)

#endif /* End (Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*       Type Definitions
***************************************/

/* Wrist_UART_SPI_INIT_STRUCT */
typedef struct
{
    uint32 mode;
    uint32 submode;
    uint32 sclkMode;
    uint32 oversample;
    uint32 enableMedianFilter;
    uint32 enableLateSampling;
    uint32 enableWake;
    uint32 rxDataBits;
    uint32 txDataBits;
    uint32 bitOrder;
    uint32 transferSeperation;
    uint32 rxBufferSize;
    uint8* rxBuffer;
    uint32 txBufferSize;
    uint8* txBuffer;
    uint32 enableInterrupt;
    uint32 rxInterruptMask;
    uint32 rxTriggerLevel;
    uint32 txInterruptMask;
    uint32 txTriggerLevel;
    uint8 enableByteMode;
    uint8 enableFreeRunSclk;
    uint8 polaritySs;
} Wrist_UART_SPI_INIT_STRUCT;

/* Wrist_UART_UART_INIT_STRUCT */
typedef struct
{
    uint32 mode;
    uint32 direction;
    uint32 dataBits;
    uint32 parity;
    uint32 stopBits;
    uint32 oversample;
    uint32 enableIrdaLowPower;
    uint32 enableMedianFilter;
    uint32 enableRetryNack;
    uint32 enableInvertedRx;
    uint32 dropOnParityErr;
    uint32 dropOnFrameErr;
    uint32 enableWake;
    uint32 rxBufferSize;
    uint8* rxBuffer;
    uint32 txBufferSize;
    uint8* txBuffer;
    uint32 enableMultiproc;
    uint32 multiprocAcceptAddr;
    uint32 multiprocAddr;
    uint32 multiprocAddrMask;
    uint32 enableInterrupt;
    uint32 rxInterruptMask;
    uint32 rxTriggerLevel;
    uint32 txInterruptMask;
    uint32 txTriggerLevel;
    uint8 enableByteMode;
    uint8 enableCts;
    uint8 ctsPolarity;
    uint8 rtsRxFifoLevel;
    uint8 rtsPolarity;
} Wrist_UART_UART_INIT_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

/* SPI specific functions */
#if(Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    void Wrist_UART_SpiInit(const Wrist_UART_SPI_INIT_STRUCT *config);
#endif /* (Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG) */

#if(Wrist_UART_SCB_MODE_SPI_INC)
    #define Wrist_UART_SpiIsBusBusy() ((uint32) (0u != (Wrist_UART_SPI_STATUS_REG & \
                                                              Wrist_UART_SPI_STATUS_BUS_BUSY)))

    #if (Wrist_UART_SPI_MASTER_CONST)
        void Wrist_UART_SpiSetActiveSlaveSelect(uint32 slaveSelect);
    #endif /*(Wrist_UART_SPI_MASTER_CONST) */

    #if !(Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1)
        void Wrist_UART_SpiSetSlaveSelectPolarity(uint32 slaveSelect, uint32 polarity);
    #endif /* !(Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1) */
#endif /* (Wrist_UART_SCB_MODE_SPI_INC) */

/* UART specific functions */
#if(Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    void Wrist_UART_UartInit(const Wrist_UART_UART_INIT_STRUCT *config);
#endif /* (Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG) */

#if(Wrist_UART_SCB_MODE_UART_INC)
    void Wrist_UART_UartSetRxAddress(uint32 address);
    void Wrist_UART_UartSetRxAddressMask(uint32 addressMask);

    /* UART RX direction APIs */
    #if(Wrist_UART_UART_RX_DIRECTION)
        uint32 Wrist_UART_UartGetChar(void);
        uint32 Wrist_UART_UartGetByte(void);

        #if !(Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1)
            /* UART APIs for Flow Control */
            void Wrist_UART_UartSetRtsPolarity(uint32 polarity);
            void Wrist_UART_UartSetRtsFifoLevel(uint32 level);
        #endif /* !(Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1) */
    #endif /* (Wrist_UART_UART_RX_DIRECTION) */

    /* UART TX direction APIs */
    #if(Wrist_UART_UART_TX_DIRECTION)
        #define Wrist_UART_UartPutChar(ch)    Wrist_UART_SpiUartWriteTxData((uint32)(ch))
        void Wrist_UART_UartPutString(const char8 string[]);
        void Wrist_UART_UartPutCRLF(uint32 txDataByte);

        #if !(Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1)
            /* UART APIs for Flow Control */
            void Wrist_UART_UartEnableCts(void);
            void Wrist_UART_UartDisableCts(void);
            void Wrist_UART_UartSetCtsPolarity(uint32 polarity);
        #endif /* !(Wrist_UART_CY_SCBIP_V0 || Wrist_UART_CY_SCBIP_V1) */
    #endif /* (Wrist_UART_UART_TX_DIRECTION) */
#endif /* (Wrist_UART_SCB_MODE_UART_INC) */

/* Common APIs RX direction */
#if(Wrist_UART_RX_DIRECTION)
    uint32 Wrist_UART_SpiUartReadRxData(void);
    uint32 Wrist_UART_SpiUartGetRxBufferSize(void);
    void   Wrist_UART_SpiUartClearRxBuffer(void);
#endif /* (Wrist_UART_RX_DIRECTION) */

/* Common APIs TX direction */
#if(Wrist_UART_TX_DIRECTION)
    void   Wrist_UART_SpiUartWriteTxData(uint32 txData);
    void   Wrist_UART_SpiUartPutArray(const uint8 wrBuf[], uint32 count);
    void   Wrist_UART_SpiUartClearTxBuffer(void);
    uint32 Wrist_UART_SpiUartGetTxBufferSize(void);
#endif /* (Wrist_UART_TX_DIRECTION) */

CY_ISR_PROTO(Wrist_UART_SPI_UART_ISR);

#if(Wrist_UART_UART_RX_WAKEUP_IRQ)
    CY_ISR_PROTO(Wrist_UART_UART_WAKEUP_ISR);
#endif /* (Wrist_UART_UART_RX_WAKEUP_IRQ) */


/***************************************
*     Buffer Access Macro Definitions
***************************************/

#if(Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /* RX direction */
    void   Wrist_UART_PutWordInRxBuffer  (uint32 idx, uint32 rxDataByte);
    uint32 Wrist_UART_GetWordFromRxBuffer(uint32 idx);

    /* TX direction */
    void   Wrist_UART_PutWordInTxBuffer  (uint32 idx, uint32 txDataByte);
    uint32 Wrist_UART_GetWordFromTxBuffer(uint32 idx);

#else
    /* RX direction */
    #if(Wrist_UART_INTERNAL_RX_SW_BUFFER_CONST)
        #define Wrist_UART_PutWordInRxBuffer(idx, rxDataByte) \
                do{                                                 \
                    Wrist_UART_rxBufferInternal[(idx)] = ((uint8) (rxDataByte)); \
                }while(0)

        #define Wrist_UART_GetWordFromRxBuffer(idx) Wrist_UART_rxBufferInternal[(idx)]

    #endif /* (Wrist_UART_INTERNAL_RX_SW_BUFFER_CONST) */

    /* TX direction */
    #if(Wrist_UART_INTERNAL_TX_SW_BUFFER_CONST)
        #define Wrist_UART_PutWordInTxBuffer(idx, txDataByte) \
                    do{                                             \
                        Wrist_UART_txBufferInternal[(idx)] = ((uint8) (txDataByte)); \
                    }while(0)

        #define Wrist_UART_GetWordFromTxBuffer(idx) Wrist_UART_txBufferInternal[(idx)]

    #endif /* (Wrist_UART_INTERNAL_TX_SW_BUFFER_CONST) */

#endif /* (Wrist_UART_TX_SW_BUFFER_ENABLE) */


/***************************************
*         SPI API Constants
***************************************/

/* SPI sub mode enum */
#define Wrist_UART_SPI_MODE_MOTOROLA      (0x00u)
#define Wrist_UART_SPI_MODE_TI_COINCIDES  (0x01u)
#define Wrist_UART_SPI_MODE_TI_PRECEDES   (0x11u)
#define Wrist_UART_SPI_MODE_NATIONAL      (0x02u)
#define Wrist_UART_SPI_MODE_MASK          (0x03u)
#define Wrist_UART_SPI_MODE_TI_PRECEDES_MASK  (0x10u)
#define Wrist_UART_SPI_MODE_NS_MICROWIRE  (Wrist_UART_SPI_MODE_NATIONAL)

/* SPI phase and polarity mode enum */
#define Wrist_UART_SPI_SCLK_CPHA0_CPOL0   (0x00u)
#define Wrist_UART_SPI_SCLK_CPHA0_CPOL1   (0x02u)
#define Wrist_UART_SPI_SCLK_CPHA1_CPOL0   (0x01u)
#define Wrist_UART_SPI_SCLK_CPHA1_CPOL1   (0x03u)

/* SPI bits order enum */
#define Wrist_UART_BITS_ORDER_LSB_FIRST   (0u)
#define Wrist_UART_BITS_ORDER_MSB_FIRST   (1u)

/* SPI transfer separation enum */
#define Wrist_UART_SPI_TRANSFER_SEPARATED     (0u)
#define Wrist_UART_SPI_TRANSFER_CONTINUOUS    (1u)

/* SPI slave select constants */
#define Wrist_UART_SPI_SLAVE_SELECT0    (Wrist_UART_SCB__SS0_POSISTION)
#define Wrist_UART_SPI_SLAVE_SELECT1    (Wrist_UART_SCB__SS1_POSISTION)
#define Wrist_UART_SPI_SLAVE_SELECT2    (Wrist_UART_SCB__SS2_POSISTION)
#define Wrist_UART_SPI_SLAVE_SELECT3    (Wrist_UART_SCB__SS3_POSISTION)

/* SPI slave select polarity settings */
#define Wrist_UART_SPI_SS_ACTIVE_LOW  (0u)
#define Wrist_UART_SPI_SS_ACTIVE_HIGH (1u)


/***************************************
*         UART API Constants
***************************************/

/* UART sub-modes enum */
#define Wrist_UART_UART_MODE_STD          (0u)
#define Wrist_UART_UART_MODE_SMARTCARD    (1u)
#define Wrist_UART_UART_MODE_IRDA         (2u)

/* UART direction enum */
#define Wrist_UART_UART_RX    (1u)
#define Wrist_UART_UART_TX    (2u)
#define Wrist_UART_UART_TX_RX (3u)

/* UART parity enum */
#define Wrist_UART_UART_PARITY_EVEN   (0u)
#define Wrist_UART_UART_PARITY_ODD    (1u)
#define Wrist_UART_UART_PARITY_NONE   (2u)

/* UART stop bits enum */
#define Wrist_UART_UART_STOP_BITS_1   (2u)
#define Wrist_UART_UART_STOP_BITS_1_5 (3u)
#define Wrist_UART_UART_STOP_BITS_2   (4u)

/* UART IrDA low power OVS enum */
#define Wrist_UART_UART_IRDA_LP_OVS16     (16u)
#define Wrist_UART_UART_IRDA_LP_OVS32     (32u)
#define Wrist_UART_UART_IRDA_LP_OVS48     (48u)
#define Wrist_UART_UART_IRDA_LP_OVS96     (96u)
#define Wrist_UART_UART_IRDA_LP_OVS192    (192u)
#define Wrist_UART_UART_IRDA_LP_OVS768    (768u)
#define Wrist_UART_UART_IRDA_LP_OVS1536   (1536u)

/* Uart MP: mark (address) and space (data) bit definitions */
#define Wrist_UART_UART_MP_MARK       (0x100u)
#define Wrist_UART_UART_MP_SPACE      (0x000u)

/* UART CTS/RTS polarity settings */
#define Wrist_UART_UART_CTS_ACTIVE_LOW    (0u)
#define Wrist_UART_UART_CTS_ACTIVE_HIGH   (1u)
#define Wrist_UART_UART_RTS_ACTIVE_LOW    (0u)
#define Wrist_UART_UART_RTS_ACTIVE_HIGH   (1u)

/* Sources of RX errors */
#define Wrist_UART_INTR_RX_ERR        (Wrist_UART_INTR_RX_OVERFLOW    | \
                                             Wrist_UART_INTR_RX_UNDERFLOW   | \
                                             Wrist_UART_INTR_RX_FRAME_ERROR | \
                                             Wrist_UART_INTR_RX_PARITY_ERROR)

/* Shifted INTR_RX_ERR defines ONLY for Wrist_UART_UartGetByte() */
#define Wrist_UART_UART_RX_OVERFLOW       (Wrist_UART_INTR_RX_OVERFLOW << 8u)
#define Wrist_UART_UART_RX_UNDERFLOW      (Wrist_UART_INTR_RX_UNDERFLOW << 8u)
#define Wrist_UART_UART_RX_FRAME_ERROR    (Wrist_UART_INTR_RX_FRAME_ERROR << 8u)
#define Wrist_UART_UART_RX_PARITY_ERROR   (Wrist_UART_INTR_RX_PARITY_ERROR << 8u)
#define Wrist_UART_UART_RX_ERROR_MASK     (Wrist_UART_UART_RX_OVERFLOW    | \
                                                 Wrist_UART_UART_RX_UNDERFLOW   | \
                                                 Wrist_UART_UART_RX_FRAME_ERROR | \
                                                 Wrist_UART_UART_RX_PARITY_ERROR)


/***************************************
*     Vars with External Linkage
***************************************/

#if(Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    extern const Wrist_UART_SPI_INIT_STRUCT  Wrist_UART_configSpi;
    extern const Wrist_UART_UART_INIT_STRUCT Wrist_UART_configUart;
#endif /* (Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*    Specific SPI Macro Definitions
***************************************/

#define Wrist_UART_GET_SPI_INTR_SLAVE_MASK(sourceMask)  ((sourceMask) & Wrist_UART_INTR_SLAVE_SPI_BUS_ERROR)
#define Wrist_UART_GET_SPI_INTR_MASTER_MASK(sourceMask) ((sourceMask) & Wrist_UART_INTR_MASTER_SPI_DONE)
#define Wrist_UART_GET_SPI_INTR_RX_MASK(sourceMask) \
                                             ((sourceMask) & (uint32) ~Wrist_UART_INTR_SLAVE_SPI_BUS_ERROR)

#define Wrist_UART_GET_SPI_INTR_TX_MASK(sourceMask) \
                                             ((sourceMask) & (uint32) ~Wrist_UART_INTR_MASTER_SPI_DONE)


/***************************************
*    Specific UART Macro Definitions
***************************************/

#define Wrist_UART_UART_GET_CTRL_OVS_IRDA_LP(oversample) \
        ((Wrist_UART_UART_IRDA_LP_OVS16   == (oversample)) ? Wrist_UART_CTRL_OVS_IRDA_LP_OVS16 : \
         ((Wrist_UART_UART_IRDA_LP_OVS32   == (oversample)) ? Wrist_UART_CTRL_OVS_IRDA_LP_OVS32 : \
          ((Wrist_UART_UART_IRDA_LP_OVS48   == (oversample)) ? Wrist_UART_CTRL_OVS_IRDA_LP_OVS48 : \
           ((Wrist_UART_UART_IRDA_LP_OVS96   == (oversample)) ? Wrist_UART_CTRL_OVS_IRDA_LP_OVS96 : \
            ((Wrist_UART_UART_IRDA_LP_OVS192  == (oversample)) ? Wrist_UART_CTRL_OVS_IRDA_LP_OVS192 : \
             ((Wrist_UART_UART_IRDA_LP_OVS768  == (oversample)) ? Wrist_UART_CTRL_OVS_IRDA_LP_OVS768 : \
              ((Wrist_UART_UART_IRDA_LP_OVS1536 == (oversample)) ? Wrist_UART_CTRL_OVS_IRDA_LP_OVS1536 : \
                                                                          Wrist_UART_CTRL_OVS_IRDA_LP_OVS16)))))))

#define Wrist_UART_GET_UART_RX_CTRL_ENABLED(direction) ((0u != (Wrist_UART_UART_RX & (direction))) ? \
                                                                     (Wrist_UART_RX_CTRL_ENABLED) : (0u))

#define Wrist_UART_GET_UART_TX_CTRL_ENABLED(direction) ((0u != (Wrist_UART_UART_TX & (direction))) ? \
                                                                     (Wrist_UART_TX_CTRL_ENABLED) : (0u))


/***************************************
*        SPI Register Settings
***************************************/

#define Wrist_UART_CTRL_SPI      (Wrist_UART_CTRL_MODE_SPI)
#define Wrist_UART_SPI_RX_CTRL   (Wrist_UART_RX_CTRL_ENABLED)
#define Wrist_UART_SPI_TX_CTRL   (Wrist_UART_TX_CTRL_ENABLED)


/***************************************
*       SPI Init Register Settings
***************************************/

#define Wrist_UART_SPI_SS_POLARITY \
             (((uint32) Wrist_UART_SPI_SS0_POLARITY << Wrist_UART_SPI_SLAVE_SELECT0) | \
              ((uint32) Wrist_UART_SPI_SS1_POLARITY << Wrist_UART_SPI_SLAVE_SELECT1) | \
              ((uint32) Wrist_UART_SPI_SS2_POLARITY << Wrist_UART_SPI_SLAVE_SELECT2) | \
              ((uint32) Wrist_UART_SPI_SS3_POLARITY << Wrist_UART_SPI_SLAVE_SELECT3))

#if(Wrist_UART_SCB_MODE_SPI_CONST_CFG)

    /* SPI Configuration */
    #define Wrist_UART_SPI_DEFAULT_CTRL \
                    (Wrist_UART_GET_CTRL_OVS(Wrist_UART_SPI_OVS_FACTOR) | \
                     Wrist_UART_GET_CTRL_BYTE_MODE (Wrist_UART_SPI_BYTE_MODE_ENABLE) | \
                     Wrist_UART_GET_CTRL_EC_AM_MODE(Wrist_UART_SPI_WAKE_ENABLE)      | \
                     Wrist_UART_CTRL_SPI)

    #define Wrist_UART_SPI_DEFAULT_SPI_CTRL \
                    (Wrist_UART_GET_SPI_CTRL_CONTINUOUS    (Wrist_UART_SPI_TRANSFER_SEPARATION)       | \
                     Wrist_UART_GET_SPI_CTRL_SELECT_PRECEDE(Wrist_UART_SPI_SUB_MODE &                   \
                                                                  Wrist_UART_SPI_MODE_TI_PRECEDES_MASK)     | \
                     Wrist_UART_GET_SPI_CTRL_SCLK_MODE     (Wrist_UART_SPI_CLOCK_MODE)                | \
                     Wrist_UART_GET_SPI_CTRL_LATE_MISO_SAMPLE(Wrist_UART_SPI_LATE_MISO_SAMPLE_ENABLE) | \
                     Wrist_UART_GET_SPI_CTRL_SCLK_CONTINUOUS(Wrist_UART_SPI_FREE_RUN_SCLK_ENABLE)     | \
                     Wrist_UART_GET_SPI_CTRL_SSEL_POLARITY (Wrist_UART_SPI_SS_POLARITY)               | \
                     Wrist_UART_GET_SPI_CTRL_SUB_MODE      (Wrist_UART_SPI_SUB_MODE)                  | \
                     Wrist_UART_GET_SPI_CTRL_MASTER_MODE   (Wrist_UART_SPI_MODE))

    /* RX direction */
    #define Wrist_UART_SPI_DEFAULT_RX_CTRL \
                    (Wrist_UART_GET_RX_CTRL_DATA_WIDTH(Wrist_UART_SPI_RX_DATA_BITS_NUM)     | \
                     Wrist_UART_GET_RX_CTRL_BIT_ORDER (Wrist_UART_SPI_BITS_ORDER)           | \
                     Wrist_UART_GET_RX_CTRL_MEDIAN    (Wrist_UART_SPI_MEDIAN_FILTER_ENABLE) | \
                     Wrist_UART_SPI_RX_CTRL)

    #define Wrist_UART_SPI_DEFAULT_RX_FIFO_CTRL \
                    Wrist_UART_GET_RX_FIFO_CTRL_TRIGGER_LEVEL(Wrist_UART_SPI_RX_TRIGGER_LEVEL)

    /* TX direction */
    #define Wrist_UART_SPI_DEFAULT_TX_CTRL \
                    (Wrist_UART_GET_TX_CTRL_DATA_WIDTH(Wrist_UART_SPI_TX_DATA_BITS_NUM) | \
                     Wrist_UART_GET_TX_CTRL_BIT_ORDER (Wrist_UART_SPI_BITS_ORDER)       | \
                     Wrist_UART_SPI_TX_CTRL)

    #define Wrist_UART_SPI_DEFAULT_TX_FIFO_CTRL \
                    Wrist_UART_GET_TX_FIFO_CTRL_TRIGGER_LEVEL(Wrist_UART_SPI_TX_TRIGGER_LEVEL)

    /* Interrupt sources */
    #define Wrist_UART_SPI_DEFAULT_INTR_SPI_EC_MASK   (Wrist_UART_NO_INTR_SOURCES)

    #define Wrist_UART_SPI_DEFAULT_INTR_I2C_EC_MASK   (Wrist_UART_NO_INTR_SOURCES)
    #define Wrist_UART_SPI_DEFAULT_INTR_SLAVE_MASK \
                    (Wrist_UART_SPI_INTR_RX_MASK & Wrist_UART_INTR_SLAVE_SPI_BUS_ERROR)

    #define Wrist_UART_SPI_DEFAULT_INTR_MASTER_MASK \
                    (Wrist_UART_SPI_INTR_TX_MASK & Wrist_UART_INTR_MASTER_SPI_DONE)

    #define Wrist_UART_SPI_DEFAULT_INTR_RX_MASK \
                    (Wrist_UART_SPI_INTR_RX_MASK & (uint32) ~Wrist_UART_INTR_SLAVE_SPI_BUS_ERROR)

    #define Wrist_UART_SPI_DEFAULT_INTR_TX_MASK \
                    (Wrist_UART_SPI_INTR_TX_MASK & (uint32) ~Wrist_UART_INTR_MASTER_SPI_DONE)

#endif /* (Wrist_UART_SCB_MODE_SPI_CONST_CFG) */


/***************************************
*        UART Register Settings
***************************************/

#define Wrist_UART_CTRL_UART      (Wrist_UART_CTRL_MODE_UART)
#define Wrist_UART_UART_RX_CTRL   (Wrist_UART_RX_CTRL_LSB_FIRST) /* LSB for UART goes first */
#define Wrist_UART_UART_TX_CTRL   (Wrist_UART_TX_CTRL_LSB_FIRST) /* LSB for UART goes first */


/***************************************
*      UART Init Register Settings
***************************************/

#if(Wrist_UART_SCB_MODE_UART_CONST_CFG)

    /* UART configuration */
    #if(Wrist_UART_UART_MODE_IRDA == Wrist_UART_UART_SUB_MODE)

        #define Wrist_UART_DEFAULT_CTRL_OVS   ((0u != Wrist_UART_UART_IRDA_LOW_POWER) ?              \
                                (Wrist_UART_UART_GET_CTRL_OVS_IRDA_LP(Wrist_UART_UART_OVS_FACTOR)) : \
                                (Wrist_UART_CTRL_OVS_IRDA_OVS16))

    #else

        #define Wrist_UART_DEFAULT_CTRL_OVS   Wrist_UART_GET_CTRL_OVS(Wrist_UART_UART_OVS_FACTOR)

    #endif /* (Wrist_UART_UART_MODE_IRDA == Wrist_UART_UART_SUB_MODE) */

    #define Wrist_UART_UART_DEFAULT_CTRL \
                                (Wrist_UART_GET_CTRL_BYTE_MODE  (Wrist_UART_UART_BYTE_MODE_ENABLE)  | \
                                 Wrist_UART_GET_CTRL_ADDR_ACCEPT(Wrist_UART_UART_MP_ACCEPT_ADDRESS) | \
                                 Wrist_UART_DEFAULT_CTRL_OVS                                              | \
                                 Wrist_UART_CTRL_UART)

    #define Wrist_UART_UART_DEFAULT_UART_CTRL \
                                    (Wrist_UART_GET_UART_CTRL_MODE(Wrist_UART_UART_SUB_MODE))

    /* RX direction */
    #define Wrist_UART_UART_DEFAULT_RX_CTRL_PARITY \
                                ((Wrist_UART_UART_PARITY_NONE != Wrist_UART_UART_PARITY_TYPE) ?      \
                                  (Wrist_UART_GET_UART_RX_CTRL_PARITY(Wrist_UART_UART_PARITY_TYPE) | \
                                   Wrist_UART_UART_RX_CTRL_PARITY_ENABLED) : (0u))

    #define Wrist_UART_UART_DEFAULT_UART_RX_CTRL \
                    (Wrist_UART_GET_UART_RX_CTRL_MODE(Wrist_UART_UART_STOP_BITS_NUM)                    | \
                     Wrist_UART_GET_UART_RX_CTRL_POLARITY(Wrist_UART_UART_IRDA_POLARITY)                | \
                     Wrist_UART_GET_UART_RX_CTRL_MP_MODE(Wrist_UART_UART_MP_MODE_ENABLE)                | \
                     Wrist_UART_GET_UART_RX_CTRL_DROP_ON_PARITY_ERR(Wrist_UART_UART_DROP_ON_PARITY_ERR) | \
                     Wrist_UART_GET_UART_RX_CTRL_DROP_ON_FRAME_ERR(Wrist_UART_UART_DROP_ON_FRAME_ERR)   | \
                     Wrist_UART_UART_DEFAULT_RX_CTRL_PARITY)

    #define Wrist_UART_UART_DEFAULT_RX_CTRL \
                                (Wrist_UART_GET_RX_CTRL_DATA_WIDTH(Wrist_UART_UART_DATA_BITS_NUM)        | \
                                 Wrist_UART_GET_RX_CTRL_MEDIAN    (Wrist_UART_UART_MEDIAN_FILTER_ENABLE) | \
                                 Wrist_UART_GET_UART_RX_CTRL_ENABLED(Wrist_UART_UART_DIRECTION))

    #define Wrist_UART_UART_DEFAULT_RX_FIFO_CTRL \
                                Wrist_UART_GET_RX_FIFO_CTRL_TRIGGER_LEVEL(Wrist_UART_UART_RX_TRIGGER_LEVEL)

    #define Wrist_UART_UART_DEFAULT_RX_MATCH_REG  ((0u != Wrist_UART_UART_MP_MODE_ENABLE) ?          \
                                (Wrist_UART_GET_RX_MATCH_ADDR(Wrist_UART_UART_MP_RX_ADDRESS) | \
                                 Wrist_UART_GET_RX_MATCH_MASK(Wrist_UART_UART_MP_RX_ADDRESS_MASK)) : (0u))

    /* TX direction */
    #define Wrist_UART_UART_DEFAULT_TX_CTRL_PARITY (Wrist_UART_UART_DEFAULT_RX_CTRL_PARITY)

    #define Wrist_UART_UART_DEFAULT_UART_TX_CTRL \
                                (Wrist_UART_GET_UART_TX_CTRL_MODE(Wrist_UART_UART_STOP_BITS_NUM)       | \
                                 Wrist_UART_GET_UART_TX_CTRL_RETRY_NACK(Wrist_UART_UART_RETRY_ON_NACK) | \
                                 Wrist_UART_UART_DEFAULT_TX_CTRL_PARITY)

    #define Wrist_UART_UART_DEFAULT_TX_CTRL \
                                (Wrist_UART_GET_TX_CTRL_DATA_WIDTH(Wrist_UART_UART_DATA_BITS_NUM) | \
                                 Wrist_UART_GET_UART_TX_CTRL_ENABLED(Wrist_UART_UART_DIRECTION))

    #define Wrist_UART_UART_DEFAULT_TX_FIFO_CTRL \
                                Wrist_UART_GET_TX_FIFO_CTRL_TRIGGER_LEVEL(Wrist_UART_UART_TX_TRIGGER_LEVEL)

    #define Wrist_UART_UART_DEFAULT_FLOW_CTRL \
                        (Wrist_UART_GET_UART_FLOW_CTRL_TRIGGER_LEVEL(Wrist_UART_UART_RTS_FIFO_LEVEL) | \
                         Wrist_UART_GET_UART_FLOW_CTRL_RTS_POLARITY (Wrist_UART_UART_RTS_POLARITY)   | \
                         Wrist_UART_GET_UART_FLOW_CTRL_CTS_POLARITY (Wrist_UART_UART_CTS_POLARITY)   | \
                         Wrist_UART_GET_UART_FLOW_CTRL_CTS_ENABLE   (Wrist_UART_UART_CTS_ENABLE))

    /* Interrupt sources */
    #define Wrist_UART_UART_DEFAULT_INTR_I2C_EC_MASK  (Wrist_UART_NO_INTR_SOURCES)
    #define Wrist_UART_UART_DEFAULT_INTR_SPI_EC_MASK  (Wrist_UART_NO_INTR_SOURCES)
    #define Wrist_UART_UART_DEFAULT_INTR_SLAVE_MASK   (Wrist_UART_NO_INTR_SOURCES)
    #define Wrist_UART_UART_DEFAULT_INTR_MASTER_MASK  (Wrist_UART_NO_INTR_SOURCES)
    #define Wrist_UART_UART_DEFAULT_INTR_RX_MASK      (Wrist_UART_UART_INTR_RX_MASK)
    #define Wrist_UART_UART_DEFAULT_INTR_TX_MASK      (Wrist_UART_UART_INTR_TX_MASK)

#endif /* (Wrist_UART_SCB_MODE_UART_CONST_CFG) */


/***************************************
* The following code is DEPRECATED and
* must not be used.
***************************************/

#define Wrist_UART_SPIM_ACTIVE_SS0    (Wrist_UART_SPI_SLAVE_SELECT0)
#define Wrist_UART_SPIM_ACTIVE_SS1    (Wrist_UART_SPI_SLAVE_SELECT1)
#define Wrist_UART_SPIM_ACTIVE_SS2    (Wrist_UART_SPI_SLAVE_SELECT2)
#define Wrist_UART_SPIM_ACTIVE_SS3    (Wrist_UART_SPI_SLAVE_SELECT3)

#endif /* CY_SCB_SPI_UART_Wrist_UART_H */


/* [] END OF FILE */
