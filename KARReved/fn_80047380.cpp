//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80138FAC.hpp"
#include "fn_80139058.hpp"
#include "fn_80139034.hpp"
#include "fn_80183054.hpp"



void fn_80047380(PPC::Runtime::GCContext* context)
{
/*80047380 00044180*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80047384 00044184*/ PPC::Runtime::ASM::mflr(context->r0);
/*80047388 00044188*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004738C 0004418C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80047390 00044190*/ PPC::Runtime::ASM::li(context->r0, 0x1e);
/*80047394 00044194*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80047398 00044198*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4a, context->r3));
/*8004739C 0004419C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800473A0 000441A0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4c, context->r3));
/*800473A4 000441A4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4d, context->r3));
/*800473A8 000441A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4b, context->r3));
/*800473AC 000441AC*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4e, context->r3));
/*800473B0 000441B0*/ PPC::Runtime::ASM::bl(fn_80138FAC);
/*800473B4 000441B4*/ PPC::Runtime::ASM::bl(fn_80139058);
/*800473B8 000441B8*/ PPC::Runtime::ASM::bl(fn_80139034);
/*800473BC 000441BC*/ PPC::Runtime::ASM::bl(fn_80183054);
/*800473C0 000441C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800473C4 000441C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800473C8 000441C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800473CC 000441CC*/ PPC::Runtime::ASM::blr();
}