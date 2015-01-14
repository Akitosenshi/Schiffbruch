#pragma once

#include "headers.hpp"
#include "extern.hpp"

namespace Game
{
	void NeuesSpiel(bool neu);	// Neues Spiel starten
	void InitStructs();			// Initialisiert die Structs 
	void SaveGame();			// Speichert den Spielstand
	bool LoadGame();			// Lädt den Spielstand
}