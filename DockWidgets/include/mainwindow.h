#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;
class QListWidget;
class QMenu;
class QTextEdit;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();

private slots:
	void newLetter();
	void save();
	void print();
	void undo();
	void about();
	void insertCustomer(const QString &customer);
	void addParagraph(const QString &paragraph);

private:
	void createActions();
	void createStatusBar();
	void createDockWindows();

	QTextEdit *textEdit;
	QListWidget *customerList;
	QListWidget *paragraphsList;

	QMenu *viewMenu;
};

#endif