//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_80214A54(PPC::Runtime::GCContext* context)
{
/*80214A54 00211854*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80214A58 00211858*/ PPC::Runtime::ASM::mflr(context->r0);
/*80214A5C 0021185C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214A60 00211860*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*80214A64 00211864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214A68 00211868*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80214A6C 0021186C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80214A70 00211870*/ PPC::Runtime::ASM::blr();
}