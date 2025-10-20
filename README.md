# Projeto Laboratorios de HW TP1

Repositório para projeto da UC de Projeto de Laboratórios de HW.

Grupo x
- Carlos Silva
- Carlos Ferreira

```c
#include <stdio.h>

int main()
{
    printf("Hello World");
    return 0;
}
```

## ATmega328P ADC Conversion Formula

The ADC conversion result for the ATmega328P can be calculated using the following formula:

$$
V_{OUT} = \frac{ADC \times V_{REF}}{1024}
$$

Where:
- $V_{OUT}$: The analog voltage corresponding to the digital value.
- $ADC$: The 10-bit digital value (0 to 1023) obtained from the ADC.
- $V_{REF}$: The reference voltage used for the ADC.
