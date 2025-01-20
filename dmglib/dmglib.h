// DMG-CPU component base
#pragma once

namespace dmglib
{
	enum
	{
		ZERO = 0,			// Logical 0
		ONE = 1,			// Logical 1
		HIGHZ = -1,			// "Disconnected" (High impedance)
		UNK = -2,			// Not yet known
	};

	int Not(int a);
	int Nor(int a, int b);
	int Nand(int a, int b);
	int And(int a, int b);
	int Nand3(int a0, int a1, int a2);
}