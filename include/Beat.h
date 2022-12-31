#ifndef BEAT_STRUCT_H_
#define BEAT_STRUCT_H_

#include "Pitch.h"
#include "Sample.h"

struct Beat
{
    Pitch pitch {PITCH_MED};
    Sample sample {SAMPLE_TICK};

};

#endif // BEAT_STRUCT_H_