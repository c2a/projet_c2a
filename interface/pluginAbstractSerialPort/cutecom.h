/*  Copyright (C) 2004-2005 Alexander Neundorf <neundorf@kde.org>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef __CUTECOM_H__
#define __CUTECOM_H__


#include <iostream>
using namespace std;

#include <errno.h>

#include <sys/ioctl.h>
#include <sys/termios.h>

#include <sys/types.h>

#include <fcntl.h>


#include "ui_cutecommdlg.h"


#include <QtGui>

#define CUTECOMM_BUFSIZE (4096)


//#define WRITE_ERROR_LOGGER() std::cout<<__FILE__<<+__PRETTY_FUNCTION__<<std::endl;
 #define WRITE_ERROR_LOGGER()

class CCuteCom:public QWidget, public Ui::CuteCommDlg
{
   Q_OBJECT
   public:

      CCuteCom(QWidget* parent = NULL);
      virtual bool eventFilter(QObject* watched, QEvent *e);

   public slots:

      void execCmd();
      void readData(int fd);
      void sendFile();
      void showAboutMsg();

      void oldCmdClicked(QListWidgetItem* item);
      void saveSettings();
      void readFromStdout();
      void readFromStderr();
      void sendDone();
      void connectTTY();
      void disconnectTTY();
      void killSz();
      void enableSettingWidgets(bool enable);
      void doOutput();
      void sendKey();
      void hexOutputClicked(bool on);
      void enableLogging(bool on);
      void chooseLogFile();
      void clearOutput();

   public:

      void fillBaudCb();
      void addOutput(const QString& text);
      bool sendByte(char c, unsigned int delay);
      void disconnectTTYRestore(bool restore);
      void readSettings();
      void prevCmd();
      void nextCmd();
      bool sendString(const QString& s);
      void setNewOptions(int baudrate, int databits, const QString& parity, const QString& stop, bool softwareHandshake, bool hardwareHandshake);
      virtual void resizeEvent(QResizeEvent *e);

      bool              m_isConnected;
      int               m_fd;
      struct termios    m_oldtio;
      unsigned int      m_cmdBufIndex;
      QSocketNotifier  *m_notifier;
      char              m_buf[CUTECOMM_BUFSIZE];
      QProcess         *m_sz;
      QProgressDialog  *m_progress;
      int               m_progressStepSize;

      QFileDialog      *m_fileDlg;
      QString           m_sendFileDialogStartDir;

      QTimer            m_outputTimer;
      QTime             m_outputTimerStart;
      QString           m_outputBuffer;

      QTimer            m_keyRepeatTimer;
      char              m_keyCode;
      unsigned int      m_hexBytes;
      char              m_previousChar;

      QFile             m_logFile;

signals :
      void signalReceiveData (QString &_data);
      void signalDisconnect();

};

#endif
