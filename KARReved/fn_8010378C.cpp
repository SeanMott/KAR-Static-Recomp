//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_killWhispy.hpp"



void fn_8010378C(PPC::Runtime::GCContext* context)
{
/*8010378C 0010058C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80103790 00100590*/ PPC::Runtime::ASM::mflr(context->r0);
/*80103794 00100594*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF998 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103798 00100598*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010379C 0010059C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801037A0 001005A0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801037A4 001005A4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801037A8 001005A8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF9A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801037AC 001005AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801037B0 001005B0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801037B4 001005B4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801037B8 001005B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*801037BC 001005BC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801037C0 001005C0*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*801037C4 001005C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801037C8 001005C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801037CC 001005CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801037D0 001005D0*/ PPC::Runtime::ASM::blr();
}