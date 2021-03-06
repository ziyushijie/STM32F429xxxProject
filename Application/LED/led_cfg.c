#include "led_cfg.h"

///////////////////////////////////////////////////////////////////////////////
//////函	   数： 
//////功	   能： 
//////输入参数: 
//////输出参数: 
//////说	   明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T LED_Work_Init(void)
{
	LL_GPIO_InitTypeDef GPIO_InitStruct;
	//---GPIO的初始化
	GPIO_InitStruct.Pin = LED_WORK_BIT;									//---对应的GPIO的引脚
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;							//---配置状态为输出模式
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_VERY_HIGH;				//---GPIO的速度
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;				//---输出模式---推挽输出
	GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;								//---上拉
	GPIO_InitStruct.Alternate = LL_GPIO_AF_0;							//---配置为端口模式
	LL_GPIO_Init( LED_WORK_PORT, &GPIO_InitStruct );
	return 0;
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数： 
//////功	   能： 
//////输入参数: 
//////输出参数: 
//////说	   明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T LED_Work_ON( void )
{
	LL_GPIO_SetOutputPin( LED_WORK_PORT, LED_WORK_BIT );
	return 0;
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数： 
//////功	   能： 
//////输入参数: 
//////输出参数: 
//////说	   明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T LED_Work_OFF( void )
{
	LL_GPIO_ResetOutputPin( LED_WORK_PORT, LED_WORK_BIT );
	return 0;
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数： 
//////功	   能： 
//////输入参数: 
//////输出参数: 
//////说	   明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T LED_Work_Change( void )
{
	LL_GPIO_TogglePin( LED_WORK_PORT, LED_WORK_BIT );
	return 0;
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数： 
//////功	   能： 
//////输入参数: 
//////输出参数: 
//////说	   明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T LED_RGB_Init( void )
{
	return 0;
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数： 
//////功	   能： 
//////输入参数: 
//////输出参数: 
//////说	   明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T LED_Init( void )
{
	LED_Work_Init();
	LED_RGB_Init();
	return 0;
}