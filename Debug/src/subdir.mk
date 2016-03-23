################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MainScreen.cpp \
../src/main.cpp 

OBJS += \
./src/MainScreen.o \
./src/main.o 

CPP_DEPS += \
./src/MainScreen.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"C:\Users\Riley\Desktop\C++\Vermillion\include" -I"C:\Users\Riley\Desktop\archives\libraries\SFML-2.0\include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


