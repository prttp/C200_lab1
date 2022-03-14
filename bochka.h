#pragma once
class Bochka
{
	float m_sp;	
	float m_vol;
public:
	Bochka(float volume, float spirt);
	void Pereliv(Bochka& source);
	float SpConc() const;
};