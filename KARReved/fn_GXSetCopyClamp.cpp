//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetCopyClamp(PPC::Runtime::GCContext* context)
{
/*803CC89C 003C969C*/ PPC::Runtime::ASM::lwz(context->r6, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC8A0 003C96A0*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r3, 31);
/*803CC8A4 003C96A4*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*803CC8A8 003C96A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r6));
/*803CC8AC 003C96AC*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*803CC8B0 003C96B0*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 30, 30);
/*803CC8B4 003C96B4*/ PPC::Runtime::ASM::clrrwi(context->r5, context->r4, 1);
/*803CC8B8 003C96B8*/ PPC::Runtime::ASM::extrwi(context->r4, context->r0, 8, 19);
/*803CC8BC 003C96BC*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r4);
/*803CC8C0 003C96C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r6));
/*803CC8C4 003C96C4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x2);
/*803CC8C8 003C96C8*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*803CC8CC 003C96CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r6));
/*803CC8D0 003C96D0*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r0, 28, 23, 30);
/*803CC8D4 003C96D4*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 31, 29);
/*803CC8D8 003C96D8*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r5);
/*803CC8DC 003C96DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r6));
/*803CC8E0 003C96E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r6));
/*803CC8E4 003C96E4*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*803CC8E8 003C96E8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r4);
/*803CC8EC 003C96EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r6));
/*803CC8F0 003C96F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r6));
/*803CC8F4 003C96F4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 31, 29);
/*803CC8F8 003C96F8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r5);
/*803CC8FC 003C96FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r6));
/*803CC900 003C9700*/ PPC::Runtime::ASM::blr();
}