//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_AObjSetRate(PPC::Runtime::GCContext* context)
{
/*803FDA3C 003FA83C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FDA40 003FA840*/ PPC::Runtime::ASM::beqlr();
/*803FDA44 003FA844*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803FDA48 003FA848*/ PPC::Runtime::ASM::blr();
}