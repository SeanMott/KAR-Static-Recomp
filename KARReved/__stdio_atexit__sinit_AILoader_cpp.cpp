//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "__close_all.hpp"
#include "__close_all.hpp"



void __stdio_atexit__sinit_AILoader_cpp(PPC::Runtime::GCContext* context)
{
/*803B4AB0 003B18B0*/ PPC::Runtime::ASM::lis(context->r3, __close_all @ Get_MemoryOffset_HighBit);
/*803B4AB4 003B18B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, __close_all @ Get_MemoryOffset_LowBit);
/*803B4AB8 003B18B8*/ PPC::Runtime::ASM::stw(context->r0, __stdio_exit @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B4ABC 003B18BC*/ PPC::Runtime::ASM::blr();
}