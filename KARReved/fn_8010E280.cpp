//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DB5D4.hpp"



void fn_8010E280(PPC::Runtime::GCContext* context)
{
/*8010E280 0010B080*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010E284 0010B084*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010E288 0010B088*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010E28C 0010B08C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E290 0010B090*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010E294 0010B094*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8010E298 0010B098*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8010E29C 0010B09C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8010E2A0 0010B0A0*/ PPC::Runtime::ASM::bl(fn_800DB5D4);
/*8010E2A4 0010B0A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010E2A8 0010B0A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010E2AC 0010B0AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010E2B0 0010B0B0*/ PPC::Runtime::ASM::blr();
}