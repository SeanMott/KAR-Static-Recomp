//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801006F4.hpp"



void fn_8010F0A4(PPC::Runtime::GCContext* context)
{
/*8010F0A4 0010BEA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010F0A8 0010BEA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010F0AC 0010BEAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F0B0 0010BEB0*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x48);
/*8010F0B4 0010BEB4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010F0B8 0010BEB8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8010F0BC 0010BEBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3));
/*8010F0C0 0010BEC0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8010F0C4 0010BEC4*/ PPC::Runtime::ASM::beq(.L_8010F0CC);
/*8010F0C8 0010BEC8*/ PPC::Runtime::ASM::bl(fn_801006F4);
RUNTIME_PPC_JUMP_LABEL(.L_8010F0CC, 0x8010F0CC) //this is a jump label
/*8010F0CC 0010BECC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F0D0 0010BED0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010F0D4 0010BED4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010F0D8 0010BED8*/ PPC::Runtime::ASM::blr();
}