################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MainScreen.cpp \
../src/Tile.cpp \
../src/TileMap.cpp \
../src/main.cpp 

OBJS += \
./src/MainScreen.o \
./src/Tile.o \
./src/TileMap.o \
./src/main.o 

CPP_DEPS += \
./src/MainScreen.d \
./src/Tile.d \
./src/TileMap.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"C:\Users\Riley\Desktop\C++\Vermillion\include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


