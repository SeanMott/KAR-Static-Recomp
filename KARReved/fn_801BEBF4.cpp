//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801BE8FC.hpp"



void fn_801BEBF4(PPC::Runtime::GCContext* context)
{
/*801BEBF4 001BB9F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BEBF8 001BB9F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BEBFC 001BB9FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BEC00 001BBA00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BEC04 001BBA04*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BEC08 001BBA08*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801BEC0C 001BBA0C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BEC10 001BBA10*/ PPC::Runtime::ASM::beq(.L_801BEC20);
/*801BEC14 001BBA14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BEC18 001BBA18*/ PPC::Runtime::ASM::bl(fn_801BE8FC);
/*801BEC1C 001BBA1C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801BEC20, 0x801BEC20) //this is a jump label
/*801BEC20 001BBA20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BEC24 001BBA24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BEC28 001BBA28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BEC2C 001BBA2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BEC30 001BBA30*/ PPC::Runtime::ASM::blr();
}