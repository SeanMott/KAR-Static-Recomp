//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_CObjSetProjectionType(PPC::Runtime::GCContext* context)
{
/*80402ED4 003FFCD4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80402ED8 003FFCD8*/ PPC::Runtime::ASM::beqlr();
/*80402EDC 003FFCDC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*80402EE0 003FFCE0*/ PPC::Runtime::ASM::blr();
}