//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80179B78.hpp"



void fn_80133144(PPC::Runtime::GCContext* context)
{
/*80133144 0012FF44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80133148 0012FF48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013314C 0012FF4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133150 0012FF50*/ PPC::Runtime::ASM::bl(fn_80179B78);
/*80133154 0012FF54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133158 0012FF58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013315C 0012FF5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80133160 0012FF60*/ PPC::Runtime::ASM::blr();
}