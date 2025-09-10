// Proyecto: Encendido y apagado de LEDs en varios puertos del PIC16F877A

void main() {
    // Configurar puertos como salida
    TRISB = 0;   // Puerto B salida
    TRISC = 0;   // Puerto C salida
    TRISD = 0;   // Puerto D salida
    TRISE = 0;   // Puerto E salida

    // Inicializar en bajo (apagar LEDs)
    PORTB = 0;
    PORTC = 0;
    PORTD = 0;
    PORTE = 0;

    while(1) {
        // Encender LEDs (inversión de estado)
        PORTB = ~PORTB;
        PORTC = ~PORTC;
        PORTD = ~PORTD;
        PORTE = ~PORTE;
        delay_ms (500);
    }
}