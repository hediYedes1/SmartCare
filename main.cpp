#include "mainwindow.h"
#include "connexion.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connexion c;
    w.show();
    if (c.ouvrirConnexion()) w.show();
    else QMessageBox::information(nullptr, QObject::tr("Erreur"),QObject::tr("Echec de la connexion.\n") );
    return a.exec();
}
