//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80068BFC(PPC::Runtime::GCContext* context)
{
/*80068BFC 000659FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80068C00 00065A00*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80068C04 00065A04*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*80068C08 00065A08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80068C0C 00065A0C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80068C10 00065A10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80068C14 00065A14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80068C18 00065A18*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80068C1C 00065A1C*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80068C20 00065A20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80068C24 00065A24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80068C28 00065A28*/ PPC::Runtime::ASM::beq(.L_80068C38);
/*80068C2C 00065A2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80068C30 00065A30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80068C34 00065A34*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80068C38, 0x80068C38) //this is a jump label
/*80068C38 00065A38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80068C3C 00065A3C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4);
/*80068C40 00065A40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80068C44 00065A44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80068C48 00065A48*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x2);
/*80068C4C 00065A4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80068C50 00065A50*/ PPC::Runtime::ASM::blr();
}