//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80234DFC(PPC::Runtime::GCContext* context)
{
/*80234DFC 00231BFC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/* 80234E00 00231C00  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*80234E04 00231C04*/ PPC::Runtime::ASM::beqlr();
/*80234E08 00231C08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80234E0C 00231C0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80234E10 00231C10*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*80234E14 00231C14*/ PPC::Runtime::ASM::blr();
}