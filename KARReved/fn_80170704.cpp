//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80170704(PPC::Runtime::GCContext* context)
{
/*80170704 0016D504*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80170708 0016D508*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017070C 0016D50C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170710 0016D510*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170714 0016D514*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80170718 0016D518*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017071C 0016D51C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80170720 0016D520*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80170724 0016D524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170728 0016D528*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017072C 0016D52C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80170730 0016D530*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80170734 0016D534*/ PPC::Runtime::ASM::blr();
}