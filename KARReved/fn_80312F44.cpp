//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80312F44(PPC::Runtime::GCContext* context)
{
/*80312F44 0030FD44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80312F48 0030FD48*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E0620 @ Get_MemoryOffset_HighBit);
/*80312F4C 0030FD4C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804E0620 @ Get_MemoryOffset_LowBit);
/*80312F50 0030FD50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80312F54 0030FD54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b, context->r3));
/*80312F58 0030FD58*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80312F5C 0030FD5C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x24);
/*80312F60 0030FD60*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*80312F64 0030FD64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80312F68 0030FD68*/ PPC::Runtime::ASM::blr();
}