//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80230728(PPC::Runtime::GCContext* context)
{
/*80230728 0022D528*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023072C 0022D52C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80230730 0022D530*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230734 0022D534*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230738 0022D538*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8023073C 0022D53C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*80230740 0022D540*/ PPC::Runtime::ASM::blt(.L_8023075C);
/*80230744 0022D544*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*80230748 0022D548*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8023074C 0022D54C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*80230750 0022D550*/ PPC::Runtime::ASM::li(context->r4, 0x6a4);
/*80230754 0022D554*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*80230758 0022D558*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023075C, 0x8023075C) //this is a jump label
/*8023075C 0022D55C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80230760 0022D560*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*80230764 0022D564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230768 0022D568*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d0, context->r3));
/*8023076C 0022D56C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230770 0022D570*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80230774 0022D574*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80230778 0022D578*/ PPC::Runtime::ASM::blr();
}