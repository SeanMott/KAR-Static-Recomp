//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801630BC.hpp"



void fn_801360EC(PPC::Runtime::GCContext* context)
{
/*801360EC 00132EEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801360F0 00132EF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801360F4 00132EF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801360F8 00132EF8*/ PPC::Runtime::ASM::bl(fn_801630BC);
/*801360FC 00132EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136100 00132F00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136104 00132F04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80136108 00132F08*/ PPC::Runtime::ASM::blr();
}