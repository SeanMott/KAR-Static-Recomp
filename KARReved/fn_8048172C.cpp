//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSCancelAlarm.hpp"
#include "fn_80481510.hpp"



void fn_8048172C(PPC::Runtime::GCContext* context)
{
/*8048172C 0047E52C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80481730 0047E530*/ PPC::Runtime::ASM::lis(context->r4, lbl_805C2978 @ Get_MemoryOffset_HighBit);
/*80481734 0047E534*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80481738 0047E538*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*8048173C 0047E53C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80481740 0047E540*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_805C2978 @ Get_MemoryOffset_LowBit);
/*80481744 0047E544*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80481748 0047E548*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*8048174C 0047E54C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*80481750 0047E550*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80481754 0047E554*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*80481758 0047E558*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8048175C 0047E55C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80481760 0047E560*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*80481764 0047E564*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80481768 0047E568*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8048176C 0047E56C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80481770 0047E570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80481774 0047E574*/ PPC::Runtime::ASM::bl(fn_80481510);
/*80481778 0047E578*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8048177C 0047E57C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80481780 0047E580*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80481784 0047E584*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*80481788 0047E588*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8048178C 0047E58C*/ PPC::Runtime::ASM::blr();
}