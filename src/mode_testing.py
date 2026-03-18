from fairino import Robot
import time


#establish a connection with the robot
robot = Robot.RPC("192.168.58.2")

#putting robot in manual mode and entering drag indicator mode
robot.Mode(1)
time.sleep(5)

robot.DragTeachSwitch(state = 1)
#time.sleep(5)

error, state = robot.IsInDragTeach()
print("Drag state 0 : Non drag")
print("Drag state 1: Drag")
print(f"Robot Drag State: {state}")


input("Press enter when done dragging:")

robot.DragTeachSwitch(state = 0)
time.sleep(5)

error, state = robot.IsInDragTeach()
print(f"Robot Drag State: {state}")

robot.Mode(0)


robot.CloseRPC()

