/*
Name: CommonFiles
Version: 2.1.0
Web-site: http://www.qtrpt.tk
Programmer: Aleksey Osipov
E-mail: aliks-os@ukr.net
Web-site: http://www.aliks-os.tk

Copyright 2012-2020 Aleksey Osipov

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef SELECTCOLOR_H
#define SELECTCOLOR_H

#include <QWidget>
#include <QToolButton>
#include <QHBoxLayout>

class SelectColor : public QWidget
{
    Q_OBJECT
public:
    explicit SelectColor(QWidget *parent = 0, QString rgbColor = "rgba(255,255,255,255)");
    QToolButton *button;
    QString getBackGroundColor();
    void setBackGroundColor(QString rgbColor);
    void setMargins(QMargins margins);

private:
    QHBoxLayout *vLayout;

signals:

public slots:

};

#endif // SELECTCOLOR_H
