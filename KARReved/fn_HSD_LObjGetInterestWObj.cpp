//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_LObjGetInterestWObj(PPC::Runtime::GCContext* context)
{
/*803FFE0C 003FCC0C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FFE10 003FCC10*/ PPC::Runtime::ASM::beq(.L_803FFE1C);
/*803FFE14 003FCC14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*803FFE18 003FCC18*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803FFE1C, 0x803FFE1C) //this is a jump label
/*803FFE1C 003FCC1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803FFE20 003FCC20*/ PPC::Runtime::ASM::blr();
}