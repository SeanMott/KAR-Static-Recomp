//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B836C.hpp"



void fn_80192D94(PPC::Runtime::GCContext* context)
{
/*80192D94 0018FB94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80192D98 0018FB98*/ PPC::Runtime::ASM::mflr(context->r0);
/*80192D9C 0018FB9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192DA0 0018FBA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x450, context->r3));
/*80192DA4 0018FBA4*/ PPC::Runtime::ASM::bl(fn_800B836C);
/*80192DA8 0018FBA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192DAC 0018FBAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80192DB0 0018FBB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80192DB4 0018FBB4*/ PPC::Runtime::ASM::blr();
}