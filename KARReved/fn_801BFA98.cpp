//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FF6C.hpp"
#include "fn_801BE1DC.hpp"



void fn_801BFA98(PPC::Runtime::GCContext* context)
{
/*801BFA98 001BC898*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BFA9C 001BC89C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BFAA0 001BC8A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BFAA4 001BC8A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BFAA8 001BC8A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BFAAC 001BC8AC*/ PPC::Runtime::ASM::bl(fn_8019FF6C);
/*801BFAB0 001BC8B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BFAB4 001BC8B4*/ PPC::Runtime::ASM::bl(fn_801BE1DC);
/*801BFAB8 001BC8B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BFABC 001BC8BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BFAC0 001BC8C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BFAC4 001BC8C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BFAC8 001BC8C8*/ PPC::Runtime::ASM::blr();
}