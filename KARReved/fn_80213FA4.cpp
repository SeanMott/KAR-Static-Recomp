//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8020335C.hpp"
#include "fn_8020B490.hpp"



void fn_80213FA4(PPC::Runtime::GCContext* context)
{
/*80213FA4 00210DA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80213FA8 00210DA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80213FAC 00210DAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213FB0 00210DB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80213FB4 00210DB4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80213FB8 00210DB8*/ PPC::Runtime::ASM::bl(fn_8020335C);
/*80213FBC 00210DBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80213FC0 00210DC0*/ PPC::Runtime::ASM::bl(fn_8020B490);
/*80213FC4 00210DC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213FC8 00210DC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80213FCC 00210DCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80213FD0 00210DD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80213FD4 00210DD4*/ PPC::Runtime::ASM::blr();
}