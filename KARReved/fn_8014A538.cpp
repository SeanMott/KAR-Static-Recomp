//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801311EC.hpp"
#include "fn_80059520.hpp"



void fn_8014A538(PPC::Runtime::GCContext* context)
{
/*8014A538 00147338*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014A53C 0014733C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014A540 00147340*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A544 00147344*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014A548 00147348*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014A54C 0014734C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014A550 00147350*/ PPC::Runtime::ASM::bl(fn_801311EC);
/*8014A554 00147354*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1185 @ Get_MemoryOffset_HighBit);
/*8014A558 00147358*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014A55C 0014735C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1185 @ Get_MemoryOffset_LowBit);
/*8014A560 00147360*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8014A564 00147364*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x374);
/*8014A568 00147368*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8014A56C 0014736C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8014A570 00147370*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A574 00147374*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014A578 00147378*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014A57C 0014737C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014A580 00147380*/ PPC::Runtime::ASM::blr();
}