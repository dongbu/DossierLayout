/*
Copyright (c) 2018 InversePalindrome
DossierLayout - SettingsDialog.hpp
InversePalindrome.com
*/


#pragma once

#include <QEvent>
#include <QLabel>
#include <QDialog>
#include <QComboBox>
#include <QPushButton>


class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget* parent = nullptr);
    ~SettingsDialog();

    void load(const QString& fileName);
    void save(const QString& fileName);

private:
    QLabel* styleLabel;
    QLabel* languageLabel;
    QComboBox* styleChoices;
    QComboBox* languageChoices;
    QPushButton* doneButton;

    virtual void changeEvent(QEvent* event) override;

    void retranslateUi();

signals:
    void done();
    void changeStyle(const QString& style);
    void changeLanguage(const QString& language);
};
