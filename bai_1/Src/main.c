#include <stdint.h>

#define RCC_BASE            (0x40023800UL)
#define RCC_APB2ENR_OFFSET  (0x44UL)
#define RCC_APB2ENR         (*(volatile uint32_t *)(RCC_BASE + RCC_APB2ENR_OFFSET))

#define ADC1_BASE           (0x40012000UL)
#define ADC_CR1_OFFSET      (0x04UL)
#define ADC_CR1             (*(volatile uint32_t *)(ADC1_BASE + ADC_CR1_OFFSET))

#define RCC_APB2ENR_ADC1EN  (1UL << 8)     // Bật clock cho ADC1
#define ADC_CR1_SCAN        (1UL << 8)     // Bật bit SCAN

int main(void) {
    // BẬT CLOCK CHO ADC1
    RCC_APB2ENR |= RCC_APB2ENR_ADC1EN;

    // BẬT CHẾ ĐỘ SCAN
    ADC_CR1 |= ADC_CR1_SCAN;

    while (1) {
        // Vòng lặp vô hạn để giữ chương trình chạy
    }
}
