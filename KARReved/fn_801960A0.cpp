//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C8C4.hpp"



void fn_801960A0(PPC::Runtime::GCContext* context)
{
/*801960A0 00192EA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801960A4 00192EA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801960A8 00192EA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801960AC 00192EAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 4);
/*801960B0 00192EB0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r3));
/*801960B4 00192EB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r3));
/*801960B8 00192EB8*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*801960BC 00192EBC*/ PPC::Runtime::ASM::bl(fn_8018C8C4);
/*801960C0 00192EC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801960C4 00192EC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801960C8 00192EC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801960CC 00192ECC*/ PPC::Runtime::ASM::blr();
}