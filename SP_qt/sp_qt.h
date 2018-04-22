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
