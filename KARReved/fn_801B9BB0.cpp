//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801B9BB0(PPC::Runtime::GCContext* context)
{
/*801B9BB0 001B69B0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B9BB4 001B69B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r3));
/*801B9BB8 001B69B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r4));
/*801B9BBC 001B69BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801B9BC0 001B69C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r3));
/*801B9BC4 001B69C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r3));
/*801B9BC8 001B69C8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*801B9BCC 001B69CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r3));
/*801B9BD0 001B69D0*/ PPC::Runtime::ASM::blr();
}