//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_CObjSetFar(PPC::Runtime::GCContext* context)
{
/*80402CF4 003FFAF4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80402CF8 003FFAF8*/ PPC::Runtime::ASM::beqlr();
/*80402CFC 003FFAFC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80402D00 003FFB00*/ PPC::Runtime::ASM::blr();
}