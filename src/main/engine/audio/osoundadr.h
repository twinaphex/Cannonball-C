/***************************************************************************
    Z80 Program Code Addresses. 
    Addresses to data within the Z80 Program ROM.
    
    These are typically large blocks of data that we don't want to include
    in the codebase. 
    
    For example the music tracks are stored and referenced here.
    
    Copyright Chris White.
    See license.txt for more details.
***************************************************************************/

#pragma once

// FM Note & Octave Lookup Table
const static uint16_t z80_adr_YM_NOTE_OCTAVE = 0xAC9;

// Command Lists to send to FM Chip. Format is register, value pairs
const static uint16_t z80_adr_YM_INIT_CMDS = 0xB29;
// Address is ($60 + (8 * Operator) + Channel). Total Level affects the total output volume of the sound.
const static uint16_t z80_adr_YM_LEVEL_CMDS1  = 0xB49;
const static uint16_t z80_adr_YM_LEVEL_CMDS2  = 0xB81;
const static uint16_t z80_adr_YM_RELEASE_RATE = 0xB8A;

// PCM Sample Properties
const static uint16_t z80_adr_PCM_INFO = 0xDDD;

// YM: Passing Breeze
#define z80_adr_DATA_BREEZE  0xE26

// YM: Splash Wave
#define z80_adr_DATA_SPLASH  0x20C8

// YM: Magical Sound Shower
#define z80_adr_DATA_MAGICAL 0x3D5F

// YM: Last Wave
#define z80_adr_DATA_LASTWAVE 0x5F2D

// PCM: Safety Zone
const static uint16_t z80_adr_DATA_SAFETY = 0x69A9;

// PCM: Slip Sound
const static uint16_t z80_adr_DATA_SLIP   = 0x69E6;

// YM: Coin IN Sound
#define z80_adr_DATA_COININ  0x6A24

// YM: Checkpoint beeps
#define z80_adr_DATA_CHECKPOINT 0x6A60

// YM: Signal 1 Sound
#define z80_adr_DATA_SIGNAL1 0x6A87

// YM: Signal 2 Sound
#define z80_adr_DATA_SIGNAL2 0x6AA7

// YM: Beep 1 Sound
#define z80_adr_DATA_BEEP1 0x6AC7

// PCM: Crash Sound
const static uint16_t z80_adr_DATA_CRASH1 = 0x6C15;

// PCM: Rebound Sound
const static uint16_t z80_adr_DATA_REBOUND = 0x6CFF;

// PCM: Crash Sound
const static uint16_t z80_adr_DATA_CRASH2 = 0x6C8A;

// PCM: Weird Sound
const static uint16_t z80_adr_DATA_WEIRD = 0x6D61;

// PCM: Crowd Cheers
const static uint16_t z80_adr_DATA_CHEERS = 0x6F16;

// PCM: Crowd Cheers 2
const static uint16_t z80_adr_DATA_CHEERS2 = 0x6F53;

// PCM: Voice 1, Checkpoint (Sound Data)
const static uint16_t z80_adr_DATA_VOICE1 = 0x6F91;

// PCM: Voice 2, Congratulations
const static uint16_t z80_adr_DATA_VOICE2 = 0x6FCA;

// PCM: Voice 3, Get Ready
const static uint16_t z80_adr_DATA_VOICE3 = 0x7003;

// YM: UFO (Unused)
#define z80_adr_DATA_UFO 0x703D

// YM: Beep 2 Sound
#define z80_adr_DATA_BEEP2 0x71F9

// PCM: Wave Sample
const static uint16_t z80_adr_DATA_WAVE = 0x748B;

// Engine Tone Table. 5 Bytes per entry.
// Engine Note: Start Address Low, Start Address High, Volume Multiplier, Unknown, Pitch
const static uint16_t z80_adr_ENGINE_ADR_TABLE = 0x7951;

// Traffic Volume Multiply Table. How much to increase traffic volume by dependent on distance.
const static uint16_t z80_adr_TRAFFIC_VOL_MULTIPLY = 0x7CEF;
