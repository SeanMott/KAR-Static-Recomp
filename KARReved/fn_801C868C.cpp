//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D7E28.hpp"



void fn_801C868C(PPC::Runtime::GCContext* context)
{
/*801C868C 001C548C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C8690 001C5490*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C8694 001C5494*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8698 001C5498*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C869C 001C549C*/ PPC::Runtime::ASM::bl(fn_801D7E28);
/*801C86A0 001C54A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C86A4 001C54A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C86A8 001C54A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C86AC 001C54AC*/ PPC::Runtime::ASM::blr();
}