//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C824.hpp"



void fn_80251CC8(PPC::Runtime::GCContext* context)
{
/*80251CC8 0024EAC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80251CCC 0024EACC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80251CD0 0024EAD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80251CD4 0024EAD4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80251CD8 0024EAD8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80251CDC 0024EADC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80251CE0 0024EAE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r3));
/*80251CE4 0024EAE4*/ PPC::Runtime::ASM::bl(fn_8018C824);
/*80251CE8 0024EAE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80251CEC 0024EAEC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*80251CF0 0024EAF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80251CF4 0024EAF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80251CF8 0024EAF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80251CFC 0024EAFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80251D00 0024EB00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80251D04 0024EB04*/ PPC::Runtime::ASM::blr();
}