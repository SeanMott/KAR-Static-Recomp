//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131214.hpp"
#include "fn_80059520.hpp"



void fn_80157270(PPC::Runtime::GCContext* context)
{
/*80157270 00154070*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80157274 00154074*/ PPC::Runtime::ASM::mflr(context->r0);
/*80157278 00154078*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015727C 0015407C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80157280 00154080*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80157284 00154084*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80157288 00154088*/ PPC::Runtime::ASM::bl(fn_80131214);
/*8015728C 0015408C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1241 @ Get_MemoryOffset_HighBit);
/*80157290 00154090*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80157294 00154094*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1241 @ Get_MemoryOffset_LowBit);
/*80157298 00154098*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8015729C 0015409C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x6e4);
/*801572A0 001540A0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801572A4 001540A4*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801572A8 001540A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801572AC 001540AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801572B0 001540B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801572B4 001540B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801572B8 001540B8*/ PPC::Runtime::ASM::blr();
}