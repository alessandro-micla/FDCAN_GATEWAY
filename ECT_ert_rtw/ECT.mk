###########################################################################
## Makefile generated for component 'ECT'. 
## 
## Makefile     : ECT.mk
## Generated on : Sun Feb 16 16:06:45 2025
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/ECT.elf
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file

PRODUCT_NAME              = ECT
MAKEFILE                  = ECT.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2024b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2024b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Users/aferreira/Documents/FDCAN_GATEWAY
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
COMPILER_COMMAND_FILE     = ECT_comp.rsp
CMD_FILE                  = ECT.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          GNU Tools for ARM Embedded Processors
# Supported Version(s):    
# ToolchainInfo Version:   2024b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# TARGET_LOAD_CMD_ARGS
# TARGET_LOAD_CMD
# MW_GNU_ARM_TOOLS_PATH
# FDATASECTIONS_FLG

#-----------
# MACROS
#-----------

LIBGCC                    = ${shell $(MW_GNU_ARM_TOOLS_PATH)/arm-none-eabi-gcc ${CFLAGS} -print-libgcc-file-name}
LIBC                      = ${shell $(MW_GNU_ARM_TOOLS_PATH)/arm-none-eabi-gcc ${CFLAGS} -print-file-name=libc.a}
LIBM                      = ${shell $(MW_GNU_ARM_TOOLS_PATH)/arm-none-eabi-gcc ${CFLAGS} -print-file-name=libm.a}
PRODUCT_NAME_WITHOUT_EXTN = $(basename $(PRODUCT))
PRODUCT_BIN               = $(PRODUCT_NAME_WITHOUT_EXTN).bin
PRODUCT_HEX               = $(PRODUCT_NAME_WITHOUT_EXTN).hex
CPFLAGS                   = -O binary
SHELL                     = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: GNU ARM Assembler
AS_PATH = $(MW_GNU_ARM_TOOLS_PATH)
AS = "$(AS_PATH)/arm-none-eabi-gcc"

# C Compiler: GNU ARM C Compiler
CC_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CC = "$(CC_PATH)/arm-none-eabi-gcc"

# Linker: GNU ARM Linker
LD_PATH = $(MW_GNU_ARM_TOOLS_PATH)
LD = "$(LD_PATH)/arm-none-eabi-g++"

# C++ Compiler: GNU ARM C++ Compiler
CPP_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CPP = "$(CPP_PATH)/arm-none-eabi-g++"

# C++ Linker: GNU ARM C++ Linker
CPP_LD_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CPP_LD = "$(CPP_LD_PATH)/arm-none-eabi-g++"

# Archiver: GNU ARM Archiver
AR_PATH = $(MW_GNU_ARM_TOOLS_PATH)
AR = "$(AR_PATH)/arm-none-eabi-ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Binary Converter: Binary Converter
OBJCOPYPATH = $(MW_GNU_ARM_TOOLS_PATH)
OBJCOPY = "$(OBJCOPYPATH)/arm-none-eabi-objcopy"

# Hex Converter: Hex Converter
OBJCOPYPATH = $(MW_GNU_ARM_TOOLS_PATH)
OBJCOPY = "$(OBJCOPYPATH)/arm-none-eabi-objcopy"

# Executable Size: Executable Size
EXESIZEPATH = $(MW_GNU_ARM_TOOLS_PATH)
EXESIZE = "$(EXESIZEPATH)/arm-none-eabi-size"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = -o
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /f/q
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
ASFLAGS              = -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -Wall \
                       -x assembler-with-cpp \
                       $(ASFLAGS_ADDITIONAL) \
                       $(DEFINES) \
                       $(INCLUDES) \
                       -c
OBJCOPYFLAGS_BIN     = -O binary $(PRODUCT) $(PRODUCT_BIN)
CFLAGS               = $(FDATASECTIONS_FLG) \
                       -Wall \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -c \
                       -O0
CPPFLAGS             = -std=gnu++14 \
                       -fno-rtti \
                       -fno-exceptions \
                       $(FDATASECTIONS_FLG) \
                       -Wall \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -c \
                       -O0
CPP_LDFLAGS          = -Wl,--gc-sections \
                       -Wl,-Map="$(PRODUCT_NAME).map"
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       =
EXESIZE_FLAGS        = $(PRODUCT)
EXECUTE_FLAGS        =
OBJCOPYFLAGS_HEX     = -O ihex $(PRODUCT) $(PRODUCT_HEX)
LDFLAGS              = -Wl,--gc-sections \
                       -Wl,-Map="$(PRODUCT_NAME).map"
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/ECT.elf
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DMW_NUM_UDP_RECEIVE_BLKS=0 -DMW_NUM_TCP_RECEIVE_BLKS=0 -DMW_NUM_TCP_TRANSMIT_BLKS=0 -DMW_NUM_UDP_TRANSMIT_BLKS=0 -DMW_NUM_THINGSPEAK_BLKS=0 -DLWIP_NETIF_HOSTNAME=1 -DMW_MAC_ADDR0=0x00 -DMW_MAC_ADDR1=0x80 -DMW_MAC_ADDR2=0xE1 -DMW_MAC_ADDR3=0x00 -DMW_MAC_ADDR4=0x00 -DMW_MAC_ADDR5=0x00
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=0
DEFINES_SKIPFORSIL = -DARM_MATH_CM7 -DCOMPONENT_FLASHIAP=1 -DCOMPONENT_NSPE=1 -DCOMPONENT_PSA_SRV_EMUL=1 -DCOMPONENT_PSA_SRV_IMPL=1 -DDEVICE_ANALOGIN=1 -DDEVICE_ANALOGOUT=1 -DDEVICE_CAN=1 -DDEVICE_CRC=1 -DDEVICE_EMAC=1 -DDEVICE_FLASH=1 -DDEVICE_I2C=1 -DDEVICE_I2CSLAVE=1 -DDEVICE_I2C_ASYNCH=1 -DDEVICE_INTERRUPTIN=1 -DDEVICE_LPTICKER=1 -DDEVICE_MPU=1 -DDEVICE_PORTIN=1 -DDEVICE_PORTINOUT=1 -DDEVICE_PORTOUT=1 -DDEVICE_PWMOUT=1 -DDEVICE_RTC=1 -DDEVICE_SERIAL=1 -DDEVICE_SERIAL_ASYNCH=1 -DDEVICE_SERIAL_FC=1 -DDEVICE_SLEEP=1 -DDEVICE_SPI=1 -DDEVICE_SPISLAVE=1 -DDEVICE_SPI_ASYNCH=1 -DDEVICE_STDIO_MESSAGES=1 -DDEVICE_TRNG=1 -DDEVICE_USBDEVICE=1 -DDEVICE_USTICKER=1 -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DFEATURE_IPV4=1 -DMBEDTLS_ENTROPY_HARDWARE_ALT -DMBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE=9600 -DMBED_RAM1_SIZE=0x20000 -DMBED_RAM1_START=0x20000000 -DMBED_RAM_SIZE=0x60000 -DMBED_RAM_START=0x20020000 -DMBED_ROM1_SIZE=0x200000 -DMBED_ROM1_START=0x200000 -DMBED_ROM_SIZE=0x200000 -DMBED_ROM_START=0x8000000 -DMBED_TICKLESS -DMBED_TRAP_ERRORS_ENABLED=1 -DNULL=0 -DSTM32F767xx -DSTM32_D11_SPI_ETHERNET_PIN=PA_7 -DTARGET_CORTEX -DTARGET_CORTEX_M -DTARGET_FAMILY_STM32 -DTARGET_FF_ARDUINO -DTARGET_LIKE_CORTEX_M7 -DTARGET_LIKE_MBED -DTARGET_M7 -DTARGET_NAME=NUCLEO_F767ZI -DTARGET_NUCLEO_F767ZI -DTARGET_RELEASE -DTARGET_STM -DTARGET_STM32F7 -DTARGET_STM32F767 -DTARGET_STM32F767ZI -DTARGET_STM32F767xI -DTARGET_STM_EMAC -DTARGET_UVISOR_UNSUPPORTED -DTOOLCHAIN_GCC -DTOOLCHAIN_GCC_ARM -DTOOLCHAIN_object -DTRANSACTION_QUEUE_SIZE_SPI=2 -DUSBHOST_OTHER -DUSE_HAL_DRIVER -DXCP_CUSTOM_PLATFORM -D__CORTEX_M7 -D__FPU_PRESENT=1 -D__FPU_USED=1U -D__MBED__=1 -DSTACK_SIZE=64 -DRT
DEFINES_STANDARD = -DMODEL=ECT -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/mbed/src/MW_AnalogInput.cpp C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/stmmbed/src/mwCanHalF7.c $(START_DIR)/ECT_ert_rtw/ECT.c $(START_DIR)/ECT_ert_rtw/ECT_data.c $(START_DIR)/ECT_ert_rtw/rt_nonfinite.c C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/stmnucleo/STM32F767ZI/src/mw_mbed_interface.cpp C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/mbed/src/BufferedSerial.cpp C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/stmnucleo/STM32F767ZI/src/stm32f7xx_init_board.c C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/stmnucleo/STM32F767ZI/src/MW_Timer.c C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/mbed/src/GCC/mbed_syscalls.c $(MATLAB_ROOT)/toolbox/target/shared/armcortexmbase/scheduler/src/SysTickScheduler.c $(MATLAB_ROOT)/toolbox/target/shared/armcortexmbase/scheduler/src/m3m4m4f_multitasking.c

MAIN_SRC = $(START_DIR)/ECT_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = MW_AnalogInput.o mwCanHalF7.o ECT.o ECT_data.o rt_nonfinite.o mw_mbed_interface.o BufferedSerial.o stm32f7xx_init_board.o MW_Timer.o mbed_syscalls.o SysTickScheduler.o m3m4m4f_multitasking.o

MAIN_OBJ = ert_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = C:/ProgramData/MATLAB/SupportPackages/R2024b/3P.instrset/cmsis_dsp.instrset/Lib/GCC/arm_cortexm7ldfdp_math/libCMSISDSP.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mlittle-endian -mthumb -mfpu=fpv5-d16 -mfloat-abi=hard -fdata-sections -ffunction-sections -fmessage-length=0 -fno-delete-null-pointer-checks -fomit-frame-pointer -funsigned-char -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wvla -include mbed_config.h
CFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mlittle-endian -mthumb -mfpu=fpv5-d16 -mfloat-abi=hard -fdata-sections -ffunction-sections -fmessage-length=0 -fno-delete-null-pointer-checks -fomit-frame-pointer -funsigned-char -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wvla -include mbed_config.h
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = @C:\Users\AFERRE~1\DOCUME~1\FDCAN_~1\ECT_ER~1\MBED_O~1.RSP
CPP_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=fpv5-d16 --entry=Reset_Handler --specs=nano.specs --specs=nosys.specs -T"C:\ProgramData\MATLAB\SupportPackages\R2024b\toolbox\target\supportpackages\stmnucleo\registry\../mbed/NUCLEO_F767ZI/TOOLCHAIN_GCC_ARM/STM32F767xI.ld"

CPP_LDFLAGS += $(CPP_LDFLAGS_) $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = @C:\Users\AFERRE~1\DOCUME~1\FDCAN_~1\ECT_ER~1\MBED_O~1.RSP
CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=fpv5-d16 --entry=Reset_Handler --specs=nano.specs --specs=nosys.specs -T"C:\ProgramData\MATLAB\SupportPackages\R2024b\toolbox\target\supportpackages\stmnucleo\registry\../mbed/NUCLEO_F767ZI/TOOLCHAIN_GCC_ARM/STM32F767xI.ld"

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_) $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_ = @C:\Users\AFERRE~1\DOCUME~1\FDCAN_~1\ECT_ER~1\MBED_O~1.RSP
LDFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=fpv5-d16 --entry=Reset_Handler --specs=nano.specs --specs=nosys.specs -T"C:\ProgramData\MATLAB\SupportPackages\R2024b\toolbox\target\supportpackages\stmnucleo\registry\../mbed/NUCLEO_F767ZI/TOOLCHAIN_GCC_ARM/STM32F767xI.ld"

LDFLAGS += $(LDFLAGS_) $(LDFLAGS_SKIPFORSIL)

#---------------------
# MEX C++ Compiler
#---------------------

MEX_CPP_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CPPFLAGS += $(MEX_CPP_Compiler_BASIC)

#-----------------
# MEX Compiler
#-----------------

MEX_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CFLAGS += $(MEX_Compiler_BASIC)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = @C:\Users\AFERRE~1\DOCUME~1\FDCAN_~1\ECT_ER~1\MBED_O~1.RSP
SHAREDLIB_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=fpv5-d16 --entry=Reset_Handler --specs=nano.specs --specs=nosys.specs -T"C:\ProgramData\MATLAB\SupportPackages\R2024b\toolbox\target\supportpackages\stmnucleo\registry\../mbed/NUCLEO_F767ZI/TOOLCHAIN_GCC_ARM/STM32F767xI.ld"

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_) $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


ALL_DEPS:=$(patsubst %.o,%.dep,$(ALL_OBJS))
all:

ifndef DISABLE_GCC_FUNCTION_DATA_SECTIONS
FDATASECTIONS_FLG := -ffunction-sections -fdata-sections
endif



-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk
-include ../../codertarget_assembly_flags.mk
-include mw_gnu_arm_tools_path.mk
-include ../mw_gnu_arm_tools_path.mk
-include ../../mw_gnu_arm_tools_path.mk
-include $(ALL_DEPS)


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild postbuild download execute


all : build postbuild
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


postbuild : $(PRODUCT)
	@echo "### Invoking postbuild tool "Binary Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_BIN)
	@echo "### Done invoking postbuild tool."
	@echo "### Invoking postbuild tool "Hex Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_HEX)
	@echo "### Done invoking postbuild tool."
	@echo "### Invoking postbuild tool "Executable Size" ..."
	$(EXESIZE) $(EXESIZE_FLAGS)
	@echo "### Done invoking postbuild tool."


download : postbuild


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) @$(CMD_FILE) $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : %.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/ECT_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/ECT_ert_rtw/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/ECT_ert_rtw/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/ECT_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/ECT_ert_rtw/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/ECT_ert_rtw/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/ECT_ert_rtw/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_AnalogInput.o : C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/mbed/src/MW_AnalogInput.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


mwCanHalF7.o : C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/stmmbed/src/mwCanHalF7.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ECT.o : $(START_DIR)/ECT_ert_rtw/ECT.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ECT_data.o : $(START_DIR)/ECT_ert_rtw/ECT_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ert_main.o : $(START_DIR)/ECT_ert_rtw/ert_main.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.o : $(START_DIR)/ECT_ert_rtw/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mw_mbed_interface.o : C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/stmnucleo/STM32F767ZI/src/mw_mbed_interface.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


BufferedSerial.o : C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/mbed/src/BufferedSerial.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


stm32f7xx_init_board.o : C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/stmnucleo/STM32F767ZI/src/stm32f7xx_init_board.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MW_Timer.o : C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/stmnucleo/STM32F767ZI/src/MW_Timer.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mbed_syscalls.o : C:/ProgramData/MATLAB/SupportPackages/R2024b/toolbox/target/supportpackages/mbed/src/GCC/mbed_syscalls.c
	$(CC) $(CFLAGS) -o "$@" "$<"


SysTickScheduler.o : $(MATLAB_ROOT)/toolbox/target/shared/armcortexmbase/scheduler/src/SysTickScheduler.c
	$(CC) $(CFLAGS) -o "$@" "$<"


m3m4m4f_multitasking.o : $(MATLAB_ROOT)/toolbox/target/shared/armcortexmbase/scheduler/src/m3m4m4f_multitasking.c
	$(CC) $(CFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### OBJCOPYFLAGS_BIN = $(OBJCOPYFLAGS_BIN)"
	@echo "### OBJCOPYFLAGS_HEX = $(OBJCOPYFLAGS_HEX)"
	@echo "### EXESIZE_FLAGS = $(EXESIZE_FLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files ..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(RM) *.dep
	$(ECHO) "### Deleted all derived files."


