//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80146AE0(PPC::Runtime::GCContext* context)
{
/*80146AE0 001438E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80146AE4 001438E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80146AE8 001438E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80146AEC 001438EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80146AF0 001438F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80146AF4 001438F4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80146AF8 001438F8*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80146AFC 001438FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80146B00 00143900*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*80146B04 00143904*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*80146B08 00143908*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80146B0C 0014390C*/ PPC::Runtime::ASM::beq(.L_80146B1C);
/*80146B10 00143910*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*80146B14 00143914*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80146B18 00143918*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80146B1C, 0x80146B1C) //this is a jump label
/*80146B1C 0014391C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80146B20 00143920*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80146B24 00143924*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80146B28 00143928*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80146B2C 0014392C*/ PPC::Runtime::ASM::blr();
}