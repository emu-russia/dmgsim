#include "sm83.h"
#include "../dmglib/dmglib.h"

using namespace dmglib;

namespace sm83
{
	void thingy_sim(state *st)
	{
		int Temp_Z = ZERO;// TBD.

		int t1 = Nand3 (st->w[8], st->ALU_to_Thingy, Not(Temp_Z));
		int t2 = Nand3 (st->w[8], Not(st->ALU_to_Thingy), Temp_Z);
		st->TTB1 = Nand (t1, t2);
		st->TTB2 = Nand (Not(st->w[35]), t2);
		st->TTB3 = Nand (Not(st->w[31]), t1);
		st->Thingy_to_bot = And (st->bot_to_Thingy, s2_wr);
	}
}