//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetPointSize(PPC::Runtime::GCContext* context)
{
/*803CC474 003C9274*/ PPC::Runtime::ASM::lwz(context->r7, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC478 003C9278*/ PPC::Runtime::ASM::slwi(context->r6, context->r4, 19);
/*803CC47C 003C927C*/ PPC::Runtime::ASM::li(context->r5, 0x61);
/*803CC480 003C9280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r7));
/*803CC484 003C9284*/ PPC::Runtime::ASM::lis(context->r4, 0xcc01);
/*803CC488 003C9288*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 15);
/*803CC48C 003C928C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 8, 16, 23);
/*803CC490 003C9290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r7));
/*803CC494 003C9294*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CC498 003C9298*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r7));
/*803CC49C 003C929C*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 13, 9);
/*803CC4A0 003C92A0*/ PPC::Runtime::ASM::or(context->r3, context->r3, context->r6);
/*803CC4A4 003C92A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r7));
/*803CC4A8 003C92A8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803CC4AC 003C92AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r7));
/*803CC4B0 003C92B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803CC4B4 003C92B4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*803CC4B8 003C92B8*/ PPC::Runtime::ASM::blr();
}