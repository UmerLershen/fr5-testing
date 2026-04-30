from pathlib import Path
import sys

project_root = Path(__file__).resolve().parent.parent
sys.path.append(str(project_root))

from fairino import Robot
from endeffector import endeffector
import time


robot = Robot.RPC('192.168.58.2')
endEff = endeffector.endeffector()
endEff.set_force(100)

offset_pos = [0.0] * 6
epos = [0.0] * 4
tool = 0
user = 0
vel = 100.0
acc = 100.0
ovl = 100.0
oacc = 100.0
blendT = 0.0
blendR = 0.0
flag = 0
search = 0
blendMode = 0
velAccMode = 0

stand_pos = [-90,-90,-90,-90,90,-90]
pick_pos = [136.0157470703125, -112.07577514648438, -102.89337921142578, -56.9202766418457, 92.32605743408203, 15.07345962524414]
in_between_1 = [143.03329467773438, -109.84696197509766, -87.43050384521484, -70.5391845703125, 88.0174560546875, -152.19305419921875]
in_between_2 = [112.91443634033203, -91.8554916381836, -100.34542083740234, -77.55890655517578, 89.73828887939453, -75.10363006591797]
in_between_3 = [40.21953201293945, -91.78282928466797, -108.18791961669922, -64.39533233642578, 93.21475219726562, -75.08970642089844]
in_between_4 = [-13.75510025024414, -85.36964416503906, -108.10176849365234, -73.92906951904297, 90.94416809082031, -82.24299621582031]
place_pos =  [-90.2934799194336, -79.135498046875, -136.64447021484375, -55.504234313964844, 90.19818878173828, 127.22994995117188]

robot.MoveJ(joint_pos=pick_pos , tool = 0 , user = 0 , vel = 60 , acc = 60)
time.sleep(1)
endEff.set_position(0)
time.sleep(1)

robot.MoveJ(joint_pos= in_between_1, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos=in_between_2, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos= in_between_3, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos= in_between_4, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos=place_pos , tool=0,user=0 , vel= 60 , acc = 60)
time.sleep(1)
endEff.set_position(1000)


robot.MoveJ(joint_pos= stand_pos, tool= 0 , user= 0 , vel = 60 , acc= 60)
time.sleep(1)
robot.MoveJ(joint_pos=place_pos , tool=0,user=0 , vel= 60 , acc = 60)
time.sleep(1)

endEff.set_position(0)
time.sleep(1)
#robot.MoveJ(joint_pos=place_pos , tool=0,user=0 , vel= 60 , acc = 60)
robot.MoveJ(joint_pos= in_between_4, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos= in_between_3, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos= in_between_2, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos= in_between_1, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos=pick_pos , tool = 0 , user = 0 , vel = 60 , acc = 60)

endEff.set_position(1000)


robot.MoveJ(joint_pos= stand_pos , tool=0, user=0,vel=60,acc=60)
