//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80100084.hpp"



void fn_8010F06C(PPC::Runtime::GCContext* context)
{
/*8010F06C 0010BE6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010F070 0010BE70*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010F074 0010BE74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F078 0010BE78*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x48);
/*8010F07C 0010BE7C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010F080 0010BE80*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8010F084 0010BE84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3));
/*8010F088 0010BE88*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8010F08C 0010BE8C*/ PPC::Runtime::ASM::beq(.L_8010F094);
/*8010F090 0010BE90*/ PPC::Runtime::ASM::bl(fn_80100084);
RUNTIME_PPC_JUMP_LABEL(.L_8010F094, 0x8010F094) //this is a jump label
/*8010F094 0010BE94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F098 0010BE98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010F09C 0010BE9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010F0A0 0010BEA0*/ PPC::Runtime::ASM::blr();
}