//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005F59C.hpp"



void fn_80222F30(PPC::Runtime::GCContext* context)
{
/*80222F30 0021FD30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80222F34 0021FD34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80222F38 0021FD38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80222F3C 0021FD3C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r3));
/*80222F40 0021FD40*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80222F44 0021FD44*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80222F48 0021FD48*/ PPC::Runtime::ASM::bl(fn_8005F59C);
/*80222F4C 0021FD4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80222F50 0021FD50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80222F54 0021FD54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80222F58 0021FD58*/ PPC::Runtime::ASM::blr();
}