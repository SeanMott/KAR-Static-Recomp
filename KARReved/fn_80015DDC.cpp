//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_80015DDC(PPC::Runtime::GCContext* context)
{
/*80015DDC 00012BDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80015DE0 00012BE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80015DE4 00012BE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80015DE8 00012BE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80015DEC 00012BEC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80015DF0 00012BF0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80015DF4 00012BF4*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80015DF8 00012BF8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4e, context->r3));
/*80015DFC 00012BFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80015E00 00012C00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80015E04 00012C04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80015E08 00012C08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80015E0C 00012C0C*/ PPC::Runtime::ASM::blr();
}