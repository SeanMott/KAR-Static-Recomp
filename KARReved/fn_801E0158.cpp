//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801E0158(PPC::Runtime::GCContext* context)
{
/*801E0158 001DCF58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E015C 001DCF5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E0160 001DCF60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0164 001DCF64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E0168 001DCF68*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E016C 001DCF6C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E0170 001DCF70*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*801E0174 001DCF74*/ PPC::Runtime::ASM::beq(.L_801E0238);
/*801E0178 001DCF78*/ PPC::Runtime::ASM::li(context->r0, 0x17);
/*801E017C 001DCF7C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801E0180 001DCF80*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801E0184, 0x801E0184) //this is a jump label
/*801E0184 001DCF84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801E0188 001DCF88*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E018C 001DCF8C*/ PPC::Runtime::ASM::beq(.L_801E019C);
/*801E0190 001DCF90*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*801E0194 001DCF94*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*801E0198 001DCF98*/ PPC::Runtime::ASM::bdnz(.L_801E0184);
RUNTIME_PPC_JUMP_LABEL(.L_801E019C, 0x801E019C) //this is a jump label
/*801E019C 001DCF9C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801E01A0 001DCFA0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E01A4 001DCFA4*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E01A8 001DCFA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r6));
/*801E01AC 001DCFAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r31));
/*801E01B0 001DCFB0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801E01B4 001DCFB4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801E01B8 001DCFB8*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E01BC 001DCFBC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801E01C0 001DCFC0*/ PPC::Runtime::ASM::stwx(context->r7, context->r6, context->r0);
/*801E01C4 001DCFC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801E01C8 001DCFC8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801E01CC 001DCFCC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r31));
/*801E01D0 001DCFD0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*801E01D4 001DCFD4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r31));
/*801E01D8 001DCFD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3b, context->r31));
/*801E01DC 001DCFDC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 27);
/*801E01E0 001DCFE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*801E01E4 001DCFE4*/ PPC::Runtime::ASM::bne(.L_801E0220);
/*801E01E8 001DCFE8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E01EC 001DCFEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r4));
/*801E01F0 001DCFF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r4));
/*801E01F4 001DCFF4*/ PPC::Runtime::ASM::subf(context->r3, context->r3, context->r0);
/*801E01F8 001DCFF8*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801E01FC 001DCFFC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E0200 001DD000*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801E0204 001DD004*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r4));
/*801E0208 001DD008*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E020C 001DD00C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801E0210 001DD010*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*801E0214 001DD014*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*801E0218 001DD018*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801E021C 001DD01C*/ PPC::Runtime::ASM::b(.L_801E0238);
RUNTIME_PPC_JUMP_LABEL(.L_801E0220, 0x801E0220) //this is a jump label
/*801E0220 001DD020*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801E0224 001DD024*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*801E0228 001DD028*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E022C 001DD02C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801E0230 001DD030*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801E0234 001DD034*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801E0238, 0x801E0238) //this is a jump label
/*801E0238 001DD038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E023C 001DD03C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E0240 001DD040*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E0244 001DD044*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E0248 001DD048*/ PPC::Runtime::ASM::blr();
}