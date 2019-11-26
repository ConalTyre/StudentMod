#include "Lecture.h"


Lecture::Lecture() {}
Lecture(std::string name, std::string email, std::string id, std::string subjectarea, std::vector<Module> m);

void SetId(std::string id);
std::string Getid() const;

void Setsubjectarea(std::string subjectarea);
std::string Getsubjectarea() const;

void SetModules(std::vector<Module> m);
std::vector <Module> GetModules() const;
virtual std::string ToString() override
