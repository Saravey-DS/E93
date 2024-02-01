/* DESCRIPTION: E93 Kernel Paging Source File
 * AUTHOR: Erdem Ersoy (eersoy93)
 * COPYRIGHT: Copyright (c) 2024 Erdem Ersoy (eersoy93).
 * LICENSE: Licensed with MIT License. See LICENSE file for details.
 */

#include "paging.h"
#include "kernel_main.h"

void allocate_page(void)
{
    uint32_t physical_address = 0;
    uint32_t page = kmalloc(1000, 1, &physical_address);

    char page_str[16] = "";
    hex_to_ascii(page, page_str);

    char physical_address_str[16] = "";
    hex_to_ascii(physical_address, physical_address_str);

    printk_color("Memory has been allocated. ", OUTPUT_COLOR);
    printk_color("Page: ", OUTPUT_COLOR);
    printk_color(page_str, VARIABLE_COLOR);
    printk_color("\nPhysical Address: ", OUTPUT_COLOR);
    printk_color(physical_address_str, VARIABLE_COLOR);
    printk_color("\n", OUTPUT_COLOR);
}