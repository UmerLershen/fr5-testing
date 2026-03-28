from fairino import Robot
import time


#establish a connection with the robot
robot = Robot.RPC("192.168.58.2")


robot.RobotEnable(0)
#time.sleep(5)
input("Press enter when ready to enable:")
robot.RobotEnable(1)


robot.CloseRPC()