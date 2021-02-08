#ifndef __USART_H
#define __USART_H

typedef struct _USART_FIFO{
    uint8_t *ptr;
    uint32_t len;
    uint32_t *head;
    uint32_t *tail;
}USART_FIFO;

#endif