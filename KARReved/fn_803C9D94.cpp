//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_803C9D94(PPC::Runtime::GCContext* context)
{
/*803C9D94 003C6B94*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C9D98 003C6B98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C9D9C 003C6B9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803C9DA0 003C6BA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C9DA4 003C6BA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C9DA8 003C6BA8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803C9DAC 003C6BAC*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DDE44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C9DB0 003C6BB0*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803C9DB4 003C6BB4*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DDE44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C9DB8 003C6BB8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803C9DBC 003C6BBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C9DC0 003C6BC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C9DC4 003C6BC4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C9DC8 003C6BC8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C9DCC 003C6BCC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803C9DD0 003C6BD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C9DD4 003C6BD4*/ PPC::Runtime::ASM::blr();
}