//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800BC290(PPC::Runtime::GCContext* context)
{
/*800BC290 000B9090*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BC294 000B9094*/ PPC::Runtime::ASM::beq(.L_800BC2C8);
/*800BC298 000B9098*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*800BC29C 000B909C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BC2A0 000B90A0*/ PPC::Runtime::ASM::beq(.L_800BC2C8);
/*800BC2A4 000B90A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800BC2A8 000B90A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800BC2AC 000B90AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BC2B0 000B90B0*/ PPC::Runtime::ASM::beq(.L_800BC2C8);
/*800BC2B4 000B90B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800BC2B8 000B90B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800BC2BC 000B90BC*/ PPC::Runtime::ASM::bne(.L_800BC2C8);
/*800BC2C0 000B90C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800BC2C4 000B90C4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800BC2C8, 0x800BC2C8) //this is a jump label
/*800BC2C8 000B90C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800BC2CC 000B90CC*/ PPC::Runtime::ASM::blr();
}