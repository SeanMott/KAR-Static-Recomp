//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800FCD0C(PPC::Runtime::GCContext* context)
{
/*800FCD0C 000F9B0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FCD10 000F9B10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*800FCD14 000F9B14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800FCD18 000F9B18*/ PPC::Runtime::ASM::beq(.L_800FCD3C);
/*800FCD1C 000F9B1C*/ PPC::Runtime::ASM::bge(.L_800FCD2C);
/*800FCD20 000F9B20*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FCD24 000F9B24*/ PPC::Runtime::ASM::bge(.L_800FCD34);
/*800FCD28 000F9B28*/ PPC::Runtime::ASM::b(.L_800FCD3C);
RUNTIME_PPC_JUMP_LABEL(.L_800FCD2C, 0x800FCD2C) //this is a jump label
/*800FCD2C 000F9B2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800FCD30 000F9B30*/ PPC::Runtime::ASM::bge(.L_800FCD3C);
RUNTIME_PPC_JUMP_LABEL(.L_800FCD34, 0x800FCD34) //this is a jump label
/*800FCD34 000F9B34*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800FCD38 000F9B38*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800FCD3C, 0x800FCD3C) //this is a jump label
/*800FCD3C 000F9B3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800FCD40 000F9B40*/ PPC::Runtime::ASM::blr();
}