//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802889EC.hpp"
#include "fn_803973A4.hpp"



void fn_8039D210(PPC::Runtime::GCContext* context)
{
/*8039D210 0039A010*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8039D214 0039A014*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039D218 0039A018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8039D21C 0039A01C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039D220 0039A020*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039D224 0039A024*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039D228 0039A028*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8039D22C 0039A02C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039D230 0039A030*/ PPC::Runtime::ASM::bctrl();
/*8039D234 0039A034*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*8039D238 0039A038*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6268 @ Get_MemoryOffset_HighBit);
/* 8039D23C 0039A03C  54 00 DE 3F */ extrwi. context->r0 , context->r0 , 8 , 19
/*8039D240 0039A040*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F6268 @ Get_MemoryOffset_LowBit);
/*8039D244 0039A044*/ PPC::Runtime::ASM::beq(.L_8039D250);
/*8039D248 0039A048*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F603C @ Get_MemoryOffset_HighBit);
/*8039D24C 0039A04C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F603C @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8039D250, 0x8039D250) //this is a jump label
/*8039D250 0039A050*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8039D254 0039A054*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039D258 0039A058*/ PPC::Runtime::ASM::beq(.L_8039D288);
/*8039D25C 0039A05C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039D260 0039A060*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039D264 0039A064*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC2C0 @ Get_MemoryOffset_SDA21);
/*8039D268 0039A068*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC2B8 @ Get_MemoryOffset_SDA21);
/*8039D26C 0039A06C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039D270 0039A070*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039D274 0039A074*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8039D278 0039A078*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8039D27C 0039A07C*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*8039D280 0039A080*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8039D284 0039A084*/ PPC::Runtime::ASM::b(.L_8039D28C);
RUNTIME_PPC_JUMP_LABEL(.L_8039D288, 0x8039D288) //this is a jump label
/*8039D288 0039A088*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039D28C, 0x8039D28C) //this is a jump label
/*8039D28C 0039A08C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8039D290 0039A090*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8039D294 0039A094*/ PPC::Runtime::ASM::extsh.(context->r0, context->r3);
/*8039D298 0039A098*/ PPC::Runtime::ASM::bne(.L_8039D2FC);
/*8039D29C 0039A09C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039D2A0 0039A0A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8039D2A4 0039A0A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8039D2A8 0039A0A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039D2AC 0039A0AC*/ PPC::Runtime::ASM::bctrl();
/*8039D2B0 0039A0B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039D2B4 0039A0B4*/ PPC::Runtime::ASM::bne(.L_8039D2EC);
/*8039D2B8 0039A0B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8039D2BC 0039A0BC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8039D2C0 0039A0C0*/ PPC::Runtime::ASM::beq(.L_8039D2EC);
/*8039D2C4 0039A0C4*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8039D2C8 0039A0C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8039D2CC 0039A0CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8039D2D0 0039A0D0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 22, 22);
/*8039D2D4 0039A0D4*/ PPC::Runtime::ASM::beq(.L_8039D2EC);
/*8039D2D8 0039A0D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039D2DC 0039A0DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8039D2E0 0039A0E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r12));
/*8039D2E4 0039A0E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039D2E8 0039A0E8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8039D2EC, 0x8039D2EC) //this is a jump label
/*8039D2EC 0039A0EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8039D2F0 0039A0F0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8039D2F4 0039A0F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039D2F8 0039A0F8*/ PPC::Runtime::ASM::b(.L_8039D344);
RUNTIME_PPC_JUMP_LABEL(.L_8039D2FC, 0x8039D2FC) //this is a jump label
/*8039D2FC 0039A0FC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r3);
/*8039D300 0039A100*/ PPC::Runtime::ASM::bge(.L_8039D310);
/*8039D304 0039A104*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8039D308 0039A108*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8039D30C 0039A10C*/ PPC::Runtime::ASM::b(.L_8039D340);
RUNTIME_PPC_JUMP_LABEL(.L_8039D310, 0x8039D310) //this is a jump label
/*8039D310 0039A110*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8039D314 0039A114*/ PPC::Runtime::ASM::extsh.(context->r0, context->r3);
/*8039D318 0039A118*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8039D31C 0039A11C*/ PPC::Runtime::ASM::bne(.L_8039D340);
/*8039D320 0039A120*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8039D324 0039A124*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039D328 0039A128*/ PPC::Runtime::ASM::bl(fn_803973A4);
/*8039D32C 0039A12C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039D330 0039A130*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8039D334 0039A134*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8039D338 0039A138*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039D33C 0039A13C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8039D340, 0x8039D340) //this is a jump label
/*8039D340 0039A140*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039D344, 0x8039D344) //this is a jump label
/*8039D344 0039A144*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8039D348 0039A148*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039D34C 0039A14C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039D350 0039A150*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8039D354 0039A154*/ PPC::Runtime::ASM::blr();
}