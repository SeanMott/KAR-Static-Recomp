//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "fn_80234398.hpp"
#include "fn_802349B0.hpp"



void fn_802332C4(PPC::Runtime::GCContext* context)
{
/*802332C4 002300C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x130, context->r1));
/*802332C8 002300C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802332CC 002300CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*802332D0 002300D0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x130);
/*802332D4 002300D4*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*802332D8 002300D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802332DC 002300DC*/ PPC::Runtime::ASM::li(context->r4, 0x98);
/*802332E0 002300E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802332E4 002300E4*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802332E8 002300E8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*802332EC 002300EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802332F0 002300F0*/ PPC::Runtime::ASM::addic.(context->r0, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802332F4 002300F4*/ PPC::Runtime::ASM::bne(.L_8023330C);
/*802332F8 002300F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4D90 @ Get_MemoryOffset_HighBit);
/*802332FC 002300FC*/ PPC::Runtime::ASM::li(context->r4, 0xfb);
/*80233300 00230100*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B4D90 @ Get_MemoryOffset_LowBit);
/*80233304 00230104*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7268 @ Get_MemoryOffset_SDA21);
/*80233308 00230108*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023330C, 0x8023330C) //this is a jump label
/*8023330C 0023010C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*80233310 00230110*/ PPC::Runtime::ASM::li(context->r0, 0x100);
/*80233314 00230114*/ PPC::Runtime::ASM::addic.(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*80233318 00230118*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8023331C 0023011C*/ PPC::Runtime::ASM::bne(.L_80233334);
/*80233320 00230120*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4D90 @ Get_MemoryOffset_HighBit);
/*80233324 00230124*/ PPC::Runtime::ASM::li(context->r4, 0x116);
/*80233328 00230128*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B4D90 @ Get_MemoryOffset_LowBit);
/*8023332C 0023012C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7268 @ Get_MemoryOffset_SDA21);
/*80233330 00230130*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80233334, 0x80233334) //this is a jump label
/*80233334 00230134*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*80233338 00230138*/ PPC::Runtime::ASM::lbzu(context->r0, lbl_8055D7A0 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8023333C 0023013C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80233340 00230140*/ PPC::Runtime::ASM::li(context->r4, 0x68);
/*80233344 00230144*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*80233348 00230148*/ PPC::Runtime::ASM::addi(context->r23, context->r3, 0x2c);
/*8023334C 0023014C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80233350 00230150*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80233354 00230154*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*80233358 00230158*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8023335C 0023015C*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80233360 00230160*/ PPC::Runtime::ASM::bne(.L_80233378);
/*80233364 00230164*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4D90 @ Get_MemoryOffset_HighBit);
/*80233368 00230168*/ PPC::Runtime::ASM::li(context->r4, 0xfb);
/*8023336C 0023016C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B4D90 @ Get_MemoryOffset_LowBit);
/*80233370 00230170*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7268 @ Get_MemoryOffset_SDA21);
/*80233374 00230174*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80233378, 0x80233378) //this is a jump label
/*80233378 00230178*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*8023337C 0023017C*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80233380 00230180*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*80233384 00230184*/ PPC::Runtime::ASM::li(context->r0, 0x200);
/*80233388 00230188*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8023338C 0023018C*/ PPC::Runtime::ASM::bne(.L_802333A4);
/*80233390 00230190*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4D90 @ Get_MemoryOffset_HighBit);
/*80233394 00230194*/ PPC::Runtime::ASM::li(context->r4, 0x116);
/*80233398 00230198*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B4D90 @ Get_MemoryOffset_LowBit);
/*8023339C 0023019C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7268 @ Get_MemoryOffset_SDA21);
/*802333A0 002301A0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802333A4, 0x802333A4) //this is a jump label
/*802333A4 002301A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802333A8 002301A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*802333AC 002301AC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*802333B0 002301B0*/ PPC::Runtime::ASM::li(context->r4, 0x68);
/*802333B4 002301B4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*802333B8 002301B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802333BC 002301BC*/ PPC::Runtime::ASM::addi(context->r24, context->r3, 0x58);
/*802333C0 002301C0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*802333C4 002301C4*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*802333C8 002301C8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802333CC 002301CC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*802333D0 002301D0*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*802333D4 002301D4*/ PPC::Runtime::ASM::bne(.L_802333EC);
/*802333D8 002301D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4D90 @ Get_MemoryOffset_HighBit);
/*802333DC 002301DC*/ PPC::Runtime::ASM::li(context->r4, 0xfb);
/*802333E0 002301E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B4D90 @ Get_MemoryOffset_LowBit);
/*802333E4 002301E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7268 @ Get_MemoryOffset_SDA21);
/*802333E8 002301E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802333EC, 0x802333EC) //this is a jump label
/*802333EC 002301EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802333F0 002301F0*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*802333F4 002301F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802333F8 002301F8*/ PPC::Runtime::ASM::li(context->r0, 0x40);
/*802333FC 002301FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*80233400 00230200*/ PPC::Runtime::ASM::bne(.L_80233418);
/*80233404 00230204*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4D90 @ Get_MemoryOffset_HighBit);
/*80233408 00230208*/ PPC::Runtime::ASM::li(context->r4, 0x116);
/*8023340C 0023020C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B4D90 @ Get_MemoryOffset_LowBit);
/*80233410 00230210*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7268 @ Get_MemoryOffset_SDA21);
/*80233414 00230214*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80233418, 0x80233418) //this is a jump label
/*80233418 00230218*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8023341C 0023021C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80233420 00230220*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80233424 00230224*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*80233428 00230228*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*8023342C 0023022C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80233430 00230230*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x84);
/*80233434 00230234*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80233438 00230238*/ PPC::Runtime::ASM::li(context->r5, 0x34);
/*8023343C 0023023C*/ PPC::Runtime::ASM::bl(memset);
/*80233440 00230240*/ PPC::Runtime::ASM::li(context->r3, 0x1030);
/*80233444 00230244*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*80233448 00230248*/ PPC::Runtime::ASM::lis(context->r4, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*8023344C 0023024C*/ PPC::Runtime::ASM::li(context->r0, 0x40);
/*80233450 00230250*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*80233454 00230254*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80233458 00230258*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*8023345C 0023025C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80233460 00230260*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80233464, 0x80233464) //this is a jump label
/*80233464 00230264*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233468 00230268*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8023346C 0023026C*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x2);
/*80233470 00230270*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x4);
/*80233474 00230274*/ PPC::Runtime::ASM::lbzx(context->r6, context->r7, context->r3);
/*80233478 00230278*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r0, 7, 24, 24);
/*8023347C 0023027C*/ PPC::Runtime::ASM::addi(context->r24, context->r3, 0x8);
/*80233480 00230280*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xa);
/*80233484 00230284*/ PPC::Runtime::ASM::stbx(context->r6, context->r7, context->r3);
/*80233488 00230288*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0xc);
/*8023348C 0023028C*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x10);
/*80233490 00230290*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x12);
/*80233494 00230294*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233498 00230298*/ PPC::Runtime::ASM::addi(context->r12, context->r3, 0x14);
/*8023349C 0023029C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x18);
/*802334A0 002302A0*/ PPC::Runtime::ASM::addi(context->r9, context->r3, 0x1a);
/*802334A4 002302A4*/ PPC::Runtime::ASM::lbzx(context->r6, context->r7, context->r3);
/*802334A8 002302A8*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r0, 6, 25, 25);
/*802334AC 002302AC*/ PPC::Runtime::ASM::addi(context->r8, context->r3, 0x1c);
/*802334B0 002302B0*/ PPC::Runtime::ASM::addi(context->r11, context->r3, 0x20);
/*802334B4 002302B4*/ PPC::Runtime::ASM::stbx(context->r6, context->r7, context->r3);
/*802334B8 002302B8*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x22);
/*802334BC 002302BC*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x24);
/*802334C0 002302C0*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x28);
/*802334C4 002302C4*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802334C8 002302C8*/ PPC::Runtime::ASM::sthx(context->r0, context->r23, context->r26);
/*802334CC 002302CC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802334D0 002302D0*/ PPC::Runtime::ASM::stwx(context->r0, context->r26, context->r25);
/*802334D4 002302D4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802334D8 002302D8*/ PPC::Runtime::ASM::lbzx(context->r25, context->r26, context->r24);
/*802334DC 002302DC*/ PPC::Runtime::ASM::rlwimi(context->r25, context->r0, 7, 24, 24);
/*802334E0 002302E0*/ PPC::Runtime::ASM::stbx(context->r25, context->r26, context->r24);
/*802334E4 002302E4*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802334E8 002302E8*/ PPC::Runtime::ASM::lbzx(context->r26, context->r25, context->r24);
/*802334EC 002302EC*/ PPC::Runtime::ASM::rlwimi(context->r26, context->r0, 6, 25, 25);
/*802334F0 002302F0*/ PPC::Runtime::ASM::stbx(context->r26, context->r25, context->r24);
/*802334F4 002302F4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802334F8 002302F8*/ PPC::Runtime::ASM::sthx(context->r0, context->r26, context->r29);
/*802334FC 002302FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233500 00230300*/ PPC::Runtime::ASM::stwx(context->r0, context->r29, context->r28);
/*80233504 00230304*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233508 00230308*/ PPC::Runtime::ASM::lbzx(context->r28, context->r29, context->r27);
/*8023350C 0023030C*/ PPC::Runtime::ASM::rlwimi(context->r28, context->r0, 7, 24, 24);
/*80233510 00230310*/ PPC::Runtime::ASM::stbx(context->r28, context->r29, context->r27);
/*80233514 00230314*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233518 00230318*/ PPC::Runtime::ASM::lbzx(context->r29, context->r28, context->r27);
/*8023351C 0023031C*/ PPC::Runtime::ASM::rlwimi(context->r29, context->r0, 6, 25, 25);
/*80233520 00230320*/ PPC::Runtime::ASM::stbx(context->r29, context->r28, context->r27);
/*80233524 00230324*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233528 00230328*/ PPC::Runtime::ASM::sthx(context->r0, context->r29, context->r30);
/*8023352C 0023032C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233530 00230330*/ PPC::Runtime::ASM::stwx(context->r0, context->r30, context->r12);
/*80233534 00230334*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233538 00230338*/ PPC::Runtime::ASM::lbzx(context->r12, context->r30, context->r31);
/*8023353C 0023033C*/ PPC::Runtime::ASM::rlwimi(context->r12, context->r0, 7, 24, 24);
/*80233540 00230340*/ PPC::Runtime::ASM::stbx(context->r12, context->r30, context->r31);
/*80233544 00230344*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233548 00230348*/ PPC::Runtime::ASM::lbzx(context->r12, context->r30, context->r31);
/*8023354C 0023034C*/ PPC::Runtime::ASM::rlwimi(context->r12, context->r0, 6, 25, 25);
/*80233550 00230350*/ PPC::Runtime::ASM::stbx(context->r12, context->r30, context->r31);
/*80233554 00230354*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233558 00230358*/ PPC::Runtime::ASM::sthx(context->r0, context->r12, context->r9);
/*8023355C 0023035C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233560 00230360*/ PPC::Runtime::ASM::stwx(context->r0, context->r9, context->r8);
/*80233564 00230364*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233568 00230368*/ PPC::Runtime::ASM::lbzx(context->r8, context->r9, context->r11);
/*8023356C 0023036C*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r0, 7, 24, 24);
/*80233570 00230370*/ PPC::Runtime::ASM::stbx(context->r8, context->r9, context->r11);
/*80233574 00230374*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233578 00230378*/ PPC::Runtime::ASM::lbzx(context->r8, context->r9, context->r11);
/*8023357C 0023037C*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r0, 6, 25, 25);
/*80233580 00230380*/ PPC::Runtime::ASM::stbx(context->r8, context->r9, context->r11);
/*80233584 00230384*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233588 00230388*/ PPC::Runtime::ASM::sthx(context->r0, context->r8, context->r7);
/*8023358C 0023038C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233590 00230390*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*80233594 00230394*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233598 00230398*/ PPC::Runtime::ASM::lbzx(context->r6, context->r7, context->r10);
/*8023359C 0023039C*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r0, 7, 24, 24);
/*802335A0 002303A0*/ PPC::Runtime::ASM::stbx(context->r6, context->r7, context->r10);
/*802335A4 002303A4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802335A8 002303A8*/ PPC::Runtime::ASM::addi(context->r12, context->r3, 0x2a);
/*802335AC 002303AC*/ PPC::Runtime::ASM::addi(context->r11, context->r3, 0x2c);
/*802335B0 002303B0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x30);
/*802335B4 002303B4*/ PPC::Runtime::ASM::lbzx(context->r6, context->r7, context->r10);
/*802335B8 002303B8*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r0, 6, 25, 25);
/*802335BC 002303BC*/ PPC::Runtime::ASM::addi(context->r9, context->r3, 0x32);
/*802335C0 002303C0*/ PPC::Runtime::ASM::addi(context->r8, context->r3, 0x34);
/*802335C4 002303C4*/ PPC::Runtime::ASM::stbx(context->r6, context->r7, context->r10);
/*802335C8 002303C8*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x38);
/*802335CC 002303CC*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x3a);
/*802335D0 002303D0*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x3c);
/*802335D4 002303D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802335D8 002303D8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x40);
/*802335DC 002303DC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*802335E0 002303E0*/ PPC::Runtime::ASM::sthx(context->r0, context->r30, context->r12);
/*802335E4 002303E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802335E8 002303E8*/ PPC::Runtime::ASM::stwx(context->r0, context->r12, context->r11);
/*802335EC 002303EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*802335F0 002303F0*/ PPC::Runtime::ASM::lbzx(context->r11, context->r12, context->r31);
/*802335F4 002303F4*/ PPC::Runtime::ASM::rlwimi(context->r11, context->r0, 7, 24, 24);
/*802335F8 002303F8*/ PPC::Runtime::ASM::stbx(context->r11, context->r12, context->r31);
/*802335FC 002303FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233600 00230400*/ PPC::Runtime::ASM::lbzx(context->r11, context->r12, context->r31);
/*80233604 00230404*/ PPC::Runtime::ASM::rlwimi(context->r11, context->r0, 6, 25, 25);
/*80233608 00230408*/ PPC::Runtime::ASM::stbx(context->r11, context->r12, context->r31);
/*8023360C 0023040C*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233610 00230410*/ PPC::Runtime::ASM::sthx(context->r0, context->r11, context->r9);
/*80233614 00230414*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233618 00230418*/ PPC::Runtime::ASM::stwx(context->r0, context->r9, context->r8);
/*8023361C 0023041C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233620 00230420*/ PPC::Runtime::ASM::lbzx(context->r8, context->r9, context->r10);
/*80233624 00230424*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r0, 7, 24, 24);
/*80233628 00230428*/ PPC::Runtime::ASM::stbx(context->r8, context->r9, context->r10);
/*8023362C 0023042C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233630 00230430*/ PPC::Runtime::ASM::lbzx(context->r8, context->r9, context->r10);
/*80233634 00230434*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r0, 6, 25, 25);
/*80233638 00230438*/ PPC::Runtime::ASM::stbx(context->r8, context->r9, context->r10);
/*8023363C 0023043C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233640 00230440*/ PPC::Runtime::ASM::sthx(context->r0, context->r8, context->r7);
/*80233644 00230444*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233648 00230448*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*8023364C 0023044C*/ PPC::Runtime::ASM::bdnz(.L_80233464);
/*80233650 00230450*/ PPC::Runtime::ASM::subfic(context->r3, context->r5, 0x206);
/*80233654 00230454*/ PPC::Runtime::ASM::slwi(context->r8, context->r5, 3);
/*80233658 00230458*/ PPC::Runtime::ASM::mtctr(context->r3);
/*8023365C 0023045C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x206);
/*80233660 00230460*/ PPC::Runtime::ASM::bge(.L_802336A4);
RUNTIME_PPC_JUMP_LABEL(.L_80233664, 0x80233664) //this is a jump label
/*80233664 00230464*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233668 00230468*/ PPC::Runtime::ASM::addi(context->r5, context->r8, 0x2);
/*8023366C 0023046C*/ PPC::Runtime::ASM::addi(context->r3, context->r8, 0x4);
/*80233670 00230470*/ PPC::Runtime::ASM::lbzx(context->r6, context->r7, context->r8);
/*80233674 00230474*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r0, 7, 24, 24);
/*80233678 00230478*/ PPC::Runtime::ASM::stbx(context->r6, context->r7, context->r8);
/*8023367C 0023047C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233680 00230480*/ PPC::Runtime::ASM::lbzx(context->r6, context->r7, context->r8);
/*80233684 00230484*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r0, 6, 25, 25);
/*80233688 00230488*/ PPC::Runtime::ASM::stbx(context->r6, context->r7, context->r8);
/*8023368C 0023048C*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80233690 00230490*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*80233694 00230494*/ PPC::Runtime::ASM::sthx(context->r0, context->r6, context->r5);
/*80233698 00230498*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r4));
/*8023369C 0023049C*/ PPC::Runtime::ASM::stwx(context->r0, context->r5, context->r3);
/*802336A0 002304A0*/ PPC::Runtime::ASM::bdnz(.L_80233664);
RUNTIME_PPC_JUMP_LABEL(.L_802336A4, 0x802336A4) //this is a jump label
/*802336A4 002304A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802336A8 002304A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802336AC 002304AC*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802336B0 002304B0*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*802336B4 002304B4*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*802336B8 002304B8*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24a, context->r5));
/*802336BC 002304BC*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r5));
/*802336C0 002304C0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r5));
/*802336C4 002304C4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r5));
/*802336C8 002304C8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r5));
/*802336CC 002304CC*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_802336D0, 0x802336D0) //this is a jump label
/*802336D0 002304D0*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*802336D4 002304D4*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r5));
/*802336D8 002304D8*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r5));
/*802336DC 002304DC*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r5));
/*802336E0 002304E0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r5));
/*802336E4 002304E4*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r5));
/*802336E8 002304E8*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r5));
/*802336EC 002304EC*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r5));
/*802336F0 002304F0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r5));
/*802336F4 002304F4*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*802336F8 002304F8*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r5));
/*802336FC 002304FC*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r5));
/*80233700 00230500*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r5));
/*80233704 00230504*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r5));
/*80233708 00230508*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r5));
/*8023370C 0023050C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r5));
/*80233710 00230510*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15c, context->r5));
/*80233714 00230514*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r5));
/*80233718 00230518*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r5));
/*8023371C 0023051C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r5));
/*80233720 00230520*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r5));
/*80233724 00230524*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r5));
/*80233728 00230528*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r5));
/*8023372C 0023052C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r5));
/*80233730 00230530*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r5));
/*80233734 00230534*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r5));
/*80233738 00230538*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r5));
/*8023373C 0023053C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r5));
/*80233740 00230540*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r5));
/*80233744 00230544*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r5));
/*80233748 00230548*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r5));
/*8023374C 0023054C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r5));
/*80233750 00230550*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r5));
/*80233754 00230554*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x40);
/*80233758 00230558*/ PPC::Runtime::ASM::bdnz(.L_802336D0);
/*8023375C 0023055C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*80233760 00230560*/ PPC::Runtime::ASM::addi(context->r24, context->r1, 0x8);
/*80233764 00230564*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*80233768 00230568*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r3));
/*8023376C 0023056C*/ PPC::Runtime::ASM::mr(context->r23, context->r24);
/*80233770 00230570*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x250, context->r3));
/*80233774 00230574*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x254, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80233778, 0x80233778) //this is a jump label
/*80233778 00230578*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8023377C 0023057C*/ PPC::Runtime::ASM::bl(fn_80234398);
/*80233780 00230580*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*80233784 00230584*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*80233788 00230588*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x40);
/*8023378C 0023058C*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x4);
/*80233790 00230590*/ PPC::Runtime::ASM::blt(.L_80233778);
/*80233794 00230594*/ PPC::Runtime::ASM::li(context->r23, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80233798, 0x80233798) //this is a jump label
/*80233798 00230598*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8023379C 0023059C*/ PPC::Runtime::ASM::bl(fn_802349B0);
/*802337A0 002305A0*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*802337A4 002305A4*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x4);
/*802337A8 002305A8*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x40);
/*802337AC 002305AC*/ PPC::Runtime::ASM::blt(.L_80233798);
/*802337B0 002305B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802337B4 002305B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802337B8 002305B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802337BC 002305BC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802337C0 002305C0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x258, context->r3));
/*802337C4 002305C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25c, context->r3));
/*802337C8 002305C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x260, context->r3));
/*802337CC 002305CC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x130);
/*802337D0 002305D0*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*802337D4 002305D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*802337D8 002305D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802337DC 002305DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x130);
/*802337E0 002305E0*/ PPC::Runtime::ASM::blr();
}