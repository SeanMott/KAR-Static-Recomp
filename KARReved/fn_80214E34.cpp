//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_80214E34(PPC::Runtime::GCContext* context)
{
/*80214E34 00211C34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80214E38 00211C38*/ PPC::Runtime::ASM::mflr(context->r0);
/*80214E3C 00211C3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214E40 00211C40*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*80214E44 00211C44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214E48 00211C48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80214E4C 00211C4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80214E50 00211C50*/ PPC::Runtime::ASM::blr();
}