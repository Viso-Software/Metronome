#ifndef METRONOME_H
#define METRONOME_H

#include <string>

#include "Pitch.h"
#include "Sample.h"
#include "Beat.h"

class Metronome
{
public:
    Metronome();

    void togglePlay();
    void exit() const;

    int getTempo() const;
    int getClicksPerBeat() const;
    int getBeatsPerBar() const;
    Beat* getBeats() const;
    void setTempo(const int& newTempo);
    void setClicksPerBeat(const int& newCPB);
    void setBeatsPerBar(const int& newBPB);
    void setBeat(const int& index, const Beat& newBeat);
    // void loadSettings();

private:
    bool playing;
    int tempo;
    int clicksPerBeat;
    int beatsPerBar;
    Beat* beats;

    virtual ~Metronome();

};

#endif // METRONOME_H