//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801C4244(PPC::Runtime::GCContext* context)
{
/*801C4244 001C1044*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4248 001C1048*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C424C 001C104C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4250 001C1050*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801C4254 001C1054*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4258 001C1058*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C425C 001C105C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4260 001C1060*/ PPC::Runtime::ASM::blr();
}