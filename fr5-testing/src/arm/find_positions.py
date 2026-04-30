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
list_pos =[]
while(input("Press enter to continue and s to stop") != "s"):
    list_pos.append(robot.GetActualJointPosDegree(flag=1))



#myEndEffector.set_position(1000)
for i in list_pos:
    print(i)

robot.MoveJ(joint_pos = [-90,-90,-90,-90,90,-90], user = 0, tool= 0)
