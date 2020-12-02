
from PyQt5.QtWidgets import QMainWindow, QApplication, QDialog, QWidget 
from PyQt5.QtCore import QObject, Qt
from PyQt5 import QtWidgets
import sys, os

'''本程序显示模态对话框使用，分别使用QWidget和QDialog实现'''

class Main(QDialog):

    def __init__(self):
        super().__init__()
        self.setWindowTitle("主窗口")
        self.setWindowFlag(Qt.WindowContextHelpButtonHint, False)

        self.listwindows = []
        self.button = QtWidgets.QPushButton("弹出子窗", self)
        #self.button.clicked.connect(self.show_child)
        self.button.clicked.connect(self.show_child2)
 
    def show_child(self):
        self.child_window = Child()
        self.child_window.show()

    def show_child2(self):
        #self.child_window2 = Child2()
        #self.child_window2.show()
        self.listwindows.append(Child2())
        self.listwindows[-1].show()

    def reject(self):
        #print('reject')
        for subwin in self.listwindows:
            subwin.reject()
        super().reject()

class Child(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("我是子窗口1")
        self.setWindowModality(Qt.NonModal)
        self.label = QtWidgets.QLabel(self)
        self.label.setText('子窗口1')
        self.button = QtWidgets.QPushButton("子窗1", self)

class Child2(QDialog):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("我是子窗口2")
        self.setWindowFlag(Qt.WindowContextHelpButtonHint, False)
        self.setWindowModality(Qt.NonModal)
        self.label = QtWidgets.QLabel(self)
        self.label.setText('子窗口2')
        #self.button = QtWidgets.QPushButton("子窗2", self)

# 运行主窗口
if __name__ == "__main__":
    os.environ['QT_AUTO_SCREEN_SCALE_FACTOR'] = '1'
    app = QApplication(sys.argv)
    window = Main()
    window.show()
    sys.exit(app.exec_())

