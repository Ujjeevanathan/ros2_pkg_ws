#!/usr/bin/env python3 
import cv2
import os
import rclpy 
from rclpy.node import Node 
import sys

from udemy_ros2_pkg.srv import TurnCamera
from cv_bridge import CvBridge 
from PyQt5 import QtCore, QtGui, QtWidgets
from PIL import Image as im

class TurnCameraClient(Node):
	def __init__(self):
		super().__init__('turn_camera_client_node')
		self.client = self.create_client(TurnCamera, 'turn_camera')
		self.req = TurnCamera.Request()
	

	def send_request(self, num):
		self.req.degree_turn = float(num)
		self.client.wait_for_service()
		self.future = self.client.call_async(self.req)
		rclpy.spin_until_future_complete(self, self.future)

		self.result = self.future.result()
		return self.result.image

	def display_image(self, image_msg):
		image = CvBridge().imgmsg_to_cv2(image_msg)
		cv2.imshow("Turn Camera Image", image)
		cv2.waitKey(0)
		cv2.destroyAllWindows()

class Ui_Form(object):
	def setupUi(self, Form):
		Form.setObjectName("Form")
		Form.resize(400, 300)
		self.sendButton = QtWidgets.QPushButton(Form)
		self.sendButton.setGeometry(QtCore.QRect(20, 260, 80, 23))
		self.sendButton.setObjectName("sendButton")
		self.sendDisplay = QtWidgets.QPushButton(Form)
		self.sendDisplay.setGeometry(QtCore.QRect(140, 260, 80, 23))
		self.sendDisplay.setObjectName("sendDisplay")
		self.exitButton = QtWidgets.QPushButton(Form)
		self.exitButton.setGeometry(QtCore.QRect(260, 260, 80, 23))
		self.exitButton.setObjectName("exitButton")
		self.label = QtWidgets.QLabel(Form)
		self.label.setGeometry(QtCore.QRect(100, 30, 221, 141))
		self.label.setText("")
		self.label.setObjectName("label")
		self.lineEdit = QtWidgets.QLineEdit(Form)
		self.lineEdit.setGeometry(QtCore.QRect(140, 220, 113, 23))
		self.lineEdit.setObjectName("lineEdit")
		self.label_2 = QtWidgets.QLabel(Form)
		self.label_2.setGeometry(QtCore.QRect(30, 220, 101, 16))
		self.label_2.setObjectName("label_2")

		self.retranslateUi(Form)
		QtCore.QMetaObject.connectSlotsByName(Form)

		rclpy.init()
		self.client_node = TurnCameraClient()

		self.sendButton.clicked.connect(self.send)
		self.sendDisplay.clicked.connect(self.display)
		self.exitButton.clicked.connect(Form.close)

	def retranslateUi(self, Form):
		_translate = QtCore.QCoreApplication.translate
		Form.setWindowTitle(_translate("Form", "Form"))
		self.sendButton.setText(_translate("Form", "Send"))
		self.sendDisplay.setText(_translate("Form", "Display"))
		self.exitButton.setText(_translate("Form", "Exit"))
		self.label_2.setText(_translate("Form", "Enter any angle"))

	def send(self):
		self.res = self.client_node.send_request(self.lineEdit.text())

	def display(self):
		image = CvBridge().imgmsg_to_cv2(self.res)
		data = im.fromarray(image)
		file_name = 'final.png'
		dir_name = os.path.dirname(__file__)
		install_dir_index = dir_name.index("install/")
		file_location = dir_name[0:install_dir_index] + "src/udemy_ros2_pkg/images/" + file_name
		data.save(file_location)
		self.label.setPixmap(QtGui.QPixmap(file_location))
		
	def __del__(self): 
		self.client_node.destroy_node()

if __name__ == "__main__":    
	app = QtWidgets.QApplication(sys.argv)
	Form = QtWidgets.QWidget()
	ui = Ui_Form()
	ui.setupUi(Form)
	Form.show()
	sys.exit(app.exec_())