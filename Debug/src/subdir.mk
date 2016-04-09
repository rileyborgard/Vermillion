################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Class.cpp \
../src/MainScreen.cpp \
../src/Map.cpp \
../src/Panel.cpp \
../src/Unit.cpp \
../src/main.cpp 

OBJS += \
./src/Class.o \
./src/MainScreen.o \
./src/Map.o \
./src/Panel.o \
./src/Unit.o \
./src/main.o 

CPP_DEPS += \
./src/Class.d \
./src/MainScreen.d \
./src/Map.d \
./src/Panel.d \
./src/Unit.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"C:\Users\Riley\Desktop\C++\Vermillion\include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


