//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005E728(PPC::Runtime::GCContext* context)
{
/*8005E728 0005B528*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005E72C 0005B52C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005E730 0005B530*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005E734 0005B534*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8005E738 0005B538*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005E73C 0005B53C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8005E740 0005B540*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005E744 0005B544*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005E748 0005B548*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/*8005E74C 0005B54C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*8005E750 0005B550*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/*8005E754 0005B554*/ PPC::Runtime::ASM::bl(fn_804458D0);
/*8005E758 0005B558*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/*8005E75C 0005B55C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8005E760 0005B560*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*8005E764 0005B564*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8005E768 0005B568*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/*8005E76C 0005B56C*/ PPC::Runtime::ASM::bl(fn_804458D0);
/*8005E770 0005B570*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005E774 0005B574*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005E778 0005B578*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8005E77C 0005B57C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005E780 0005B580*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005E784 0005B584*/ PPC::Runtime::ASM::blr();
}