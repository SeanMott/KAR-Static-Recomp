//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FA928.hpp"



void fn_80247594(PPC::Runtime::GCContext* context)
{
/*80247594 00244394*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80247598 00244398*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024759C 0024439C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802475A0 002443A0*/ PPC::Runtime::ASM::bl(fn_800FA928);
/*802475A4 002443A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802475A8 002443A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802475AC 002443AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802475B0 002443B0*/ PPC::Runtime::ASM::blr();
}