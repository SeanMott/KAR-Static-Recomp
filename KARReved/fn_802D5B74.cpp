//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802F7F24.hpp"



void fn_802D5B74(PPC::Runtime::GCContext* context)
{
/*802D5B74 002D2974*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D5B78 002D2978*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D5B7C 002D297C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5B80 002D2980*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D5B84 002D2984*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D5B88 002D2988*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*802D5B8C 002D298C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D5B90 002D2990*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802D5B94 002D2994*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D5B98 002D2998*/ PPC::Runtime::ASM::bctrl();
/*802D5B9C 002D299C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xd);
/*802D5BA0 002D29A0*/ PPC::Runtime::ASM::beq(.L_802D5BD0);
/*802D5BA4 002D29A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*802D5BA8 002D29A8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802D5BAC 002D29AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D5BB0 002D29B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D5BB4 002D29B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D5BB8 002D29B8*/ PPC::Runtime::ASM::bctrl();
/*802D5BBC 002D29BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*802D5BC0 002D29C0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D5BC4 002D29C4*/ PPC::Runtime::ASM::beq(.L_802D5BD0);
/*802D5BC8 002D29C8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x80);
/*802D5BCC 002D29CC*/ PPC::Runtime::ASM::bl(fn_802F7F24);
RUNTIME_PPC_JUMP_LABEL(.L_802D5BD0, 0x802D5BD0) //this is a jump label
/*802D5BD0 002D29D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5BD4 002D29D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D5BD8 002D29D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D5BDC 002D29DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D5BE0 002D29E0*/ PPC::Runtime::ASM::blr();
}