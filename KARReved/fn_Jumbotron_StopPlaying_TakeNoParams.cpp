//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_Jumbotron_StopPlaying_TakeNoParams(PPC::Runtime::GCContext* context)
{
/*80256988 00253788*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025698C 0025378C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80256990 00253790*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r3));
/*80256994 00253794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r3));
/*80256998 00253798*/ PPC::Runtime::ASM::blr();
}