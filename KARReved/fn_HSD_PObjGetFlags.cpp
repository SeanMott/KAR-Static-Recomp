//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_PObjGetFlags(PPC::Runtime::GCContext* context)
{
/*8040531C 0040211C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80405320 00402120*/ PPC::Runtime::ASM::beq(.L_8040532C);
/*80405324 00402124*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80405328 00402128*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8040532C, 0x8040532C) //this is a jump label
/*8040532C 0040212C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80405330 00402130*/ PPC::Runtime::ASM::blr();
}