//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E1E2C.hpp"
#include "fn_800E1E18.hpp"
#include "fn_800E1E2C.hpp"
#include "fn_800E1E18.hpp"



void fn_800D0118(PPC::Runtime::GCContext* context)
{
/*800D0118 000CCF18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800D011C 000CCF1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D0120 000CCF20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800D0124 000CCF24*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800D0128 000CCF28*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800D012C 000CCF2C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800D0130 000CCF30*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800D0134 000CCF34*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800D0138 000CCF38*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF5DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D013C 000CCF3C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_898 @ Get_MemoryOffset_HighBit);
/*800D0140 000CCF40*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D0144 000CCF44*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800D0148 000CCF48*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800D014C 000CCF4C*/ PPC::Runtime::ASM::addi(context->r30, context->r4, MemoryOffset_898 @ Get_MemoryOffset_LowBit);
/*800D0150 000CCF50*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800D0154 000CCF54*/ PPC::Runtime::ASM::bne(.L_800D018C);
/*800D0158 000CCF58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800D015C 000CCF5C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D0160 000CCF60*/ PPC::Runtime::ASM::bne(.L_800D0174);
/*800D0164 000CCF64*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D0168 000CCF68*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe0);
/*800D016C 000CCF6C*/ PPC::Runtime::ASM::li(context->r4, 0xc3);
/*800D0170 000CCF70*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D0174, 0x800D0174) //this is a jump label
/*800D0174 000CCF74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800D0178 000CCF78*/ PPC::Runtime::ASM::mulli(context->r0, context->r25, 0x18);
/*800D017C 000CCF7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D0180 000CCF80*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D0184 000CCF84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D0188 000CCF88*/ PPC::Runtime::ASM::b(.L_800D0450);
RUNTIME_PPC_JUMP_LABEL(.L_800D018C, 0x800D018C) //this is a jump label
/*800D018C 000CCF8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF5E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D0190 000CCF90*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800D0194 000CCF94*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800D0198 000CCF98*/ PPC::Runtime::ASM::bne(.L_800D01D0);
/*800D019C 000CCF9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800D01A0 000CCFA0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D01A4 000CCFA4*/ PPC::Runtime::ASM::bne(.L_800D01B8);
/*800D01A8 000CCFA8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D01AC 000CCFAC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe0);
/*800D01B0 000CCFB0*/ PPC::Runtime::ASM::li(context->r4, 0xce);
/*800D01B4 000CCFB4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D01B8, 0x800D01B8) //this is a jump label
/*800D01B8 000CCFB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800D01BC 000CCFBC*/ PPC::Runtime::ASM::mulli(context->r0, context->r25, 0x18);
/*800D01C0 000CCFC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D01C4 000CCFC4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D01C8 000CCFC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800D01CC 000CCFCC*/ PPC::Runtime::ASM::b(.L_800D0450);
RUNTIME_PPC_JUMP_LABEL(.L_800D01D0, 0x800D01D0) //this is a jump label
/*800D01D0 000CCFD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800D01D4 000CCFD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D01D8 000CCFD8*/ PPC::Runtime::ASM::bne(.L_800D01EC);
/*800D01DC 000CCFDC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D01E0 000CCFE0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe0);
/*800D01E4 000CCFE4*/ PPC::Runtime::ASM::li(context->r4, 0xc3);
/*800D01E8 000CCFE8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D01EC, 0x800D01EC) //this is a jump label
/*800D01EC 000CCFEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800D01F0 000CCFF0*/ PPC::Runtime::ASM::mulli(context->r0, context->r25, 0x18);
/*800D01F4 000CCFF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D01F8 000CCFF8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800D01FC 000CCFFC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D0200 000CD000*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D0204 000CD004*/ PPC::Runtime::ASM::bne(.L_800D0218);
/*800D0208 000CD008*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D020C 000CD00C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe0);
/*800D0210 000CD010*/ PPC::Runtime::ASM::li(context->r4, 0xef);
/*800D0214 000CD014*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D0218, 0x800D0218) //this is a jump label
/*800D0218 000CD018*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*800D021C 000CD01C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D0220 000CD020*/ PPC::Runtime::ASM::blt(.L_800D0234);
/*800D0224 000CD024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r31));
/*800D0228 000CD028*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800D022C 000CD02C*/ PPC::Runtime::ASM::bge(.L_800D0234);
/*800D0230 000CD030*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D0234, 0x800D0234) //this is a jump label
/*800D0234 000CD034*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800D0238 000CD038*/ PPC::Runtime::ASM::bne(.L_800D024C);
/*800D023C 000CD03C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D0240 000CD040*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xec);
/*800D0244 000CD044*/ PPC::Runtime::ASM::li(context->r4, 0xf0);
/*800D0248 000CD048*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D024C, 0x800D024C) //this is a jump label
/*800D024C 000CD04C*/ PPC::Runtime::ASM::mulli(context->r0, context->r27, 0x2c);
/*800D0250 000CD050*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r31));
/*800D0254 000CD054*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800D0258 000CD058*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*800D025C 000CD05C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*800D0260 000CD060*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*800D0264 000CD064*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*800D0268 000CD068*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800D026C 000CD06C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D0270 000CD070*/ PPC::Runtime::ASM::ble(.L_800D0310);
RUNTIME_PPC_JUMP_LABEL(.L_800D0274, 0x800D0274) //this is a jump label
/*800D0274 000CD074*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800D0278 000CD078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D027C 000CD07C*/ PPC::Runtime::ASM::cmpw(context->r25, context->r0);
/*800D0280 000CD080*/ PPC::Runtime::ASM::bne(.L_800D0290);
/*800D0284 000CD084*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*800D0288 000CD088*/ PPC::Runtime::ASM::lwzx(context->r26, context->r4, context->r0);
/*800D028C 000CD08C*/ PPC::Runtime::ASM::b(.L_800D0310);
RUNTIME_PPC_JUMP_LABEL(.L_800D0290, 0x800D0290) //this is a jump label
/*800D0290 000CD090*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*800D0294 000CD094*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*800D0298 000CD098*/ PPC::Runtime::ASM::bdnz(.L_800D0274);
/*800D029C 000CD09C*/ PPC::Runtime::ASM::b(.L_800D0310);
RUNTIME_PPC_JUMP_LABEL(.L_800D02A0, 0x800D02A0) //this is a jump label
/*800D02A0 000CD0A0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*800D02A4 000CD0A4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800D02A8 000CD0A8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800D02AC 000CD0AC*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800D02B0 000CD0B0*/ PPC::Runtime::ASM::mtctr(context->r6);
/*800D02B4 000CD0B4*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*800D02B8 000CD0B8*/ PPC::Runtime::ASM::ble(.L_800D02F8);
RUNTIME_PPC_JUMP_LABEL(.L_800D02BC, 0x800D02BC) //this is a jump label
/*800D02BC 000CD0BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D02C0 000CD0C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800D02C4 000CD0C4*/ PPC::Runtime::ASM::cmpw(context->r25, context->r0);
/*800D02C8 000CD0C8*/ PPC::Runtime::ASM::bne(.L_800D02EC);
/*800D02CC 000CD0CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800D02D0 000CD0D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800D02D4 000CD0D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800D02D8 000CD0D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800D02DC 000CD0DC*/ PPC::Runtime::ASM::bge(.L_800D02EC);
/*800D02E0 000CD0E0*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*800D02E4 000CD0E4*/ PPC::Runtime::ASM::lwzx(context->r26, context->r28, context->r0);
/*800D02E8 000CD0E8*/ PPC::Runtime::ASM::b(.L_800D02F8);
RUNTIME_PPC_JUMP_LABEL(.L_800D02EC, 0x800D02EC) //this is a jump label
/*800D02EC 000CD0EC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800D02F0 000CD0F0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*800D02F4 000CD0F4*/ PPC::Runtime::ASM::bdnz(.L_800D02BC);
RUNTIME_PPC_JUMP_LABEL(.L_800D02F8, 0x800D02F8) //this is a jump label
/*800D02F8 000CD0F8*/ PPC::Runtime::ASM::cmpw(context->r7, context->r6);
/*800D02FC 000CD0FC*/ PPC::Runtime::ASM::bne(.L_800D0310);
/*800D0300 000CD100*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x19c);
/*800D0304 000CD104*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D0308 000CD108*/ PPC::Runtime::ASM::li(context->r4, 0x35f);
/*800D030C 000CD10C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D0310, 0x800D0310) //this is a jump label
/*800D0310 000CD110*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800D0314 000CD114*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800D0318 000CD118*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*800D031C 000CD11C*/ PPC::Runtime::ASM::blt(.L_800D02A0);
/*800D0320 000CD120*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f31);
/*800D0324 000CD124*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*800D0328 000CD128*/ PPC::Runtime::ASM::bne(.L_800D036C);
/*800D032C 000CD12C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800D0330 000CD130*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D0334 000CD134*/ PPC::Runtime::ASM::bne(.L_800D0348);
/*800D0338 000CD138*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D033C 000CD13C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe0);
/*800D0340 000CD140*/ PPC::Runtime::ASM::li(context->r4, 0xfb);
/*800D0344 000CD144*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D0348, 0x800D0348) //this is a jump label
/*800D0348 000CD148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r31));
/*800D034C 000CD14C*/ PPC::Runtime::ASM::lis(context->r3, 0x2e8c);
/*800D0350 000CD150*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x5d17);
/*800D0354 000CD154*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r27);
/* 800D0358 000CD158  7C 03 00 96 */ mulhw context->r0 , context->r3 , context->r0
/*800D035C 000CD15C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 3);
/*800D0360 000CD160*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*800D0364 000CD164*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*800D0368 000CD168*/ PPC::Runtime::ASM::b(.L_800D0450);
RUNTIME_PPC_JUMP_LABEL(.L_800D036C, 0x800D036C) //this is a jump label
/*800D036C 000CD16C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r31));
/*800D0370 000CD170*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800D0374 000CD174*/ PPC::Runtime::ASM::blt(.L_800D0388);
/*800D0378 000CD178*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1b4);
/*800D037C 000CD17C*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D0380 000CD180*/ PPC::Runtime::ASM::li(context->r4, 0x36b);
/*800D0384 000CD184*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D0388, 0x800D0388) //this is a jump label
/*800D0388 000CD188*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r31));
/*800D038C 000CD18C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D0390 000CD190*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r31));
/*800D0394 000CD194*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800D0398 000CD198*/ PPC::Runtime::ASM::mulli(context->r3, context->r4, 0x2c);
/*800D039C 000CD19C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*800D03A0 000CD1A0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r31));
/*800D03A4 000CD1A4*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*800D03A8 000CD1A8*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*800D03AC 000CD1AC*/ PPC::Runtime::ASM::add(context->r28, context->r6, context->r3);
/*800D03B0 000CD1B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800D03B4 000CD1B4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800D03B8 000CD1B8*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*800D03BC 000CD1BC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r31));
/*800D03C0 000CD1C0*/ PPC::Runtime::ASM::addi(context->r0, context->r7, 0x1);
/*800D03C4 000CD1C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r31));
/*800D03C8 000CD1C8*/ PPC::Runtime::ASM::bl(fn_800E1E2C);
/*800D03CC 000CD1CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800D03D0 000CD1D0*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*800D03D4 000CD1D4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800D03D8 000CD1D8*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*800D03DC 000CD1DC*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*800D03E0 000CD1E0*/ PPC::Runtime::ASM::bl(fn_800E1E18);
/*800D03E4 000CD1E4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800D03E8 000CD1E8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800D03EC 000CD1EC*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*800D03F0 000CD1F0*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*800D03F4 000CD1F4*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*800D03F8 000CD1F8*/ PPC::Runtime::ASM::bl(fn_800E1E2C);
/*800D03FC 000CD1FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800D0400 000CD200*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*800D0404 000CD204*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800D0408 000CD208*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*800D040C 000CD20C*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*800D0410 000CD210*/ PPC::Runtime::ASM::bl(fn_800E1E18);
/*800D0414 000CD214*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800D0418 000CD218*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D041C 000CD21C*/ PPC::Runtime::ASM::bne(.L_800D0430);
/*800D0420 000CD220*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D0424 000CD224*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe0);
/*800D0428 000CD228*/ PPC::Runtime::ASM::li(context->r4, 0xfb);
/*800D042C 000CD22C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D0430, 0x800D0430) //this is a jump label
/*800D0430 000CD230*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r31));
/*800D0434 000CD234*/ PPC::Runtime::ASM::lis(context->r3, 0x2e8c);
/*800D0438 000CD238*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x5d17);
/*800D043C 000CD23C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r28);
/* 800D0440 000CD240  7C 03 00 96 */ mulhw context->r0 , context->r3 , context->r0
/*800D0444 000CD244*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 3);
/*800D0448 000CD248*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*800D044C 000CD24C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_800D0450, 0x800D0450) //this is a jump label
/*800D0450 000CD250*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800D0454 000CD254*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800D0458 000CD258*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800D045C 000CD25C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800D0460 000CD260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800D0464 000CD264*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D0468 000CD268*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800D046C 000CD26C*/ PPC::Runtime::ASM::blr();
}