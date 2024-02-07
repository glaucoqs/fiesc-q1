#include "FreeRTOS.h"
#include "task.h"

void Tarefa1(void *pvParameters);
void Tarefa2(void *pvParameters);

float temperatura_compartilhada = 25.0;

int main(void)
{
    xTaskCreate(&Tarefa1, "Tarefa 1", 1024, NULL, 1, NULL);
    xTaskCreate(&Tarefa2, "Tarefa 2", 1024, NULL, 1, NULL);

    vTaskStartScheduler();

    return 0;
}

void Tarefa1(void *pvParameters)
{
    for (;;)
    {
        temperatura_compartilhada = temperatura_compartilhada + 1.5;
        printf("Tarefa 1. Temperatura:  %f\n",temperatura_compartilhada);
        vTaskDelay(pdMS_TO_TICKS(1000)); //1000 ms equivalentes a 1 segundo (1Hz)
    }
}

void Tarefa2(void *pvParameters)
{
    for (;;)
    {
        temperatura_compartilhada = (1.8 * temperatura_compartilhada) + 32;
        printf("Tarefa 2. Temperatura em Fahrenheit:  %f\n",temperatura_compartilhada);
        vTaskDelay(pdMS_TO_TICKS(500)); //500 ms equivalentes a 0,5 segundos (2Hz)
        //temperatura_compartilhada = ((temperatura_compartilhada - 32.0) * 5.0 / 9.0);  //Descomentar esta linha, caso queira retornar para Celsius.
    }
}

