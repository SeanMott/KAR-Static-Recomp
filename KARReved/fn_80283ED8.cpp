//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80283ED8(PPC::Runtime::GCContext* context)
{
/*80283ED8 00280CD8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80283EDC 00280CDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80283EE0 00280CE0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x3);
/*80283EE4 00280CE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283EE8 00280CE8*/ PPC::Runtime::ASM::beq(.L_80283EF0);
/*80283EEC 00280CEC*/ PPC::Runtime::ASM::bl(fn_GXLink_Common);
RUNTIME_PPC_JUMP_LABEL(.L_80283EF0, 0x80283EF0) //this is a jump label
/*80283EF0 00280CF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283EF4 00280CF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80283EF8 00280CF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80283EFC 00280CFC*/ PPC::Runtime::ASM::blr();
}