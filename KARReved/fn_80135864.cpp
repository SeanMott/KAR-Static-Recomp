//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015D8EC.hpp"



void fn_80135864(PPC::Runtime::GCContext* context)
{
/*80135864 00132664*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135868 00132668*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013586C 0013266C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135870 00132670*/ PPC::Runtime::ASM::bl(fn_8015D8EC);
/*80135874 00132674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135878 00132678*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013587C 0013267C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135880 00132680*/ PPC::Runtime::ASM::blr();
}