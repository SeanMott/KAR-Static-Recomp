//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8047F648.hpp"
#include "fn_8047F578.hpp"
#include "fn_8047FCFC.hpp"
#include "fn_Out.hpp"
#include "fn_Out.hpp"



void fn_80480210(PPC::Runtime::GCContext* context)
{
/*80480210 0047D010*/ PPC::Runtime::ASM::mflr(context->r0);
/*80480214 0047D014*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80480218 0047D018*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8048021C 0047D01C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/* 80480220 0047D020  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80480224 0047D024*/ PPC::Runtime::ASM::lis(context->r3, lbl_80534558 @ Get_MemoryOffset_HighBit);
/*80480228 0047D028*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8048022C 0047D02C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_80534558 @ Get_MemoryOffset_LowBit);
/*80480230 0047D030*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*80480234 0047D034*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80480238 0047D038*/ PPC::Runtime::ASM::beq(.L_80480240);
/*8048023C 0047D03C*/ PPC::Runtime::ASM::b(.L_80480248);
RUNTIME_PPC_JUMP_LABEL(.L_80480240, 0x80480240) //this is a jump label
/*80480240 0047D040*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*80480244 0047D044*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80480248, 0x80480248) //this is a jump label
/*80480248 0047D048*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8048024C 0047D04C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80480250 0047D050*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
/*80480254 0047D054*/ PPC::Runtime::ASM::beq(.L_804802A8);
/*80480258 0047D058*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8048025C 0047D05C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80480260 0047D060*/ PPC::Runtime::ASM::beq(.L_804802A8);
/*80480264 0047D064*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80480268 0047D068*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8048026C 0047D06C*/ PPC::Runtime::ASM::bne(.L_804802A8);
/*80480270 0047D070*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80480274 0047D074*/ PPC::Runtime::ASM::bl(fn_8047F648);
RUNTIME_PPC_JUMP_LABEL(.L_80480278, 0x80480278) //this is a jump label
/*80480278 0047D078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8048027C 0047D07C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80480280 0047D080*/ PPC::Runtime::ASM::beq(.L_80480278);
/*80480284 0047D084*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80480288 0047D088*/ PPC::Runtime::ASM::bl(fn_8047F578);
/*8048028C 0047D08C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80480290 0047D090*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c, context->r30));
/*80480294 0047D094*/ PPC::Runtime::ASM::li(context->r0, 0xa7);
/*80480298 0047D098*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8048029C 0047D09C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804802A0 0047D0A0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*804802A4 0047D0A4*/ PPC::Runtime::ASM::bl(fn_8047FCFC);
RUNTIME_PPC_JUMP_LABEL(.L_804802A8, 0x804802A8) //this is a jump label
/*804802A8 0047D0A8*/ PPC::Runtime::ASM::lis(context->r3, fn_Out @ Get_MemoryOffset_HighBit);
/*804802AC 0047D0AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*804802B0 0047D0B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_Out @ Get_MemoryOffset_LowBit);
/*804802B4 0047D0B4*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*804802B8 0047D0B8*/ PPC::Runtime::ASM::bne(.L_804802C4);
/*804802BC 0047D0BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x624, context->r30));
/*804802C0 0047D0C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_804802C4, 0x804802C4) //this is a jump label
/*804802C4 0047D0C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804802C8 0047D0C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804802CC 0047D0CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804802D0 0047D0D0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804802D4 0047D0D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804802D8 0047D0D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804802DC 0047D0DC*/ PPC::Runtime::ASM::blr();
}