//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void PPCHalt(PPC::Runtime::GCContext* context)
{
/*803C335C 003C015C*/ PPC::Runtime::ASM::sync();
RUNTIME_PPC_JUMP_LABEL(.L_803C3360, 0x803C3360) //this is a jump label
/*803C3360 003C0160*/ PPC::Runtime::ASM::nop();
/*803C3364 003C0164*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C3368 003C0168*/ PPC::Runtime::ASM::nop();
/*803C336C 003C016C*/ PPC::Runtime::ASM::b(.L_803C3360);
}