//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_HSD_CObjGetEyePositionWObj(PPC::Runtime::GCContext* context)
{
/*80401728 003FE528*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8040172C 003FE52C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80401730 003FE530*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80401734 003FE534*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80401738 003FE538  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8040173C 003FE53C*/ PPC::Runtime::ASM::bne(.L_80401750);
/*80401740 003FE540*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_540 @ Get_MemoryOffset_SDA21);
/*80401744 003FE544*/ PPC::Runtime::ASM::li(context->r4, 0x2d9);
/*80401748 003FE548*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_539 @ Get_MemoryOffset_SDA21);
/*8040174C 003FE54C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80401750, 0x80401750) //this is a jump label
/*80401750 003FE550*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80401754 003FE554*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80401758 003FE558*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8040175C 003FE55C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80401760 003FE560*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80401764 003FE564*/ PPC::Runtime::ASM::blr();
}