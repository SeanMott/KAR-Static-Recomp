//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_800088F8(PPC::Runtime::GCContext* context)
{
/*800088F8 000056F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800088FC 000056FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80008900 00005700*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80008904 00005704*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80008908 00005708*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000890C 0000570C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d8, context->r3));
/*80008910 00005710*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80008914 00005714*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80008918 00005718*/ PPC::Runtime::ASM::blr();
}