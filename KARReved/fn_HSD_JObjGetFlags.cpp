//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_JObjGetFlags(PPC::Runtime::GCContext* context)
{
/*8040BD4C 00408B4C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8040BD50 00408B50*/ PPC::Runtime::ASM::beq(.L_8040BD5C);
/*8040BD54 00408B54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8040BD58 00408B58*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8040BD5C, 0x8040BD5C) //this is a jump label
/*8040BD5C 00408B5C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8040BD60 00408B60*/ PPC::Runtime::ASM::blr();
}