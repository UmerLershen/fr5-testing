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
pick_pos = [-165.83242797851562, -87.74856567382812, -135.341552734375, -43.19476318359375, 90.18035125732422, -27.801937103271484]
in_between_1 = [-131.9697265625, -65.96321868896484, -120.0268325805664, -79.77923583984375, 89.41696166992188, -10.072613716125488]
in_between_2 = [-8.838881492614746, -86.78807830810547, -110.05733489990234, -73.32623291015625, 89.46613311767578, -30.35772705078125]
place_pos =  [-5.995489597320557, -100.35346984863281, -120.6157455444336, -48.209747314453125, 90.70877838134766, -55.01539611816406]

robot.MoveJ(joint_pos=pick_pos , tool = 0 , user = 0 , vel = 60 , acc = 60)
endEff.set_position(0)

robot.MoveJ(joint_pos= in_between_1, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos= stand_pos, tool= 0 , user= 0 , vel = 60 , acc= 60)
robot.MoveJ(joint_pos= in_between_2, tool= 0 , user= 0 , vel = 60 , acc= 60)

robot.MoveJ(joint_pos=place_pos , tool=0,user=0 , vel= 60 , acc = 60)

endEff.set_position(1000)

robot.MoveJ(joint_pos= stand_pos , tool=0, user=0,vel=60,acc=60)


