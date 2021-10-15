#define P2_TARGET_MHZ   300
#include "propeller.h"
#include "sys/p2es_clock.h"

#include <stdio.h>

#define RX_PIN 63
#define TX_PIN 62

void a(int a, int b, int c, int d, int e) {
    printf("a(%d, %d, %d, %d, %d)\n", a, b, c, d, e);
}

int main() {
    _clkset(_SETFREQ, _CLOCKFREQ);
    _uart_init(RX_PIN, TX_PIN, 230400);
    printf("$\n"); // start of test character

    a(1, 2, 3, 4, 5);

    printf("~\n"); // end of test character
    return 0;
}