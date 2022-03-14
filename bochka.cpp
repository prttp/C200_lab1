#include "bochka.h"
Bochka::Bochka(float volume, float spirt) {
	m_vol = volume;
	m_sp = spirt;
}
void Bochka::Pereliv(Bochka& source) {

	m_sp = (((m_sp / 100) * m_vol + (source.m_sp / 100)) / (m_vol + 1))*100;
	source.m_vol--;
	m_vol++;
};
float Bochka::SpConc() const { return m_sp; };