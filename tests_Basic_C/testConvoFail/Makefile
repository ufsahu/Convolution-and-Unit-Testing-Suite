PULP_APP =  testConvoFail
PULP_APP_FC_SRCS = convo_test10.c
PULP_APP_HOST_SRCS = convo_test10.c
PULP_CFLAGS = -O2 -g
#-DDOTP
#riscy:
PULP_FC_ARCH_CFLAGS = -march=rv32imcxpulpv2 -D__riscv__ -DPULP_EXT
#zero-riscy:
#PULP_FC_ARCH_CFLAGS = -march=rv32imcxpulpslim -DRV_ISA_RV32=1 -D__riscv__

include $(PULP_SDK_HOME)/install/rules/pulp_rt.mk
