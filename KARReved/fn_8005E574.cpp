//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005E574(PPC::Runtime::GCContext* context)
{
/*8005E574 0005B374*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005E578 0005B378*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005E57C 0005B37C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005E580 0005B380*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8005E584 0005B384*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005E588 0005B388*/ PPC::Runtime::ASM::addi(context->r7, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005E58C 0005B38C*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*8005E590 0005B390*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005E594 0005B394*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r7));
/*8005E598 0005B398*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r6, 4, 27, 27);
/*8005E59C 0005B39C*/ PPC::Runtime::ASM::addis(context->r4, context->r7, 0x1);
/*8005E5A0 0005B3A0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r7));
/*8005E5A4 0005B3A4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 24);
/*8005E5A8 0005B3A8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r7));
/*8005E5AC 0005B3AC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 3, 28, 28);
/*8005E5B0 0005B3B0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7480, context->r4));
/*8005E5B4 0005B3B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r7));
/*8005E5B8 0005B3B8*/ PPC::Runtime::ASM::bl(fn_80445704);
/*8005E5BC 0005B3BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005E5C0 0005B3C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005E5C4 0005B3C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005E5C8 0005B3C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005E5CC 0005B3CC*/ PPC::Runtime::ASM::blr();
}