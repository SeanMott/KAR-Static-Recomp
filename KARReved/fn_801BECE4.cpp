//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BEB1C.hpp"



void fn_801BECE4(PPC::Runtime::GCContext* context)
{
/*801BECE4 001BBAE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BECE8 001BBAE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BECEC 001BBAEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BECF0 001BBAF0*/ PPC::Runtime::ASM::bl(fn_801BEB1C);
/*801BECF4 001BBAF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BECF8 001BBAF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BECFC 001BBAFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BED00 001BBB00*/ PPC::Runtime::ASM::blr();
}