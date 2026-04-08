from pathlib import Path
import sys

project_root = Path(__file__).resolve().parent.parent
sys.path.append(str(project_root))

from fairino import Robot
import time


robot = Robot.RPC('192.168.58.2')
desc_pos1 = [-419.524, -13.000, 351.569, -178.118, 0.314, 3.833]
desc_pos2 = [-321.222, 185.189, 335.520, -179.030, -1.284, -29.869]
desc_pos3 = [-487.434, 154.362, 308.576, 176.600, 0.268, -14.061]
desc_pos4 = [-443.165, 147.881, 480.951, 179.511, -0.775, -15.409]
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
robot.SetSpeed(20)


rtn = robot.MoveL(desc_pos=desc_pos2, tool=tool, user=user, vel=vel, acc=acc, ovl=ovl, blendR=blendR, blendMode=blendMode, exaxis_pos=epos, search=search, offset_flag=flag, offset_pos=offset_pos,oacc=oacc, velAccParamMode=velAccMode)
print(f"movel errcode:{rtn}")

time.sleep(5)

robot.MoveJ(joint_pos = [-90,-90,-90,-90,90,-90], user = 0, tool= 0)