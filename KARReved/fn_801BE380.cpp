//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BE408.hpp"



void fn_801BE380(PPC::Runtime::GCContext* context)
{
/*801BE380 001BB180*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BE384 001BB184*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BE388 001BB188*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE38C 001BB18C*/ PPC::Runtime::ASM::bl(fn_801BE408);
/*801BE390 001BB190*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BE394 001BB194*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE398 001BB198*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BE39C 001BB19C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BE3A0 001BB1A0*/ PPC::Runtime::ASM::blr();
}