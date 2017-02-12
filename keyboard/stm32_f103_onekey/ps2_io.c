#include <stdbool.h>
#include "ps2_io.h"
#include "ch.h"
#include "hal.h"


void clock_init(void)
{
    palSetPadMode(GPIOA, 0, PAL_MODE_INPUT);
}

void clock_lo(void)
{
    palSetPadMode(GPIOA, 0, PAL_MODE_OUTPUT_OPENDRAIN);
    palClearPad(GPIOA, 0);
}
void clock_hi(void)
{
    palSetPadMode(GPIOA, 0, PAL_MODE_OUTPUT_OPENDRAIN);
    palSetPad(GPIOA, 0);
}

bool clock_in(void)
{
    palSetPadMode(GPIOA, 0, PAL_MODE_INPUT);
    return palReadPad(GPIOA, 0);
}

void data_init(void)
{
    palSetPadMode(GPIOA, 1, PAL_MODE_INPUT);
}

void data_lo(void)
{
    palSetPadMode(GPIOA, 1, PAL_MODE_OUTPUT_OPENDRAIN);
    palClearPad(GPIOA, 1);
}
void data_hi(void)
{
    palSetPadMode(GPIOA, 1, PAL_MODE_OUTPUT_OPENDRAIN);
    palSetPad(GPIOA, 1);
}

bool data_in(void)
{
    palSetPadMode(GPIOA, 1, PAL_MODE_INPUT);
    return palReadPad(GPIOA, 1);
}

