//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C86DC(PPC::Runtime::GCContext* context)
{
/*801C86DC 001C54DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C86E0 001C54E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc38, context->r3));
/* 801C86E4 001C54E4  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*801C86E8 001C54E8*/ PPC::Runtime::ASM::bne(.L_801C86F8);
/*801C86EC 001C54EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e0, context->r3));
/*801C86F0 001C54F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801C86F4 001C54F4*/ PPC::Runtime::ASM::beq(.L_801C8700);
RUNTIME_PPC_JUMP_LABEL(.L_801C86F8, 0x801C86F8) //this is a jump label
/*801C86F8 001C54F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801C86FC 001C54FC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_801C8700, 0x801C8700) //this is a jump label
/*801C8700 001C5500*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C8704 001C5504*/ PPC::Runtime::ASM::blr();
}