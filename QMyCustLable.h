#ifndef QMYCUSTLABEL_H
#define QMYCUSTLABEL_H
#include<QLabel>

class QMyCustLabel : public QLabel
{
Q_OBJECT
public:
explicit QMyCustLabel(QWidget *parent = 0);

protected:
virtual  void paintEvent(QPaintEvent *);
signals:
void clicked();
public slots:

};


#endif // QMYCUSTLABEL_H
