from pathlib import Path
import sys

project_root = Path(__file__).resolve().parent.parent
sys.path.append(str(project_root))

from fairino import Robot
import time


#establish a connection with the robot
robot = Robot.RPC("192.168.58.2")

#check the sdk's version
error_version, version_number = robot.GetSDKVersion()
print(f"SDK Version: {version_number}")

#check controller's IP
error_ip , ip_number = robot.GetControllerIP()
print(f"Controller IP: {ip_number}")



robot.CloseRPC()