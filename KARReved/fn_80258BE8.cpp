//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80258C14.hpp"
#include "fn_80258C14.hpp"
#include "fn_80254D4C.hpp"



void fn_80258BE8(PPC::Runtime::GCContext* context)
{
/*80258BE8 002559E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80258BEC 002559EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80258BF0 002559F0*/ PPC::Runtime::ASM::lis(context->r4, fn_80258C14 @ Get_MemoryOffset_HighBit);
/*80258BF4 002559F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80258BF8 002559F8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80258C14 @ Get_MemoryOffset_LowBit);
/*80258BFC 002559FC*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*80258C00 00255A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80258C04 00255A04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80258C08 00255A08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80258C0C 00255A0C*/ PPC::Runtime::ASM::blr();
}