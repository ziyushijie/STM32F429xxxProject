#ifndef __WM8510_CFG_H
#define __WM8510_CFG_H
#ifdef __cplusplus
extern "C" 
{
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "iic_task.h"
	
	//---SCL端口
	#define	WM8510_SCL_PORT				GPIOB
	#define WM8510_SCL_BIT				LL_GPIO_PIN_6
	//---SDA端口
	#define WM8510_SDA_PORT				GPIOB
	#define WM8510_SDA_BIT				LL_GPIO_PIN_7

	//===12M时钟下最小输出频率是156KHz----单位为HZ
	#define WM8510_FREQ					12000000UL
	#define WM8510_FREQ_MHZ				( WM8510_FREQ/1000000UL )
	//---PLL计算时能取值的最小值
	#define WM8510_PLLR_MIN				5
	//---PLL计算时能取值的最大值
	#define WM8510_PLLR_MAX				13
	//---PLL计算时能取值的最小值限制值
	#define WM8510_PLLR_MIN_LIMIT		6
	//---频率输出
	#define PDIV0_MDIV1_BDIV1_MAX		( WM8510_FREQ * WM8510_PLLR_MAX / 4					)
	#define PDIV0_MDIV1_BDIV1_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /4			)	
	#define PDIV0_MDIV2_BDIV1_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /2 /4			)	
	#define PDIV0_MDIV4_BDIV1_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /4 /4			)
	#define PDIV0_MDIV8_BDIV1_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /8 /4			)
	#define PDIV0_MDIV8_BDIV2_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /8 /2 /4		)
	#define PDIV0_MDIV8_BDIV4_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /8 /4 /4		)
	#define PDIV0_MDIV8_BDIV8_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /8 /8 /4		)
	#define PDIV0_MDIV4_BDIV32_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /4 /32 /4		)
	#define PDIV1_MDIV8_BDIV16_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /2 /8 /16 /4	)
	#define PDIV1_MDIV8_BDIV32_MIN		( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /2 /8 /32 /4	)
	#define PDIV1_MDIV12_BDIV32_MIN		( WM8510_FREQ * WM8510_PLLR_MIN /2 /12 /32 /4		)
	#define PDIV1_MDIV12_BDIV32			( WM8510_FREQ * WM8510_PLLR_MIN_LIMIT /2 /12 /32 /4	)
	#define WM8510_OUT_MAX_FREQ			( (WM8510_FREQ_MHZ*WM8510_PLLR_MAX /4 -1)*1000000UL )
	#define WM8510_OUT_MIN_FREQ			( ((PDIV1_MDIV12_BDIV32_MIN/1000)+1)*1000UL			)
	//===MCLK分频数
	enum WM8510_MCLKDIV_ENUM
	{
		MCLK_DIV_1		= 0,
		MCLK_DIV_1D5	= 1,
		MCLK_DIV_2		= 2,
		MCLK_DIV_3		= 3,
		MCLK_DIV_4		= 4,
		MCLK_DIV_6		= 5,
		MCLK_DIV_8		= 6,
		MCLK_DIV_12		= 7,
	};

	//===BCLK分频数
	enum WM8510_BCLKDIV_ENUM
	{
		BCLK_DIV_1		= 0,
		BCLK_DIV_2		= 1,
		BCLK_DIV_4		= 2,
		BCLK_DIV_8		= 3,
		BCLK_DIV_16		= 4,
		BCLK_DIV_32		= 5,
	};

	//===W8510寄存器地址
	#define WM8510_R0					( 0<<1  )
	#define WM8510_R1					( 1<<1  )
	#define WM8510_R2					( 2<<1  )
	#define WM8510_R3					( 3<<1  )
	#define WM8510_R4					( 4<<1  )
	#define WM8510_R5					( 5<<1  )
	#define WM8510_R6					( 6<<1  )
	#define WM8510_R7					( 7<<1  )
	#define WM8510_R8					( 8<<1  )
	#define WM8510_R10					( 10<<1 )
	#define WM8510_R11					( 11<<1 )
	#define WM8510_R14					( 14<<1 )
	#define WM8510_R15					( 15<<1 )
	#define WM8510_R24					( 24<<1 )
	#define WM8510_R25					( 25<<1 )
	#define WM8510_R27					( 27<<1 )
	#define WM8510_R28					( 28<<1 )
	#define WM8510_R29					( 29<<1 )
	#define WM8510_R30					( 30<<1 )
	#define WM8510_R32					( 32<<1 )
	#define WM8510_R33					( 33<<1 )
	#define WM8510_R34					( 34<<1 )
	#define WM8510_R35					( 35<<1 )
	#define WM8510_R36					( 36<<1 )
	#define WM8510_R37					( 37<<1 )
	#define WM8510_R38					( 38<<1 )
	#define WM8510_R39					( 39<<1 )
	#define WM8510_R40					( 40<<1 )
	#define WM8510_R44					( 44<<1 )
	#define WM8510_R45					( 45<<1 )
	#define WM8510_R47					( 47<<1 )
	#define WM8510_R49					( 49<<1 )
	#define WM8510_R50					( 50<<1 )
	#define WM8510_R54					( 54<<1 )
	#define	WM8510_R56					( 56<<1 )

	//===写命令
	#define WM8510_WADDR				0x34				// 1A-34
	//===读命令
	#define WM8510_RADDR				0x35				// 1B-35

	//WM8510寄存器功能位
	#define	R0_Reset					0x00 				//复位
	//R1
	#define	R1H_BUFDCOPEN				0x01
	#define	R1L_MIC2EN					0x40
	#define	R1L_PLLEN					0x20
	#define	R1L_MICBEN					0x10
	#define R1L_BIASEN					0x08
	#define	R1L_BUFIOEN					0x04
	#define	R1L_VMIDSEL_5K				0x03
	#define	R1L_VMIDSEL_500K			0x02
	#define	R1L_VMIDSEL_50K				0x01
	#define	R1L_VMIDSEL_OFF				0x00
	//R2
	#define	R2L_BOOSTEN					0x10
	#define	R2L_INPPGAEN				0x04
	#define	R2L_ADCEN					0x01
	//R3
	#define	R3L_MONOEN					0x80
	#define	R3L_SPKNEN					0x40
	#define	R3L_SPKPEN					0x20
	#define	R3L_MONOMIXEN				0x10
	#define R3L_SPKMIXEN				0x04
	#define	R3L_DACEN					0x01
	//R4
	#define	R4H_BCP						0x01
	#define	R4L_FRAMEP					0x80
	#define	R4L_WL_16bit				0x00
	#define	R4L_WL_20bit				0x20
	#define	R4L_WL_24bit				0x40
	#define	R4L_WL_32bit				0x60
	#define	R4L_FMT_Right				0x00
	#define	R4L_FMT_Left				0x08
	#define R4L_FMT_I2S					0x10
	#define	R4L_FMT_PCM					0x18
	#define	R4L_DACLRSWAP				0x04
	#define	R4L_ADCRSWAP				0x02
	//R5
	#define	R5L_DAC_COMP_OFF			0x00
	#define	R5L_DAC_COMP_uLAW 			0x10
	#define	R5L_DAC_COMP_ALAW			0x18
	#define	R5L_ADC_COMP_OFF			0x00
	#define	R5L_ADC_COMP_uLAW 			0x04
	#define	R5L_ADC_COMP_ALAW			0x06
	#define	R5L_LOOPBACK				0x01
	//R6
	#define R6H_CLKSEL					0x01
	#define R6L_MCLKDIV_1				( 0x00<<5 )
	#define R6L_MCLKDIV_15				( 0x01<<5 )		//1.5分频
	#define R6L_MCLKDIV_2				( 0x02<<5 )
	#define R6L_MCLKDIV_3				( 0x03<<5 )
	#define R6L_MCLKDIV_4				( 0x04<<5 )
	#define R6L_MCLKDIV_6				( 0x05<<5 )
	#define R6L_MCLKDIV_8				( 0x06<<5 )
	#define R6L_MCLKDIV_12				( 0x07<<5 )
	#define R6L_BCLKDIV_1				( 0x00<<2 )
	#define R6L_BCLKDIV_2				( 0x01<<2 )
	#define R6L_BCLKDIV_4				( 0x02<<2 )
	#define R6L_BCLKDIV_8				( 0x03<<2 )
	#define R6L_BCLKDIV_16				( 0x04<<2 )
	#define R6L_BCLKDIV_32				( 0x05<<2 )
	#define R6L_MS						 0x01

	//===BCLK的分频
	#define WM8510_BCLKDIV_1			( 0 << 2 )
	#define WM8510_BCLKDIV_2			( 1 << 2 )
	#define WM8510_BCLKDIV_4			( 2 << 2 )
	#define WM8510_BCLKDIV_8			( 3 << 2 )
	#define WM8510_BCLKDIV_16			( 4 << 2 )
	#define WM8510_BCLKDIV_32			( 5 << 2 )
										  		 
	//===MCLK的分频					   			 
	#define WM8510_MCLKDIV_1			( 0 << 5 )
	#define WM8510_MCLKDIV_1_5			( 1 << 5 )
	#define WM8510_MCLKDIV_2			( 2 << 5 )
	#define WM8510_MCLKDIV_3			( 3 << 5 )
	#define WM8510_MCLKDIV_4			( 4 << 5 )
	#define WM8510_MCLKDIV_6			( 5 << 5 )
	#define WM8510_MCLKDIV_8			( 6 << 5 )
	#define WM8510_MCLKDIV_12			( 7 << 5 )

	//R7
	#define R7L_SR_48kHz				( 0x00<<1 )
	#define R7L_SR_32kHz				( 0x01<<1 )
	#define R7L_SR_24kHz				( 0x02<<1 )
	#define R7L_SR_16kHz				( 0x03<<1 )
	#define R7L_SR_12kHz				( 0x04<<1 )
	#define R7L_SR_8kHz					( 0x05<<1 )
	#define R7L_SLOWCLKEN				 0x01
	//R8
	#define R8L_OPCLKDIV_1				( 0x00<<4 )
	#define R8L_OPCLKDIV_2				( 0x01<<4 )
	#define R8L_OPCLKDIV_3				( 0x02<<4 )
	#define R8L_OPCLKDIV_4				( 0x03<<4 )
	#define R8L_GPIOPOL					( 0x01<<3 )
	#define R8L_GPIOSEL_CSB				0x00
	#define R8L_GPIOSEL_Jack			0x01
	#define R8L_GPIOSEL_Temp			0x02
	#define R8L_GPIOSEL_Amute			0x03
	#define R8L_GPIOSEL_PLLLCK			0x04
	#define R8L_GPIOSEL_Lock			0x05

	//===PLL输出分频
	#define WM8510_OPCLKDIV_1			( 0 << 4 )
	#define WM8510_OPCLKDIV_2			( 1 << 4 )
	#define WM8510_OPCLKDIV_3			( 2 << 4 )
	#define WM8510_OPCLKDIV_4			( 3 << 4 )
										  
										  
	//R10								  
	#define R10L_DACMU					  
	#define R10L_DEEMPH_32kHz			( 0x01<<4 )
	#define R10L_DEEMPH_44kHz			( 0x02<<4 )
	#define R10L_DEEMPH_48kHz			( 0x03<<4 )
	#define R10L_DACOSR128				( 0x01<<3 )
	#define	R10L_AMUTE					( 0x01<<2 )
	#define	R10L_DACPOL					0x01
	//R40
	#define	R40L_MONOATTN				0x04
	#define	R40L_SPKATTN				0x02
	//R44
	#define R44H_MBVSEL					0x01
	#define	R44L_MIC2MODE				0x08
	#define R44L_MIC2_2INPPGA			0x04
	#define R44L_MICN2INPPGA			0x02
	#define R44L_MICP2INPPGA			0x01
	//R49
	#define	R49L_MONOBOOST				0x08
	#define R49L_SPKBOOST				0x04
	#define R49L_TSDEN					0x02
	#define	R49L_VROI					0x01

	//R50
	#define R50L_MIC2_2SPK				0x20
	#define	R50L_BYP2SPK				0x02
	#define R50L_DAC2SPK				0x01
	//R56
	#define R56L_MONOOUT				0x40
	#define R56L_MIC2_2MONO				0x04

	#define R56L_BYP2MONO				0x02
	#define R56L_DAC2MONO				0x01
	
	//---使用的通信方式
	#define I2C_WM8510HandlerType		pWM8510HandlerType->pI2CWM8510

	typedef struct _WM8510_HandlerType
	{
		UINT8_T		mclkDIV;			//---mclk的分频数
		UINT8_T		bclkDIV;			//---bclk的分频数
		UINT8_T		preDIV;				//---预分频数
		UINT8_T		pll_N;				//---pll的N值
		UINT8_T		R0[2];				//---寄存器R0的配置值
		UINT8_T		R1[2];				//---寄存器R1的配置值
		UINT8_T		nowR6[2];			//---寄存器R6的配置值
		UINT8_T		lastR6[2];			//---寄存器R6的配置值
		UINT8_T		nowR36[2];			//---寄存器R36的配置值
		UINT8_T		lastR36[2];			//---寄存器R36的配置值
		UINT8_T		nowR37[2];			//---寄存器R37的配置值
		UINT8_T		lastR37[2];			//---寄存器R37的配置值
		UINT8_T		nowR38[2];			//---寄存器R38的配置值
		UINT8_T		lastR38[2];			//---寄存器R38的配置值
		UINT8_T		nowR39[2];			//---寄存器R39的配置值
		UINT8_T		lastR39[2];			//---寄存器R39的配置值
		UINT32_T	pll_K;				//---pll的K值
		UINT32_T	oscFreq;			//---外部晶振频率
		float		pllRate;			//---pll的比值
		I2C_HandlerType I2CWM8510;
		pI2C_HandlerType pI2CWM8510;
	}WM8510_HandlerType, *pWM8510_HandlerType;
	extern  pWM8510_HandlerType pWM8510HandlerType;
	
	UINT8_T WM8510_IIC_Init( void );
	UINT8_T WM8510_IIC_SW_SendData( UINT8_T *pRegistValue, UINT8_T length );
	UINT8_T WM8510_IIC_SW_SendCmd( UINT8_T *pRegistValue );
	void WM8510_Calc_PllRate( UINT32_T freq );
	void WM8510_IIC_ResetDevice( void );
	void WM8510_IIC_SetFreqHz( UINT32_T freq );
	void WM8510_IIC_SetFreqKHz( float freqKHz );
	void WM8510_IIC_SetFreqMHz( float freqMHz );
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
#endif /*__WM8510_CFG_H */
