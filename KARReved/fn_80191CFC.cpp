//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80191CFC(PPC::Runtime::GCContext* context)
{
/*80191CFC 0018EAFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80191D00 0018EB00*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r3));
/*80191D04 0018EB04*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 28);
/*80191D08 0018EB08*/ PPC::Runtime::ASM::blr();
}