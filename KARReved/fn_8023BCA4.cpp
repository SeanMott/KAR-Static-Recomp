//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8023BCA4(PPC::Runtime::GCContext* context)
{
/*8023BCA4 00238AA4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/* 8023BCA8 00238AA8  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8023BCAC 00238AAC*/ PPC::Runtime::ASM::beqlr();
/*8023BCB0 00238AB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*8023BCB4 00238AB4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8023BCB8 00238AB8*/ PPC::Runtime::ASM::beqlr();
/*8023BCBC 00238ABC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8023BCC0 00238AC0*/ PPC::Runtime::ASM::blr();
}