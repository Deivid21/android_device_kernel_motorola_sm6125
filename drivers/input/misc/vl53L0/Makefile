#
# Kbuild for the vl53L0 drivers.
#

ccflags-y	+= -I$(src)/inc -I$(src)

obj-$(CONFIG_INPUT_STMVL53L0)	+= stmvl53l0.o
stmvl53l0-objs := stmvl53l0_module.o stmvl53l0_module-i2c.o
stmvl53l0-objs += src/vl53l0_api_calibration.o src/vl53l0_api_core.o
stmvl53l0-objs += src/vl53l0_api_histogram.o src/vl53l0_api_ranging.o
stmvl53l0-objs += src/vl53l0_api_strings.o src/vl53l0_api.o src/vl53l0_platform.o
stmvl53l0-objs += src/vl53l0_i2c_platform.o src/vl53l0_port_i2c.o
