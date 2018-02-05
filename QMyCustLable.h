#ifndef QMYCUSTLABEL_H
#define QMYCUSTLABEL_H
#include<QLabel>
#include<QWidget>
#include<QPainter>

class QMyCustLabel : public QLabel
{
Q_OBJECT
public:
explicit QMyCustLabel(QWidget *parent = 0);
public:
void setLive(bool bLive = false);
protected:
virtual  void paintEvent(QPaintEvent * event);
signals:
void clicked();
public slots:

private:
    bool m_bLive;
};


#endif // QMYCUSTLABEL_H
