#ifndef Sports_h
#define Sports_h

#include <string>
#include <fstream>
#include <iostream>

class Sports
{
private:
    string      name;
    int         numberOfCompetitors;
    bool        isContactSport;
    bool        isTeamSport;
    Events*     events[];
    Equipment*  equipmentNeeded[];
    float       requiredArea;
    
    //PRIVATE METHODS - ONLY FACILITATE PUBLIC FUNCTIONS
    int         getTotalEvents();
    float       getEquipmentPrice();
public:
    //CONSTRUCTORS
    Sports(string myName,int theCompetitors, bool contactFlag,
           bool teamFlag Events* theEvents[],
           Equipment* theEquipment[], float theArea);
    Sports();
    
    //DESTRUCTOR
    ~Sports();
    
    //GETTERS
    string      getName();
    int         getCompetitors();
    bool        getContactFlag();
    bool        getTeamFlag();
    Events*     getTournaments();
    Equipment*  getEquipment();
    float       getArea();

    //SETTERS
    void        setName(string theName);
    void        setCompetitors(int theCompetitors);
    void        setContactFlag(bool theContactFlag);
    void        setTeamFlag(bool theTeamFlag);
    void        setEvents(Events* myEventsArray);
    void        setEquipment(Equipment* myEquipmentArray);
    void        setArea(float theArea);
    
    //OPERATORS
    friend istream& operator >>(istream& ins, Sports& mySport);
    friend ostream& operator <<(ostream& outs, const Sports& mySport);
    
    //OTHER METHODS
    string      toString();
    float       costOfOneGame();
    void        printEventDatabase();
}

#endif /* Sports_h */