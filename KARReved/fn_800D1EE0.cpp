//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DC988.hpp"



void fn_800D1EE0(PPC::Runtime::GCContext* context)
{
/*800D1EE0 000CECE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D1EE4 000CECE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D1EE8 000CECE8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800D1EEC 000CECEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1EF0 000CECF0*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D1EF4 000CECF4*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x54);
/*800D1EF8 000CECF8*/ PPC::Runtime::ASM::bl(fn_800DC988);
/*800D1EFC 000CECFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1F00 000CED00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D1F04 000CED04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D1F08 000CED08*/ PPC::Runtime::ASM::blr();
}