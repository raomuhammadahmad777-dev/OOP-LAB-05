#include <iostream>
using namespace std;

class MedicationEntry 
{
public:
    string drugName;
    string dose;
    string timeGiven;

    MedicationEntry(string drug, string d, string time) : drugName(drug), dose(d), timeGiven(time) 
	{ }

    void display() {
        cout << "Medication: " << drugName
             << ", Dose: " << dose
             << ", Time: " << timeGiven << endl;
    }
};


class VitalSignsCheck 
{
public:
    float temperature;
    int heartRate;
    string timeChecked;

    VitalSignsCheck(float temp, int hr, string time) : temperature(temp), heartRate(hr), timeChecked(time) 
	{ }

    void display() {
        cout << "Vitals -> Temp: " << temperature
             << ", Heart Rate: " << heartRate
             << ", Time: " << timeChecked << endl;
    }
};

class DiagnosisNote 
{
public:
    string noteText;
    string doctorName;
    string date;

    DiagnosisNote(string note, string doc, string d) : noteText(note), doctorName(doc), date(d) 
	{ }

    void display() {
        cout << "Diagnosis: " << noteText
             << ", Doctor: " << doctorName
             << ", Date: " << date << endl;
    }
};

class PatientRecord 
{
private:
    int patientId;
    string name;
    string dob;

    MedicationEntry medication;
    VitalSignsCheck vitals;
    DiagnosisNote diagnosis;

public:
    PatientRecord(int id, string n, string birthDate)
        : patientId(id),
          name(n),
          dob(birthDate),
          medication("Paracetamol", "500mg", "10:00 AM"),
          vitals(98.6, 72, "10:30 AM"),
          diagnosis("Mild Fever", "Dr. Ahmed", "26-02-2026")
    { }

    void displayRecord() {
        cout << "Patient ID: " << patientId << endl;
        cout << "Name: " << name << endl;
        cout << "DOB: " << dob << endl << endl;

        medication.display();
        vitals.display();
        diagnosis.display();
    }
};

int main() {

    PatientRecord patient(101, "Lily Smith", "12-05-2000");

    patient.displayRecord();

    return 0;
}
