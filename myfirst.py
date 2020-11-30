#!/usr/bin/env python3

import sys, os
from PyQt5.uic import loadUi
from PyQt5.QtWidgets import QMainWindow, QApplication
from PyQt5.QtCore import QObject, pyqtSlot

class myfirst(QMainWindow):
    '''
    connect(ui->checkBox,SIGNAL(clicked()),this,SLOT(mySlots()));
    connect(ui->checkBox_2,SIGNAL(clicked()),this,SLOT(mySlots()));
    connect(ui->checkBox_3,SIGNAL(clicked()),this,SLOT(mySlots()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(mySlots()));
    '''

    def __init__(self):
        QMainWindow.__init__(self)
        loadUi("myfirst.ui", self)
        self.pushButton.clicked.connect(self.mySlots)
        self.checkBox.clicked.connect(self.mySlots)
        self.checkBox_2.clicked.connect(self.mySlots)
        self.checkBox_3.clicked.connect(self.mySlots)

    def mySlots(self, check):
        print('mySlots({})'.format(check))
        if self.checkBox.isChecked():
            print('checkBox   is Checked')
        if self.checkBox_2.isChecked():
            print('checkBox_2 is Checked')
        if self.checkBox_3.isChecked():
            print('checkBox_3 is Checked')

    #@pyqtSlot()
    def on_checkBox_3_clicked(self, check=None):
        print('on_checkBox_3_clicked({})'.format(check))


def main(argv):
    os.environ["QT_AUTO_SCREEN_SCALE_FACTOR"] = "1"
    a = QApplication(sys.argv)
    w = myfirst()
    w.show()
    return(a.exec_())

if __name__ == '__main__':
    sys.exit(main(sys.argv))

