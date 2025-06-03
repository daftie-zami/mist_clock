#include <humidifier.h>

void humidifier_set(GPIO_PinState state){
	HAL_GPIO_WritePin(HUMIDIFER_GPIO_Port, HUMIDIFER_Pin, state);
}
