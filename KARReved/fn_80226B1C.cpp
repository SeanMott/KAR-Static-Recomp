//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80226B1C(PPC::Runtime::GCContext* context)
{
/*80226B1C 0022391C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80226B20 00223920*/ PPC::Runtime::ASM::mflr(context->r0);
/*80226B24 00223924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80226B28 00223928*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80226B2C 0022392C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80226B30 00223930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80226B34 00223934*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80226B38 00223938*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80226B3C 0022393C*/ PPC::Runtime::ASM::blr();
}