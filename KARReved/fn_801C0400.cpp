//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0544.hpp"



void fn_801C0400(PPC::Runtime::GCContext* context)
{
/*801C0400 001BD200*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0404 001BD204*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0408 001BD208*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C040C 001BD20C*/ PPC::Runtime::ASM::bl(fn_801A0544);
/*801C0410 001BD210*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0414 001BD214*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0418 001BD218*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C041C 001BD21C*/ PPC::Runtime::ASM::blr();
}