//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802ADCEC(PPC::Runtime::GCContext* context)
{
/*802ADCEC 002AAAEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802ADCF0 002AAAF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802ADCF4 002AAAF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802ADCF8 002AAAF8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*802ADCFC 002AAAFC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802ADD00 002AAB00*/ PPC::Runtime::ASM::beq(.L_802ADD08);
/*802ADD04 002AAB04*/ PPC::Runtime::ASM::bl(fn_80397A48);
RUNTIME_PPC_JUMP_LABEL(.L_802ADD08, 0x802ADD08) //this is a jump label
/*802ADD08 002AAB08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802ADD0C 002AAB0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802ADD10 002AAB10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802ADD14 002AAB14*/ PPC::Runtime::ASM::blr();
}