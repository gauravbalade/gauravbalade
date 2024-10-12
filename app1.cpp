#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QLineEdit>

class NotesApp : public QWidget {
    Q_OBJECT

public:
    NotesApp(QWidget *parent = nullptr) : QWidget(parent) {
        auto *layout = new QVBoxLayout(this);
        auto *addButton = new QPushButton("Add Note", this);
        auto *noteEdit = new QLineEdit(this);
        auto *notesList = new QListWidget(this);

        layout->addWidget(noteEdit);
        layout->addWidget(addButton);
        layout->addWidget(notesList);

        connect(addButton, &QPushButton::clicked, this, [noteEdit, notesList]() {
            notesList->addItem(noteEdit->text());
            noteEdit->clear();
        });
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    NotesApp notesApp;
    notesApp.show();
    return app.exec();
}

#include "main.moc"
