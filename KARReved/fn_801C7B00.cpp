//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C7B00(PPC::Runtime::GCContext* context)
{
/*801C7B00 001C4900*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C7B04 001C4904*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r3));
/* 801C7B08 001C4908  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*801C7B0C 001C490C*/ PPC::Runtime::ASM::beq(.L_801C7B24);
/*801C7B10 001C4910*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bb4, context->r3));
/* 801C7B14 001C4914  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*801C7B18 001C4918*/ PPC::Runtime::ASM::beq(.L_801C7B24);
/*801C7B1C 001C491C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801C7B20 001C4920*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_801C7B24, 0x801C7B24) //this is a jump label
/*801C7B24 001C4924*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C7B28 001C4928*/ PPC::Runtime::ASM::blr();
}