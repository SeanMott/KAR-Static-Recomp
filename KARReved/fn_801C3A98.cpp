//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019418C.hpp"
#include "fn_801C3AE0.hpp"



void fn_801C3A98(PPC::Runtime::GCContext* context)
{
/*801C3A98 001C0898*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3A9C 001C089C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3AA0 001C08A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3AA4 001C08A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3AA8 001C08A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C3AAC 001C08AC*/ PPC::Runtime::ASM::bl(fn_8019418C);
/*801C3AB0 001C08B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C3AB4 001C08B4*/ PPC::Runtime::ASM::beq(.L_801C3AC8);
/*801C3AB8 001C08B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3ABC 001C08BC*/ PPC::Runtime::ASM::bl(fn_801C3AE0);
/*801C3AC0 001C08C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801C3AC4 001C08C4*/ PPC::Runtime::ASM::b(.L_801C3ACC);
RUNTIME_PPC_JUMP_LABEL(.L_801C3AC8, 0x801C3AC8) //this is a jump label
/*801C3AC8 001C08C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C3ACC, 0x801C3ACC) //this is a jump label
/*801C3ACC 001C08CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3AD0 001C08D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3AD4 001C08D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3AD8 001C08D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3ADC 001C08DC*/ PPC::Runtime::ASM::blr();
}