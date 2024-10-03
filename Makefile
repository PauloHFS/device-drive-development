obj-m += hello-world.o # we are creating a kernel module called hello-world

all: # change directory to the kernel source directory and run make on the current directory to build the module
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean: # change directory to the kernel source directory and run make on the current directory to clean the module
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean