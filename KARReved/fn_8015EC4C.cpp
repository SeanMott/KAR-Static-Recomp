//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013121C.hpp"
#include "fn_80059520.hpp"



void fn_8015EC4C(PPC::Runtime::GCContext* context)
{
/*8015EC4C 0015BA4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015EC50 0015BA50*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015EC54 0015BA54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015EC58 0015BA58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015EC5C 0015BA5C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015EC60 0015BA60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8015EC64 0015BA64*/ PPC::Runtime::ASM::bl(fn_8013121C);
/*8015EC68 0015BA68*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1266 @ Get_MemoryOffset_HighBit);
/*8015EC6C 0015BA6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015EC70 0015BA70*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1266 @ Get_MemoryOffset_LowBit);
/*8015EC74 0015BA74*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8015EC78 0015BA78*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8e4);
/*8015EC7C 0015BA7C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8015EC80 0015BA80*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8015EC84 0015BA84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015EC88 0015BA88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015EC8C 0015BA8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015EC90 0015BA90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8015EC94 0015BA94*/ PPC::Runtime::ASM::blr();
}