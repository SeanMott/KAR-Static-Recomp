//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191F74.hpp"



void fn_8022CB8C(PPC::Runtime::GCContext* context)
{
/*8022CB8C 0022998C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022CB90 00229990*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022CB94 00229994*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x90c);
/*8022CB98 00229998*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022CB9C 0022999C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022CBA0 002299A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022CBA4 002299A4*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8022CBA8 002299A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8022CBAC 002299AC*/ PPC::Runtime::ASM::bl(fn_80191F74);
/*8022CBB0 002299B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022CBB4 002299B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022CBB8 002299B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022CBBC 002299BC*/ PPC::Runtime::ASM::blr();
}