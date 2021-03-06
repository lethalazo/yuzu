// Copyright 2018 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <QDialog>

class QKeySequenceEdit;

class SequenceDialog : public QDialog {
    Q_OBJECT

public:
    explicit SequenceDialog(QWidget* parent = nullptr);
    ~SequenceDialog() override;

    QKeySequence GetSequence() const;
    void closeEvent(QCloseEvent*) override;

private:
    QKeySequenceEdit* key_sequence;
    bool focusNextPrevChild(bool next) override;
};
