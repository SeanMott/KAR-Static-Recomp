//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8014B2C4.hpp"



void fn_80132848(PPC::Runtime::GCContext* context)
{
/*80132848 0012F648*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8013284C 0012F64C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80132850 0012F650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132854 0012F654*/ PPC::Runtime::ASM::bl(fn_8014B2C4);
/*80132858 0012F658*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013285C 0012F65C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80132860 0012F660*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80132864 0012F664*/ PPC::Runtime::ASM::blr();
}