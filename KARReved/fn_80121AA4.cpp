//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80121AA4(PPC::Runtime::GCContext* context)
{
/*80121AA4 0011E8A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80121AA8 0011E8A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80121AAC 0011E8AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80121AB0 0011E8B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80121AB4 0011E8B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80121AB8 0011E8B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/* 80121ABC 0011E8BC  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*80121AC0 0011E8C0*/ PPC::Runtime::ASM::beq(.L_80121AC8);
/*80121AC4 0011E8C4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_80121AC8, 0x80121AC8) //this is a jump label
/*80121AC8 0011E8C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80121ACC 0011E8CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80121AD0 0011E8D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80121AD4 0011E8D4*/ PPC::Runtime::ASM::blr();
}