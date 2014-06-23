KSRCDIR = /usr/src/kernels/$$(uname -r)
obj-m = log-level-test.o
all:
	make -C $(KSRCDIR) M=$(shell pwd) V=2 modules

