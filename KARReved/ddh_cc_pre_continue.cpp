//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803F3944.hpp"



void ddh_cc_pre_continue(PPC::Runtime::GCContext* context)
{
/*803C2A34 003BF834*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C2A38 003BF838*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C2A3C 003BF83C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C2A40 003BF840*/ PPC::Runtime::ASM::bl(fn_803F3944);
/*803C2A44 003BF844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C2A48 003BF848*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C2A4C 003BF84C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C2A50 003BF850*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C2A54 003BF854*/ PPC::Runtime::ASM::blr();
}