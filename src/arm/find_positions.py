from pathlib import Path
import sys

project_root = Path(__file__).resolve().parent.parent
sys.path.append(str(project_root))

from fairino import Robot
from endeffector import endeffector
import time


robot = Robot.RPC('192.168.58.2')
myEndEffector = endeffector.endeffector()
#putting robot in manual mode and entering drag indicator mode
#robot.Mode(1)
#robot.DragTeachSwitch(state = 1)
#time.sleep(5)
input("Press enter to continue")
#robot.DragTeachSwitch(state=0


#myEndEffector.set_force(100)
#myEndEffector.set_position(0)
pickup1 = robot.GetActualJointPosDegree(flag=1)
print(pickup1)

input("Press enter to continue")

pickup2 = robot.GetActualJointPosDegree(flag=1)
#myEndEffector.set_position(1000)
print(pickup2)

robot.MoveJ(joint_pos = [-90,-90,-90,-90,90,-90], user = 0, tool= 0)
