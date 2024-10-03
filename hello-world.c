#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Paulo Hernane Fontes e Silva");
MODULE_DESCRIPTION("Hello World module");

static int hello_world_init(void)
{
  printk(KERN_INFO "Hello World!\n");
  return 0;
}

static void hello_world_exit(void)
{
  printk(KERN_INFO "Goodbye World!\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);