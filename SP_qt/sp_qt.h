/* This is a Qt Widget-based Application
 * The application user interface is constructed from Qt widgets
 * by using Qt Designer.  The application logic is written in C++
 * by using the code editor.
 */

/* ************************************************
 * Author:          Dean Tapit
 * Date Created:    April 12, 2018
 * Purpose: This app aims to create a way to create a master list of people
 * and their information, such as their name and home address.
 * The master list will be used to create separate schedules which will be
 * presented in a tab format.  Each tab will represent a schedule which
 * contains a selection of people from the master list.
 * (More details to be added.)
 */

#ifndef SP_QT_H
#define SP_QT_H

#include <QWidget>

namespace Ui {
class SP_qt;
}

class SP_qt : public QWidget
{
    Q_OBJECT

public:
    explicit SP_qt(QWidget *parent = 0);
    ~SP_qt();

private:
    Ui::SP_qt *ui;
};

#endif // SP_QT_H
