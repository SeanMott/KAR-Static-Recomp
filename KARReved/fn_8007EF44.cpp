//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007EF44(PPC::Runtime::GCContext* context)
{
/*8007EF44 0007BD44*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_HighBit);
/*8007EF48 0007BD48*/ PPC::Runtime::ASM::addi(context->r5, context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_LowBit);
/*8007EF4C 0007BD4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8007EF50 0007BD50*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8007EF54 0007BD54*/ PPC::Runtime::ASM::beqlr();
/*8007EF58 0007BD58*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r4));
/*8007EF5C 0007BD5C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8007EF60 0007BD60*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 26, 24);
/*8007EF64 0007BD64*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r4));
/*8007EF68 0007BD68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8007EF6C 0007BD6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r4));
/*8007EF70 0007BD70*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 25);
/*8007EF74 0007BD74*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r4));
/*8007EF78 0007BD78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8007EF7C 0007BD7C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*8007EF80 0007BD80*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8007EF84 0007BD84*/ PPC::Runtime::ASM::blr();
}