//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_VISetPreRetraceCallback(PPC::Runtime::GCContext* context)
{
/*803DD98C 003DA78C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DD990 003DA790*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DD994 003DA794*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803DD998 003DA798*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DD99C 003DA79C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DD9A0 003DA7A0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803DD9A4 003DA7A4*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DDF7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DD9A8 003DA7A8*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DD9AC 003DA7AC*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DDF7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DD9B0 003DA7B0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DD9B4 003DA7B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803DD9B8 003DA7B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DD9BC 003DA7BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DD9C0 003DA7C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DD9C4 003DA7C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803DD9C8 003DA7C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DD9CC 003DA7CC*/ PPC::Runtime::ASM::blr();
}