//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80072C90.hpp"



void fn_80235720(PPC::Runtime::GCContext* context)
{
/*80235720 00232520*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80235724 00232524*/ PPC::Runtime::ASM::mflr(context->r0);
/*80235728 00232528*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8023572C 0023252C*/ PPC::Runtime::ASM::li(context->r4, String_ "EfEnem" Get_MemoryOffset_SDA21);
/*80235730 00232530*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80235734 00232534*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80235738 00232538*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8023573C 0023253C*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80235740 00232540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80235744 00232544*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80235748 00232548*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8023574C 0023254C*/ PPC::Runtime::ASM::li(context->r9, 0x6);
/*80235750 00232550*/ PPC::Runtime::ASM::li(context->r10, 0x4);
/*80235754 00232554*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80235758 00232558*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023575C 0023255C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80235760 00232560*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80235764 00232564*/ PPC::Runtime::ASM::blr();
}