//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802361A0.hpp"



void fn_802253D4(PPC::Runtime::GCContext* context)
{
/*802253D4 002221D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802253D8 002221D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802253DC 002221DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802253E0 002221E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802253E4 002221E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802253E8 002221E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r3));
/*802253EC 002221EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r31));
/*802253F0 002221F0*/ PPC::Runtime::ASM::bl(fn_802361A0);
/*802253F4 002221F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802253F8 002221F8*/ PPC::Runtime::ASM::bne(.L_80225404);
/*802253FC 002221FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80225400 00222200*/ PPC::Runtime::ASM::bl(fn_80428F64);
RUNTIME_PPC_JUMP_LABEL(.L_80225404, 0x80225404) //this is a jump label
/*80225404 00222204*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80225408 00222208*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022540C 0022220C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80225410 00222210*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80225414 00222214*/ PPC::Runtime::ASM::blr();
}