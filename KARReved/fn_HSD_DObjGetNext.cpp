//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_DObjGetNext(PPC::Runtime::GCContext* context)
{
/*80052C8C 0004FA8C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80052C90 0004FA90*/ PPC::Runtime::ASM::beq(.L_80052C9C);
/*80052C94 0004FA94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80052C98 0004FA98*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80052C9C, 0x80052C9C) //this is a jump label
/*80052C9C 0004FA9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80052CA0 0004FAA0*/ PPC::Runtime::ASM::blr();
}