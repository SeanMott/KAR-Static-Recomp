//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005E108.hpp"



void fn_800EA1D0(PPC::Runtime::GCContext* context)
{
/*800EA1D0 000E6FD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800EA1D4 000E6FD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EA1D8 000E6FD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EA1DC 000E6FDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800EA1E0 000E6FE0*/ PPC::Runtime::ASM::bl(fn_8005E108);
/*800EA1E4 000E6FE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EA1E8 000E6FE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EA1EC 000E6FEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800EA1F0 000E6FF0*/ PPC::Runtime::ASM::blr();
}