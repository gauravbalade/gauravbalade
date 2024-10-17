#include <iostream>
#include <vector>
#include <string>

class Note {
public:
    std::string title;
    std::string content;

    void saveNote() {
        // Code to save note to database
    }

    // Other methods...
};

class Notebook {
private:
    std::vector<Note> notes;

public:
    void addNote(Note note) {
        // Code to add note to notebook
        notes.push_back(note);
        note.saveNote();
    }

    std::vector<Note> getNotes() const {
        // Code to retrieve all notes
        return notes;
    }
};

int main() {
    Notebook myNotebook;
    
    Note note1;
    note1.title = "First Note";
    note1.content = "This is the content of the first note.";
    
    Note note2;
    note2.title = "Second Note";
    note2.content = "This is the content of the second note.";
    
    myNotebook.addNote(note1);
    myNotebook.addNote(note2);
    
    std::vector<Note> notes = myNotebook.getNotes();
    
    for (const Note& note : notes) {
        std::cout << "Title: " << note.title << "\n";
        std::cout << "Content: " << note.content << "\n\n";
    }
    
    return 0;
}
