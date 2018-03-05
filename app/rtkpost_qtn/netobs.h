#ifndef NETOBS_H
#define NETOBS_H

#include <QDialog>

namespace Ui {
class NetObsDialog;
}

class NetObsDialog : public QDialog
{
    Q_OBJECT
public slots:
    void BtnInputFileClick(int i);

public:
    explicit NetObsDialog(QWidget *parent = 0, int nnetobs = 0, QString *files = 0);
    ~NetObsDialog();
    void ShowMsg(const QString  &msg);
private:
    Ui::NetObsDialog *ui;
    int ExecCmd(const QString &cmd, int show);
    void GetOpt(int cnnetobs);
    //void SetOpt(void);
};

#endif // NETOBS_H
