INCLUDES = -I/home/shalmezad/wpilib/cpp/current/include 
LIB_DIR = -L/home/shalmezad/wpilib/cpp/current/lib
CC = arm-frc-linux-gnueabi-g++

#If you want strict, use -Wall, otherwise leave it out
C_FLAGS = -c -Wall $(INCLUDES) -std=gnu++11 
#C_FLAGS = -c $(INCLUDES) -std=gnu++11 

SOURCE_DIR = src/
OUT_DIR = bin/
OBJ_DIR = obj/
EXECUTABLE = Robot 
all:$(OUT_DIR)$(EXECUTABLE)

$(OUT_DIR)$(EXECUTABLE): \
                  $(OBJ_DIR)robot.o \
                  $(OBJ_DIR)robotmap.o \
                  $(OBJ_DIR)oi.o \
                  $(OBJ_DIR)drivetrain.o \
                  $(OBJ_DIR)drive.o \
                  $(OBJ_DIR)quarter_turn_clockwise.o \
                  $(OBJ_DIR)drive_two_feet.o \
                  $(OBJ_DIR)autonomous_group.o \
                  $(OBJ_DIR)autonomous_command.o \
                  $(OBJ_DIR)robot_math.o 
	$(CC) \
    $(OBJ_DIR)robot.o \
    $(OBJ_DIR)robotmap.o \
    $(OBJ_DIR)oi.o \
    $(OBJ_DIR)drivetrain.o \
    $(OBJ_DIR)drive.o \
    $(OBJ_DIR)quarter_turn_clockwise.o \
    $(OBJ_DIR)drive_two_feet.o \
    $(OBJ_DIR)autonomous_group.o \
    $(OBJ_DIR)autonomous_command.o \
    $(OBJ_DIR)robot_math.o \
  $(LIB_DIR) -lwpi \
  -o $(OUT_DIR)$(EXECUTABLE)

$(OBJ_DIR)robot.o : $(SOURCE_DIR)Robot.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)Robot.cpp \
  -o $(OBJ_DIR)robot.o

$(OBJ_DIR)robotmap.o : $(SOURCE_DIR)RobotMap.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)RobotMap.cpp \
  -o $(OBJ_DIR)robotmap.o

$(OBJ_DIR)oi.o : $(SOURCE_DIR)OI.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)OI.cpp \
  -o $(OBJ_DIR)oi.o

$(OBJ_DIR)drivetrain.o : $(SOURCE_DIR)Subsystems/DriveTrain.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)Subsystems/DriveTrain.cpp \
  -o $(OBJ_DIR)drivetrain.o

$(OBJ_DIR)drive.o : $(SOURCE_DIR)Commands/Drive.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)Commands/Drive.cpp \
  -o $(OBJ_DIR)drive.o

$(OBJ_DIR)quarter_turn_clockwise.o : $(SOURCE_DIR)Commands/QuarterTurnClockwise.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)Commands/QuarterTurnClockwise.cpp \
  -o $(OBJ_DIR)quarter_turn_clockwise.o

$(OBJ_DIR)drive_two_feet.o : $(SOURCE_DIR)Commands/DriveTwoFeet.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)Commands/DriveTwoFeet.cpp \
  -o $(OBJ_DIR)drive_two_feet.o

$(OBJ_DIR)autonomous_group.o : $(SOURCE_DIR)Commands/AutonomousGroup.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)Commands/AutonomousGroup.cpp \
  -o $(OBJ_DIR)autonomous_group.o

$(OBJ_DIR)autonomous_command.o : $(SOURCE_DIR)Commands/AutonomousCommand.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)Commands/AutonomousCommand.cpp \
  -o $(OBJ_DIR)autonomous_command.o

$(OBJ_DIR)robot_math.o : $(SOURCE_DIR)Util/RobotMath.cpp
	$(CC) \
  $(C_FLAGS) \
  $(SOURCE_DIR)Util/RobotMath.cpp \
  -o $(OBJ_DIR)robot_math.o





clean:
	rm -f $(OBJ_DIR)*.o
	rm -f $(OUT_DIR)$(EXECUTABLE)
