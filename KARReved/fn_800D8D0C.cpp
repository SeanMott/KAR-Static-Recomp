//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_getPlayerCount.hpp"



void fn_800D8D0C(PPC::Runtime::GCContext* context)
{
/*800D8D0C 000D5B0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D8D10 000D5B10*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D8D14 000D5B14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D8D18 000D5B18*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*800D8D1C 000D5B1C*/ PPC::Runtime::ASM::extsb(context->r5, context->r3);
/*800D8D20 000D5B20*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800D8D24 000D5B24*/ PPC::Runtime::ASM::srawi(context->r4, context->r5, 31);
/*800D8D28 000D5B28*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*800D8D2C 000D5B2C*/ PPC::Runtime::ASM::subfc(context->r0, context->r0, context->r5);
/*800D8D30 000D5B30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D8D34 000D5B34*/ PPC::Runtime::ASM::adde(context->r3, context->r4, context->r3);
/*800D8D38 000D5B38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D8D3C 000D5B3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D8D40 000D5B40*/ PPC::Runtime::ASM::blr();
}