//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8024CCA8.hpp"
#include "fn_8024CF68.hpp"



void fn_8024D1F0(PPC::Runtime::GCContext* context)
{
/*8024D1F0 00249FF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8024D1F4 00249FF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024D1F8 00249FF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8024D1FC 00249FFC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*8024D200 0024A000*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8024D204 0024A004*/ PPC::Runtime::ASM::li(context->r9, 0xa);
/*8024D208 0024A008*/ PPC::Runtime::ASM::li(context->r7, -0x1);
/*8024D20C 0024A00C*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*8024D210 0024A010*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*8024D214 0024A014*/ PPC::Runtime::ASM::slwi(context->r5, context->r9, 2);
/*8024D218 0024A018*/ PPC::Runtime::ASM::subfic(context->r0, context->r9, 0xb);
/*8024D21C 0024A01C*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8024D220 0024A020*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*8024D224 0024A024*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*8024D228 0024A028*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024D22C 0024A02C*/ PPC::Runtime::ASM::addi(context->r31, context->r27, 0x44);
/*8024D230 0024A030*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r5);
/*8024D234 0024A034*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024D238 0024A038*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8024D23C 0024A03C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024D240 0024A040*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8024D244 0024A044*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8024D248 0024A048*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8024D24C 0024A04C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8024D250 0024A050*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8024D254 0024A054*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8024D258 0024A058*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8024D25C 0024A05C*/ PPC::Runtime::ASM::cmpwi(context->r9, 0xb);
/*8024D260 0024A060*/ PPC::Runtime::ASM::bge(.L_8024D270);
RUNTIME_PPC_JUMP_LABEL(.L_8024D264, 0x8024D264) //this is a jump label
/*8024D264 0024A064*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8024D268 0024A068*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*8024D26C 0024A06C*/ PPC::Runtime::ASM::bdnz(.L_8024D264);
RUNTIME_PPC_JUMP_LABEL(.L_8024D270, 0x8024D270) //this is a jump label
/*8024D270 0024A070*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*8024D274 0024A074*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8024D278 0024A078*/ PPC::Runtime::ASM::b(.L_8024D304);
RUNTIME_PPC_JUMP_LABEL(.L_8024D27C, 0x8024D27C) //this is a jump label
/*8024D27C 0024A07C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8024D280 0024A080*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8024D284 0024A084*/ PPC::Runtime::ASM::mulli(context->r3, context->r5, 0x140);
/*8024D288 0024A088*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*8024D28C 0024A08C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*8024D290 0024A090*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*8024D294 0024A094*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*8024D298 0024A098*/ PPC::Runtime::ASM::bne(.L_8024D2FC);
/*8024D29C 0024A09C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8024D2A0 0024A0A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8024D2A4 0024A0A4*/ PPC::Runtime::ASM::b(.L_8024D2C0);
RUNTIME_PPC_JUMP_LABEL(.L_8024D2A8, 0x8024D2A8) //this is a jump label
/*8024D2A8 0024A0A8*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8024D2AC 0024A0AC*/ PPC::Runtime::ASM::bne(.L_8024D2B8);
/*8024D2B0 0024A0B0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8024D2B4 0024A0B4*/ PPC::Runtime::ASM::b(.L_8024D2DC);
RUNTIME_PPC_JUMP_LABEL(.L_8024D2B8, 0x8024D2B8) //this is a jump label
/*8024D2B8 0024A0B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*8024D2BC 0024A0BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024D2C0, 0x8024D2C0) //this is a jump label
/*8024D2C0 0024A0C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8024D2C4 0024A0C4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8024D2C8 0024A0C8*/ PPC::Runtime::ASM::bne(.L_8024D2A8);
/*8024D2CC 0024A0CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*8024D2D0 0024A0D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8024D2D4 0024A0D4*/ PPC::Runtime::ASM::stwx(context->r5, context->r3, context->r0);
/*8024D2D8 0024A0D8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024D2DC, 0x8024D2DC) //this is a jump label
/*8024D2DC 0024A0DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024D2E0 0024A0E0*/ PPC::Runtime::ASM::beq(.L_8024D2FC);
/*8024D2E4 0024A0E4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8024D2E8 0024A0E8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8024D2EC 0024A0EC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8024D2F0 0024A0F0*/ PPC::Runtime::ASM::mr(context->r7, context->r28);
/*8024D2F4 0024A0F4*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x8);
/*8024D2F8 0024A0F8*/ PPC::Runtime::ASM::bl(fn_8024CCA8);
RUNTIME_PPC_JUMP_LABEL(.L_8024D2FC, 0x8024D2FC) //this is a jump label
/*8024D2FC 0024A0FC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8024D300 0024A100*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024D304, 0x8024D304) //this is a jump label
/*8024D304 0024A104*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8024D308 0024A108*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8024D30C 0024A10C*/ PPC::Runtime::ASM::blt(.L_8024D27C);
/*8024D310 0024A110*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*8024D314 0024A114*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8024D318 0024A118*/ PPC::Runtime::ASM::b(.L_8024D3B0);
RUNTIME_PPC_JUMP_LABEL(.L_8024D31C, 0x8024D31C) //this is a jump label
/*8024D31C 0024A11C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8024D320 0024A120*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*8024D324 0024A124*/ PPC::Runtime::ASM::mulli(context->r3, context->r5, 0x140);
/*8024D328 0024A128*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8024D32C 0024A12C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x24);
/*8024D330 0024A130*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8024D334 0024A134*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*8024D338 0024A138*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*8024D33C 0024A13C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*8024D340 0024A140*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*8024D344 0024A144*/ PPC::Runtime::ASM::bne(.L_8024D3A8);
/*8024D348 0024A148*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8024D34C 0024A14C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8024D350 0024A150*/ PPC::Runtime::ASM::b(.L_8024D36C);
RUNTIME_PPC_JUMP_LABEL(.L_8024D354, 0x8024D354) //this is a jump label
/*8024D354 0024A154*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8024D358 0024A158*/ PPC::Runtime::ASM::bne(.L_8024D364);
/*8024D35C 0024A15C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8024D360 0024A160*/ PPC::Runtime::ASM::b(.L_8024D388);
RUNTIME_PPC_JUMP_LABEL(.L_8024D364, 0x8024D364) //this is a jump label
/*8024D364 0024A164*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*8024D368 0024A168*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024D36C, 0x8024D36C) //this is a jump label
/*8024D36C 0024A16C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8024D370 0024A170*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8024D374 0024A174*/ PPC::Runtime::ASM::bne(.L_8024D354);
/*8024D378 0024A178*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*8024D37C 0024A17C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8024D380 0024A180*/ PPC::Runtime::ASM::stwx(context->r5, context->r3, context->r0);
/*8024D384 0024A184*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024D388, 0x8024D388) //this is a jump label
/*8024D388 0024A188*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024D38C 0024A18C*/ PPC::Runtime::ASM::beq(.L_8024D3A8);
/*8024D390 0024A190*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8024D394 0024A194*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8024D398 0024A198*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*8024D39C 0024A19C*/ PPC::Runtime::ASM::mr(context->r7, context->r28);
/*8024D3A0 0024A1A0*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x58);
/*8024D3A4 0024A1A4*/ PPC::Runtime::ASM::bl(fn_8024CF68);
RUNTIME_PPC_JUMP_LABEL(.L_8024D3A8, 0x8024D3A8) //this is a jump label
/*8024D3A8 0024A1A8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x20);
/*8024D3AC 0024A1AC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024D3B0, 0x8024D3B0) //this is a jump label
/*8024D3B0 0024A1B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r31));
/*8024D3B4 0024A1B4*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8024D3B8 0024A1B8*/ PPC::Runtime::ASM::blt(.L_8024D31C);
/*8024D3BC 0024A1BC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8024D3C0 0024A1C0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024D3C4 0024A1C4*/ PPC::Runtime::ASM::b(.L_8024D3D0);
RUNTIME_PPC_JUMP_LABEL(.L_8024D3C8, 0x8024D3C8) //this is a jump label
/*8024D3C8 0024A1C8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8024D3CC 0024A1CC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8024D3D0, 0x8024D3D0) //this is a jump label
/*8024D3D0 0024A1D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8024D3D4 0024A1D4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8024D3D8 0024A1D8*/ PPC::Runtime::ASM::bne(.L_8024D3C8);
/*8024D3DC 0024A1DC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0xb);
/*8024D3E0 0024A1E0*/ PPC::Runtime::ASM::blt(.L_8024D3FC);
/*8024D3E4 0024A1E4*/ PPC::Runtime::ASM::lis(context->r3, String_ "mpairflow." Get_MemoryOffset_HighBit);
/*8024D3E8 0024A1E8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B5D84 @ Get_MemoryOffset_HighBit);
/*8024D3EC 0024A1EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "mpairflow." Get_MemoryOffset_LowBit);
/*8024D3F0 0024A1F0*/ PPC::Runtime::ASM::li(context->r4, 0xd8);
/*8024D3F4 0024A1F4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B5D84 @ Get_MemoryOffset_LowBit);
/*8024D3F8 0024A1F8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024D3FC, 0x8024D3FC) //this is a jump label
/*8024D3FC 0024A1FC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*8024D400 0024A200*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8024D404 0024A204*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8024D408 0024A208*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024D40C 0024A20C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*8024D410 0024A210*/ PPC::Runtime::ASM::blr();
}