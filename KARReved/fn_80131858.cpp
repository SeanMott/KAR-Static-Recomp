//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80131858(PPC::Runtime::GCContext* context)
{
/*80131858 0012E658*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*8013185C 0012E65C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131860 0012E660*/ PPC::Runtime::ASM::stb(context->r0, lbl_80558788 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*80131864 0012E664*/ PPC::Runtime::ASM::blr();
}