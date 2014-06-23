#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

#define FMT " log-level-test %s\n"

static int INIT(void)
{
	printk(FMT, "default\n");
	printk(KERN_DEBUG   FMT, KERN_DEBUG);
	printk(KERN_INFO    FMT, KERN_INFO);
	printk(KERN_NOTICE  FMT, KERN_NOTICE);
	printk(KERN_WARNING FMT, KERN_WARNING);
	printk(KERN_ERR     FMT, KERN_ERR);
	printk(KERN_CRIT    FMT, KERN_CRIT);
	printk(KERN_ALERT   FMT, KERN_ALERT);
	printk(KERN_EMERG   FMT, KERN_EMERG);
	return 0;
}

static void EXIT(void)
{
}
module_init(INIT);
module_exit(EXIT);
