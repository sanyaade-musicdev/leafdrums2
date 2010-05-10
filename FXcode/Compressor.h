/*
    This file is part of leafDrums.

    leafDrums is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    leafDrums is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with leafDrums.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef COMPRESSOR_H
#define COMPRESSOR_H

#include "Effect.h"

class CCompressor : public CEffect
{
	DECLARE_SERIAL(CCompressor)

	int m_iFade,m_iFadeTarget;

	int m_iCount,m_iTotalLevel;

public:
	CCompressor();
	
	virtual void ProcessBlock(CBlock* &pBlock);
	virtual void Reset();
	virtual CString Name();

	void Serialize(CArchive& archive);
};

#endif // COMPRESSOR_H