#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void){
    printf("===Sin signo ===\n");

    
    uint8_t brillo_led = 23;
    uint16_t contador_rpm = 1543;
    uint32_t tiempo_ejecucion = 723873;

    printf("variable Brillo led: %d\n", brillo_led);
    printf("Tamaño de brillo_led: %zu bytes\n", sizeof(brillo_led));

    printf("variable Contador RPM: %d\n", contador_rpm);
    printf("Tamaño de contador_rpm: %zu bytes\n", sizeof(contador_rpm));

    printf("variable Tiempo de ejecución: %d\n", tiempo_ejecucion);
    printf("Tamaño de tiempo_ejecucion: %zu bytes\n", sizeof(tiempo_ejecucion));



    printf("\n===Con signo ===\n");
 





    return 0;
}