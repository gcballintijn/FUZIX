#include <kernel.h>
#include <kdata.h>
#include <printf.h>
#include <devtty.h>
#include <ds1302.h>
#include <devide.h>
#include <blkdev.h>
#include <searle.h>
#include "config.h"

void map_init(void)
{
}

void device_init(void)
{
#ifdef CONFIG_IDE
	devide_init();
#endif
}