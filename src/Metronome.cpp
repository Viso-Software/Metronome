#include "Metronome.h"

Metronome::Metronome()
    : playing(false), 
      tempo(120), 
      clicksPerBeat(1), 
      beatsPerBar(4), 
      beats(new Beat[4])
{ }

Metronome::~Metronome()
{
    delete[] beats;
}

void Metronome::togglePlay()
{
    playing != playing;
}

void Metronome::exit() const
{
    // do exit
}

int Metronome::getClicksPerBeat() const
{
    return clicksPerBeat;
}

int Metronome::getBeatsPerBar() const
{
    return beatsPerBar;
}

Beat* Metronome::getBeats() const
{
    return beats;
}

void Metronome::setTempo(const int& newTempo)
{
    tempo = newTempo;

}

void Metronome::setClicksPerBeat(const int& newCPB)
{
    clicksPerBeat = newCPB;    
}

void Metronome::setBeatsPerBar(const int& newBPB)
{
    beatsPerBar = newBPB;
}

void Metronome::setBeat(const int& index, const Beat& newBeat)
{
    if (index < beatsPerBar && index >= 0)
    {
        beats[index] = newBeat;
    }
}