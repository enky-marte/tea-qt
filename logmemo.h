/***************************************************************************
 *   2007-2017 by Peter Semiletov                                          *
 *   peter.semiletov@gmail.com                                             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef LOGMEMO_H
#define LOGMEMO_H

#include <QObject>
#include <QPlainTextEdit>
#include <QString>


class CLogMemo: public QPlainTextEdit
{
  Q_OBJECT

public:

  bool no_jump;
  bool terminal_output;

  CLogMemo (QWidget *parent = 0);

Q_INVOKABLE void log (const QString &text);

#if QT_VERSION >= 0x05
  void log_terminal (const QString &text);
#endif

  void mouseDoubleClickEvent(QMouseEvent *event);

signals:

  void double_click (const QString &text);
};

#endif // LOGMEMO_H
