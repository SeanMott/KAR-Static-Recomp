//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetFogRangeAdj(PPC::Runtime::GCContext* context)
{
/* 803CF720 003CC520  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803CF724 003CC524*/ PPC::Runtime::ASM::beq(.L_803CF7E4);
/*803CF728 003CC528*/ PPC::Runtime::ASM::lhz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*803CF72C 003CC52C*/ PPC::Runtime::ASM::li(context->r0, 0x61);
/*803CF730 003CC530*/ PPC::Runtime::ASM::lhz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803CF734 003CC534*/ PPC::Runtime::ASM::lis(context->r6, 0xcc01);
/*803CF738 003CC538*/ PPC::Runtime::ASM::slwi(context->r8, context->r8, 12);
/*803CF73C 003CC53C*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r10, 0, 20, 31);
/*803CF740 003CC540*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF744 003CC544*/ PPC::Runtime::ASM::li(context->r7, 0xe9);
/*803CF748 003CC548*/ PPC::Runtime::ASM::clrlwi(context->r9, context->r8, 8);
/*803CF74C 003CC54C*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r7, 24, 0, 7);
/*803CF750 003CC550*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF754 003CC554*/ PPC::Runtime::ASM::li(context->r7, 0xea);
/*803CF758 003CC558*/ PPC::Runtime::ASM::slwi(context->r9, context->r7, 24);
/*803CF75C 003CC55C*/ PPC::Runtime::ASM::lhzu(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803CF760 003CC560*/ PPC::Runtime::ASM::li(context->r7, 0xeb);
/*803CF764 003CC564*/ PPC::Runtime::ASM::lhz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*803CF768 003CC568*/ PPC::Runtime::ASM::slwi(context->r8, context->r8, 12);
/*803CF76C 003CC56C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF770 003CC570*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r10, 0, 20, 31);
/*803CF774 003CC574*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r8, 0, 8, 31);
/*803CF778 003CC578*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF77C 003CC57C*/ PPC::Runtime::ASM::slwi(context->r9, context->r7, 24);
/*803CF780 003CC580*/ PPC::Runtime::ASM::li(context->r7, 0xec);
/*803CF784 003CC584*/ PPC::Runtime::ASM::lhz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r5));
/*803CF788 003CC588*/ PPC::Runtime::ASM::lhz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803CF78C 003CC58C*/ PPC::Runtime::ASM::slwi(context->r8, context->r8, 12);
/*803CF790 003CC590*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r10, 0, 20, 31);
/*803CF794 003CC594*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF798 003CC598*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r8, 0, 8, 31);
/*803CF79C 003CC59C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF7A0 003CC5A0*/ PPC::Runtime::ASM::slwi(context->r9, context->r7, 24);
/*803CF7A4 003CC5A4*/ PPC::Runtime::ASM::li(context->r7, 0xed);
/*803CF7A8 003CC5A8*/ PPC::Runtime::ASM::lhz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r5));
/*803CF7AC 003CC5AC*/ PPC::Runtime::ASM::lhz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803CF7B0 003CC5B0*/ PPC::Runtime::ASM::slwi(context->r8, context->r8, 12);
/*803CF7B4 003CC5B4*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r10, 0, 20, 31);
/*803CF7B8 003CC5B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF7BC 003CC5BC*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r8, 0, 8, 31);
/*803CF7C0 003CC5C0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF7C4 003CC5C4*/ PPC::Runtime::ASM::lhz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r5));
/*803CF7C8 003CC5C8*/ PPC::Runtime::ASM::lhz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*803CF7CC 003CC5CC*/ PPC::Runtime::ASM::slwi(context->r8, context->r8, 12);
/*803CF7D0 003CC5D0*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r10, 0, 20, 31);
/*803CF7D4 003CC5D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*803CF7D8 003CC5D8*/ PPC::Runtime::ASM::clrlwi(context->r9, context->r8, 8);
/*803CF7DC 003CC5DC*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r7, 24, 0, 7);
/*803CF7E0 003CC5E0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_803CF7E4, 0x803CF7E4) //this is a jump label
/*803CF7E4 003CC5E4*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r4, 16);
/*803CF7E8 003CC5E8*/ PPC::Runtime::ASM::lwz(context->r4, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CF7EC 003CC5EC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x156);
/*803CF7F0 003CC5F0*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r0, 0, 22, 20);
/*803CF7F4 003CC5F4*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r3, 24, 10);
/*803CF7F8 003CC5F8*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803CF7FC 003CC5FC*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 8);
/*803CF800 003CC600*/ PPC::Runtime::ASM::li(context->r0, 0x61);
/*803CF804 003CC604*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*803CF808 003CC608*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CF80C 003CC60C*/ PPC::Runtime::ASM::oris(context->r5, context->r5, 0xe800);
/*803CF810 003CC610*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CF814 003CC614*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CF818 003CC618*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*803CF81C 003CC61C*/ PPC::Runtime::ASM::blr();
}