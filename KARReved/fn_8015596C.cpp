//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131214.hpp"
#include "fn_80059520.hpp"



void fn_8015596C(PPC::Runtime::GCContext* context)
{
/*8015596C 0015276C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80155970 00152770*/ PPC::Runtime::ASM::mflr(context->r0);
/*80155974 00152774*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80155978 00152778*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015597C 0015277C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80155980 00152780*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80155984 00152784*/ PPC::Runtime::ASM::bl(fn_80131214);
/*80155988 00152788*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1233 @ Get_MemoryOffset_HighBit);
/*8015598C 0015278C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80155990 00152790*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1233 @ Get_MemoryOffset_LowBit);
/*80155994 00152794*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80155998 00152798*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x674);
/*8015599C 0015279C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801559A0 001527A0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801559A4 001527A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801559A8 001527A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801559AC 001527AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801559B0 001527B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801559B4 001527B4*/ PPC::Runtime::ASM::blr();
}