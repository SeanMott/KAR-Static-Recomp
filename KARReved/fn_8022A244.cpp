//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022A244(PPC::Runtime::GCContext* context)
{
/*8022A244 00227044*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8022A248 00227048*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8022A24C 0022704C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8022A250 00227050*/ PPC::Runtime::ASM::bne(.L_8022A268);
/*8022A254 00227054*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r3));
/* 8022A258 00227058  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8022A25C 0022705C*/ PPC::Runtime::ASM::beq(.L_8022A268);
/*8022A260 00227060*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8022A264 00227064*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8022A268, 0x8022A268) //this is a jump label
/*8022A268 00227068*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022A26C 0022706C*/ PPC::Runtime::ASM::blr();
}