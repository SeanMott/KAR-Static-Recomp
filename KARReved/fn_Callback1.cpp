//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ETHIn.hpp"



void fn_Callback1(PPC::Runtime::GCContext* context)
{
/*8047126C 0046E06C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80471270 0046E070*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x0);
/*80471274 0046E074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80471278 0046E078*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x12);
/*8047127C 0046E07C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x0);
/*80471280 0046E080*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*80471284 0046E084*/ PPC::Runtime::ASM::blt(.L_80471298);
/*80471288 0046E088*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*8047128C 0046E08C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
/*80471290 0046E090*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x4);
/*80471294 0046E094*/ PPC::Runtime::ASM::bl(fn_ETHIn);
RUNTIME_PPC_JUMP_LABEL(.L_80471298, 0x80471298) //this is a jump label
/*80471298 0046E098*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8047129C 0046E09C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*804712A0 0046E0A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804712A4 0046E0A4*/ PPC::Runtime::ASM::blr();
}