//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_LObjGetFlags(PPC::Runtime::GCContext* context)
{
/*803FDACC 003FA8CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FDAD0 003FA8D0*/ PPC::Runtime::ASM::beq(.L_803FDADC);
/*803FDAD4 003FA8D4*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803FDAD8 003FA8D8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803FDADC, 0x803FDADC) //this is a jump label
/*803FDADC 003FA8DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803FDAE0 003FA8E0*/ PPC::Runtime::ASM::blr();
}