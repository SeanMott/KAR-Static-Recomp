//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037CFEC.hpp"



void fn_80292AB4(PPC::Runtime::GCContext* context)
{
/*80292AB4 0028F8B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80292AB8 0028F8B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80292ABC 0028F8BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292AC0 0028F8C0*/ PPC::Runtime::ASM::bl(fn_8037CFEC);
/*80292AC4 0028F8C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292AC8 0028F8C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80292ACC 0028F8CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80292AD0 0028F8D0*/ PPC::Runtime::ASM::blr();
}