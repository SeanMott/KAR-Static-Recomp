//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80284004.hpp"



void fn_80283D30(PPC::Runtime::GCContext* context)
{
/*80283D30 00280B30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80283D34 00280B34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80283D38 00280B38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283D3C 00280B3C*/ PPC::Runtime::ASM::bl(fn_80284004);
/*80283D40 00280B40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283D44 00280B44*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80283D48 00280B48*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80283D4C 00280B4C*/ PPC::Runtime::ASM::blr();
}