BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "Users" (
	"UserID"	INT,
	"Username"	VARCHAR(255),
	"Age"	INTEGER,
	PRIMARY KEY("UserID")
);
CREATE TABLE IF NOT EXISTS "UserTestResponses" (
	"ResponseID"	INT,
	"UserID"	INT,
	"TestID"	INT,
	"QuestionID"	INT,
	"UserAnswer"	INT,
	PRIMARY KEY("ResponseID"),
	FOREIGN KEY("TestID") REFERENCES "Tests"("TestID"),
	FOREIGN KEY("UserID") REFERENCES "Users"("UserID"),
	FOREIGN KEY("QuestionID") REFERENCES "Questions"("QuestionID")
);
CREATE TABLE IF NOT EXISTS "Results" (
	"ResultID"	INT,
	"UserID"	INT,
	"TestID"	INT,
	"Score"	INT,
	PRIMARY KEY("ResultID"),
	FOREIGN KEY("TestID") REFERENCES "Tests"("TestID"),
	FOREIGN KEY("UserID") REFERENCES "Users"("UserID")
);
CREATE TABLE IF NOT EXISTS "Category" (
	"ID"	INTEGER NOT NULL,
	"Name"	TEXT NOT NULL,
	PRIMARY KEY("ID")
);
CREATE TABLE IF NOT EXISTS "Tests" (
	"TestID"	INT,
	"Category"	VARCHAR(255),
	PRIMARY KEY("TestID")
);
CREATE TABLE IF NOT EXISTS "Questions" (
	"QuestionID"	INT,
	"TestID"	INT,
	"QuestionText"	TEXT,
	"Image"	TEXT NOT NULL,
	"CorrectAnswer"	INT,
	PRIMARY KEY("QuestionID"),
	FOREIGN KEY("TestID") REFERENCES "Tests"("TestID")
);
COMMIT;
