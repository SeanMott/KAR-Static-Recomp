//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8014A9D8.hpp"



void fn_80132618(PPC::Runtime::GCContext* context)
{
/*80132618 0012F418*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8013261C 0012F41C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80132620 0012F420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132624 0012F424*/ PPC::Runtime::ASM::bl(fn_8014A9D8);
/*80132628 0012F428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013262C 0012F42C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80132630 0012F430*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80132634 0012F434*/ PPC::Runtime::ASM::blr();
}