//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetAlphaCompare(PPC::Runtime::GCContext* context)
{
/*803CF05C 003CBE5C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*803CF060 003CBE60*/ PPC::Runtime::ASM::lwz(context->r4, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CF064 003CBE64*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0xf300);
/*803CF068 003CBE68*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 15);
/*803CF06C 003CBE6C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 8, 16, 23);
/*803CF070 003CBE70*/ PPC::Runtime::ASM::rlwinm(context->r7, context->r0, 0, 16, 12);
/*803CF074 003CBE74*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 16);
/*803CF078 003CBE78*/ PPC::Runtime::ASM::or(context->r0, context->r7, context->r0);
/*803CF07C 003CBE7C*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 13, 9);
/*803CF080 003CBE80*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 19);
/*803CF084 003CBE84*/ PPC::Runtime::ASM::or(context->r6, context->r3, context->r0);
/*803CF088 003CBE88*/ PPC::Runtime::ASM::li(context->r0, 0x61);
/*803CF08C 003CBE8C*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*803CF090 003CBE90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CF094 003CBE94*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r6, 0, 10, 7);
/*803CF098 003CBE98*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 22);
/*803CF09C 003CBE9C*/ PPC::Runtime::ASM::or(context->r0, context->r6, context->r0);
/*803CF0A0 003CBEA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CF0A4 003CBEA4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CF0A8 003CBEA8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*803CF0AC 003CBEAC*/ PPC::Runtime::ASM::blr();
}