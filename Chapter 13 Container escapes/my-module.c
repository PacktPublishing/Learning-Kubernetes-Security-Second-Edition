#include <linux/init.h>      // Macros for module initialization and cleanup
#include <linux/module.h>    // Core header for kernel modules
#include <linux/kernel.h>    // Kernel-specific functions and macros

MODULE_LICENSE("GPL");                // License type
MODULE_AUTHOR("Your Name");           // Author name
MODULE_DESCRIPTION("A simple kernel module"); // Module description
MODULE_VERSION("0.1");                // Module version

// Function called when the module is loaded
static int __init my_module_init(void) {
    printk(KERN_INFO "Hello, Kernel! My module is loaded.\n");
    return 0; // Return 0 to indicate successful loading
}

// Function called when the module is removed
static void __exit my_module_exit(void) {
    printk(KERN_INFO "Goodbye, Kernel! My module is unloaded.\n");
}

// Register module entry and exit points
module_init(my_module_init);
module_exit(my_module_exit);
