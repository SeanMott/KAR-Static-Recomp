//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn___GXWriteFifoIntReset(PPC::Runtime::GCContext* context)
{
/*803C9EE0 003C6CE0*/ PPC::Runtime::ASM::lwz(context->r6, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C9EE4 003C6CE4*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 24);
/*803C9EE8 003C6CE8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r4, 24, 1);
/*803C9EEC 003C6CEC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803C9EF0 003C6CF0*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r5, 1);
/*803C9EF4 003C6CF4*/ PPC::Runtime::ASM::or(context->r3, context->r4, context->r3);
/*803C9EF8 003C6CF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803C9EFC 003C6CFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803C9F00 003C6D00*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 31, 29);
/*803C9F04 003C6D04*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*803C9F08 003C6D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803C9F0C 003C6D0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803C9F10 003C6D10*/ PPC::Runtime::ASM::lwz(context->r3, __cpReg @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C9F14 003C6D14*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803C9F18 003C6D18*/ PPC::Runtime::ASM::blr();
}