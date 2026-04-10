from pathlib import Path
import sys

project_root = Path(__file__).resolve().parent.parent
sys.path.append(str(project_root))

from fairino import Robot
import time


#establish a connection with the robot
robot = Robot.RPC("192.168.58.2")


robot.RobotEnable(1)
#time.sleep(5)
#input("Press enter when ready to enable:")
#robot.RobotEnable(1)

robot.MoveJ(joint_pos = [-90,-90,-90,-90,90,-90], user = 0, tool= 0)

#robot.CloseRPC()