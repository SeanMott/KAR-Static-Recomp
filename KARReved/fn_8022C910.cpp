//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C85A8.hpp"



void fn_8022C910(PPC::Runtime::GCContext* context)
{
/*8022C910 00229710*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022C914 00229714*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022C918 00229718*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x90c);
/*8022C91C 0022971C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022C920 00229720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022C924 00229724*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022C928 00229728*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8022C92C 0022972C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e, context->r4));
/*8022C930 00229730*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f, context->r4));
/*8022C934 00229734*/ PPC::Runtime::ASM::bl(fn_801C85A8);
/*8022C938 00229738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022C93C 0022973C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022C940 00229740*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022C944 00229744*/ PPC::Runtime::ASM::blr();
}