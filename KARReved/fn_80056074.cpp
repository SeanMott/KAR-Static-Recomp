//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80056074(PPC::Runtime::GCContext* context)
{
/*80056074 00052E74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80056078 00052E78*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005607C 00052E7C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80056080 00052E80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80056084 00052E84*/ PPC::Runtime::ASM::beq(.L_8005609C);
/*80056088 00052E88*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8005608C 00052E8C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80056090 00052E90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80056094 00052E94*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r5));
/*80056098 00052E98*/ PPC::Runtime::ASM::bl(fn_HSD_AObjInterpretAnim);
RUNTIME_PPC_JUMP_LABEL(.L_8005609C, 0x8005609C) //this is a jump label
/*8005609C 00052E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800560A0 00052EA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800560A4 00052EA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800560A8 00052EA8*/ PPC::Runtime::ASM::blr();
}