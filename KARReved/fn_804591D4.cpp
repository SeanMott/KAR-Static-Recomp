//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_804527A0.hpp"
#include "fn_80454904.hpp"
#include "fn_CARDClose.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_CARDClose.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"



void fn_804591D4(PPC::Runtime::GCContext* context)
{
/*804591D4 00455FD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*804591D8 00455FD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804591DC 00455FDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804591E0 00455FE0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*804591E4 00455FE4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*804591E8 00455FE8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*804591EC 00455FEC*/ PPC::Runtime::ASM::addi(context->r29, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*804591F0 00455FF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r29));
/*804591F4 00455FF4*/ PPC::Runtime::ASM::mulli(context->r0, context->r30, 0x1c);
/*804591F8 00455FF8*/ PPC::Runtime::ASM::add(context->r4, context->r29, context->r0);
/*804591FC 00455FFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x614, context->r4));
/*80459200 00456000*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80459204 00456004*/ PPC::Runtime::ASM::beq(.L_8045920C);
/*80459208 00456008*/ PPC::Runtime::ASM::b(.L_80459670);
RUNTIME_PPC_JUMP_LABEL(.L_8045920C, 0x8045920C) //this is a jump label
/*8045920C 0045600C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80459210 00456010*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80459214 00456014*/ PPC::Runtime::ASM::beq(.L_80459240);
/*80459218 00456018*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x618, context->r4));
/*8045921C 0045601C*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x618);
/*80459220 00456020*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*80459224 00456024*/ PPC::Runtime::ASM::beq(.L_80459238);
/*80459228 00456028*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8045922C 0045602C*/ PPC::Runtime::ASM::beq(.L_80459238);
/*80459230 00456030*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*80459234 00456034*/ PPC::Runtime::ASM::bne(.L_80459240);
RUNTIME_PPC_JUMP_LABEL(.L_80459238, 0x80459238) //this is a jump label
/*80459238 00456038*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045923C 0045603C*/ PPC::Runtime::ASM::b(.L_80459670);
RUNTIME_PPC_JUMP_LABEL(.L_80459240, 0x80459240) //this is a jump label
/*80459240 00456040*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80459244 00456044*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80459248 00456048*/ PPC::Runtime::ASM::mr(context->r0, context->r30);
/*8045924C 0045604C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80459250 00456050*/ PPC::Runtime::ASM::blt(.L_8045925C);
/*80459254 00456054*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*80459258 00456058*/ PPC::Runtime::ASM::ble(.L_80459260);
RUNTIME_PPC_JUMP_LABEL(.L_8045925C, 0x8045925C) //this is a jump label
/*8045925C 0045605C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80459260, 0x80459260) //this is a jump label
/*80459260 00456060*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x1c);
/*80459264 00456064*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80459268 00456068*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x614, context->r3));
/*8045926C 0045606C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xe);
/*80459270 00456070*/ PPC::Runtime::ASM::bne(.L_80459278);
/*80459274 00456074*/ PPC::Runtime::ASM::b(.L_80459670);
RUNTIME_PPC_JUMP_LABEL(.L_80459278, 0x80459278) //this is a jump label
/*80459278 00456078*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8045927C 0045607C*/ PPC::Runtime::ASM::bl(fn_804527A0);
/*80459280 00456080*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80459284 00456084*/ PPC::Runtime::ASM::beq(.L_8045928C);
/*80459288 00456088*/ PPC::Runtime::ASM::b(.L_80459670);
RUNTIME_PPC_JUMP_LABEL(.L_8045928C, 0x8045928C) //this is a jump label
/*8045928C 0045608C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80459290 00456090*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r29));
/*80459294 00456094*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80459298 00456098*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8045929C 0045609C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804592A0 004560A0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*804592A4 004560A4*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*804592A8 004560A8*/ PPC::Runtime::ASM::bne(.L_804592B4);
/*804592AC 004560AC*/ PPC::Runtime::ASM::li(context->r31, 0x4);
/*804592B0 004560B0*/ PPC::Runtime::ASM::b(.L_80459330);
RUNTIME_PPC_JUMP_LABEL(.L_804592B4, 0x804592B4) //this is a jump label
/*804592B4 004560B4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*804592B8 004560B8*/ PPC::Runtime::ASM::mr(context->r28, context->r29);
/*804592BC 004560BC*/ PPC::Runtime::ASM::add(context->r26, context->r27, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804592C0, 0x804592C0) //this is a jump label
/*804592C0 004560C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*804592C4 004560C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*804592C8 004560C8*/ PPC::Runtime::ASM::beq(.L_80459324);
/*804592CC 004560CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*804592D0 004560D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804592D4 004560D4*/ PPC::Runtime::ASM::ble(.L_80459310);
/*804592D8 004560D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*804592DC 004560DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*804592E0 004560E0*/ PPC::Runtime::ASM::beq(.L_8045930C);
/*804592E4 004560E4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*804592E8 004560E8*/ PPC::Runtime::ASM::bl(fn_80454904);
/*804592EC 004560EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*804592F0 004560F0*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*804592F4 004560F4*/ PPC::Runtime::ASM::bne(.L_80459300);
/*804592F8 004560F8*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*804592FC 004560FC*/ PPC::Runtime::ASM::b(.L_80459310);
RUNTIME_PPC_JUMP_LABEL(.L_80459300, 0x80459300) //this is a jump label
/*80459300 00456100*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80459304 00456104*/ PPC::Runtime::ASM::beq(.L_80459310);
/*80459308 00456108*/ PPC::Runtime::ASM::b(.L_80459330);
RUNTIME_PPC_JUMP_LABEL(.L_8045930C, 0x8045930C) //this is a jump label
/*8045930C 0045610C*/ PPC::Runtime::ASM::li(context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80459310, 0x80459310) //this is a jump label
/*80459310 00456110*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80459314 00456114*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x24);
/*80459318 00456118*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x10);
/*8045931C 0045611C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x24);
/*80459320 00456120*/ PPC::Runtime::ASM::blt(.L_804592C0);
RUNTIME_PPC_JUMP_LABEL(.L_80459324, 0x80459324) //this is a jump label
/*80459324 00456124*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80459328 00456128*/ PPC::Runtime::ASM::beq(.L_80459330);
/*8045932C 0045612C*/ PPC::Runtime::ASM::li(context->r31, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80459330, 0x80459330) //this is a jump label
/*80459330 00456130*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80459334 00456134*/ PPC::Runtime::ASM::beq(.L_8045947C);
/*80459338 00456138*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8045933C 0045613C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80459340 00456140*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80459344 00456144*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80459348 00456148*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8045934C 0045614C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x518);
/*80459350 00456150*/ PPC::Runtime::ASM::bl(fn_CARDClose);
/*80459354 00456154*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x5);
/*80459358 00456158*/ PPC::Runtime::ASM::beq(.L_804593E0);
/*8045935C 0045615C*/ PPC::Runtime::ASM::bge(.L_8045938C);
/*80459360 00456160*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xe);
/*80459364 00456164*/ PPC::Runtime::ASM::beq(.L_804593F8);
/*80459368 00456168*/ PPC::Runtime::ASM::bge(.L_80459378);
/*8045936C 0045616C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x80);
/*80459370 00456170*/ PPC::Runtime::ASM::beq(.L_804593E0);
/*80459374 00456174*/ PPC::Runtime::ASM::b(.L_804593F8);
RUNTIME_PPC_JUMP_LABEL(.L_80459378, 0x80459378) //this is a jump label
/*80459378 00456178*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x6);
/*8045937C 0045617C*/ PPC::Runtime::ASM::bge(.L_804593F0);
/*80459380 00456180*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xc);
/*80459384 00456184*/ PPC::Runtime::ASM::bge(.L_804593F8);
/*80459388 00456188*/ PPC::Runtime::ASM::b(.L_804593E8);
RUNTIME_PPC_JUMP_LABEL(.L_8045938C, 0x8045938C) //this is a jump label
/*8045938C 0045618C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80459390 00456190*/ PPC::Runtime::ASM::beq(.L_804593B8);
/*80459394 00456194*/ PPC::Runtime::ASM::bge(.L_804593A8);
/*80459398 00456198*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*8045939C 0045619C*/ PPC::Runtime::ASM::beq(.L_804593C0);
/*804593A0 004561A0*/ PPC::Runtime::ASM::bge(.L_804593C8);
/*804593A4 004561A4*/ PPC::Runtime::ASM::b(.L_804593D0);
RUNTIME_PPC_JUMP_LABEL(.L_804593A8, 0x804593A8) //this is a jump label
/*804593A8 004561A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*804593AC 004561AC*/ PPC::Runtime::ASM::beq(.L_804593F8);
/*804593B0 004561B0*/ PPC::Runtime::ASM::bge(.L_804593F8);
/*804593B4 004561B4*/ PPC::Runtime::ASM::b(.L_804593D8);
RUNTIME_PPC_JUMP_LABEL(.L_804593B8, 0x804593B8) //this is a jump label
/*804593B8 004561B8*/ PPC::Runtime::ASM::li(context->r28, 0xb);
/*804593BC 004561BC*/ PPC::Runtime::ASM::b(.L_804593FC);
RUNTIME_PPC_JUMP_LABEL(.L_804593C0, 0x804593C0) //this is a jump label
/*804593C0 004561C0*/ PPC::Runtime::ASM::li(context->r28, 0xe);
/*804593C4 004561C4*/ PPC::Runtime::ASM::b(.L_804593FC);
RUNTIME_PPC_JUMP_LABEL(.L_804593C8, 0x804593C8) //this is a jump label
/*804593C8 004561C8*/ PPC::Runtime::ASM::li(context->r28, 0xf);
/*804593CC 004561CC*/ PPC::Runtime::ASM::b(.L_804593FC);
RUNTIME_PPC_JUMP_LABEL(.L_804593D0, 0x804593D0) //this is a jump label
/*804593D0 004561D0*/ PPC::Runtime::ASM::li(context->r28, 0x6);
/*804593D4 004561D4*/ PPC::Runtime::ASM::b(.L_804593FC);
RUNTIME_PPC_JUMP_LABEL(.L_804593D8, 0x804593D8) //this is a jump label
/*804593D8 004561D8*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*804593DC 004561DC*/ PPC::Runtime::ASM::b(.L_804593FC);
RUNTIME_PPC_JUMP_LABEL(.L_804593E0, 0x804593E0) //this is a jump label
/*804593E0 004561E0*/ PPC::Runtime::ASM::li(context->r28, 0xd);
/*804593E4 004561E4*/ PPC::Runtime::ASM::b(.L_804593FC);
RUNTIME_PPC_JUMP_LABEL(.L_804593E8, 0x804593E8) //this is a jump label
/*804593E8 004561E8*/ PPC::Runtime::ASM::li(context->r28, 0x9);
/*804593EC 004561EC*/ PPC::Runtime::ASM::b(.L_804593FC);
RUNTIME_PPC_JUMP_LABEL(.L_804593F0, 0x804593F0) //this is a jump label
/*804593F0 004561F0*/ PPC::Runtime::ASM::li(context->r28, 0xa);
/*804593F4 004561F4*/ PPC::Runtime::ASM::b(.L_804593FC);
RUNTIME_PPC_JUMP_LABEL(.L_804593F8, 0x804593F8) //this is a jump label
/*804593F8 004561F8*/ PPC::Runtime::ASM::li(context->r28, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_804593FC, 0x804593FC) //this is a jump label
/*804593FC 004561FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80459400 00456200*/ PPC::Runtime::ASM::beq(.L_80459438);
/*80459404 00456204*/ PPC::Runtime::ASM::slwi(context->r6, context->r30, 2);
/*80459408 00456208*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*8045940C 0045620C*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80459410 00456210*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*80459414 00456214*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*80459418 00456218*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8045941C 0045621C*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80459420 00456220*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*80459424 00456224*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80459428 00456228*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045942C 0045622C*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80459430 00456230*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80459434 00456234*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
RUNTIME_PPC_JUMP_LABEL(.L_80459438, 0x80459438) //this is a jump label
/*80459438 00456238*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8045943C 0045623C*/ PPC::Runtime::ASM::bne(.L_80459474);
/*80459440 00456240*/ PPC::Runtime::ASM::slwi(context->r6, context->r30, 2);
/*80459444 00456244*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*80459448 00456248*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*8045944C 0045624C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*80459450 00456250*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*80459454 00456254*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80459458 00456258*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*8045945C 0045625C*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*80459460 00456260*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80459464 00456264*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80459468 00456268*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*8045946C 0045626C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80459470 00456270*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
RUNTIME_PPC_JUMP_LABEL(.L_80459474, 0x80459474) //this is a jump label
/*80459474 00456274*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80459478 00456278*/ PPC::Runtime::ASM::b(.L_80459670);
RUNTIME_PPC_JUMP_LABEL(.L_8045947C, 0x8045947C) //this is a jump label
/*8045947C 0045627C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80459480 00456280*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80459484 00456284*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80459488 00456288*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8045948C 0045628C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80459490 00456290*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x518);
/*80459494 00456294*/ PPC::Runtime::ASM::bl(fn_CARDClose);
/*80459498 00456298*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x5);
/*8045949C 0045629C*/ PPC::Runtime::ASM::beq(.L_80459524);
/*804594A0 004562A0*/ PPC::Runtime::ASM::bge(.L_804594D0);
/*804594A4 004562A4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xe);
/*804594A8 004562A8*/ PPC::Runtime::ASM::beq(.L_8045953C);
/*804594AC 004562AC*/ PPC::Runtime::ASM::bge(.L_804594BC);
/*804594B0 004562B0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x80);
/*804594B4 004562B4*/ PPC::Runtime::ASM::beq(.L_80459524);
/*804594B8 004562B8*/ PPC::Runtime::ASM::b(.L_8045953C);
RUNTIME_PPC_JUMP_LABEL(.L_804594BC, 0x804594BC) //this is a jump label
/*804594BC 004562BC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x6);
/*804594C0 004562C0*/ PPC::Runtime::ASM::bge(.L_80459534);
/*804594C4 004562C4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xc);
/*804594C8 004562C8*/ PPC::Runtime::ASM::bge(.L_8045953C);
/*804594CC 004562CC*/ PPC::Runtime::ASM::b(.L_8045952C);
RUNTIME_PPC_JUMP_LABEL(.L_804594D0, 0x804594D0) //this is a jump label
/*804594D0 004562D0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*804594D4 004562D4*/ PPC::Runtime::ASM::beq(.L_804594FC);
/*804594D8 004562D8*/ PPC::Runtime::ASM::bge(.L_804594EC);
/*804594DC 004562DC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*804594E0 004562E0*/ PPC::Runtime::ASM::beq(.L_80459504);
/*804594E4 004562E4*/ PPC::Runtime::ASM::bge(.L_8045950C);
/*804594E8 004562E8*/ PPC::Runtime::ASM::b(.L_80459514);
RUNTIME_PPC_JUMP_LABEL(.L_804594EC, 0x804594EC) //this is a jump label
/*804594EC 004562EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*804594F0 004562F0*/ PPC::Runtime::ASM::beq(.L_8045953C);
/*804594F4 004562F4*/ PPC::Runtime::ASM::bge(.L_8045953C);
/*804594F8 004562F8*/ PPC::Runtime::ASM::b(.L_8045951C);
RUNTIME_PPC_JUMP_LABEL(.L_804594FC, 0x804594FC) //this is a jump label
/*804594FC 004562FC*/ PPC::Runtime::ASM::li(context->r28, 0xb);
/*80459500 00456300*/ PPC::Runtime::ASM::b(.L_80459540);
RUNTIME_PPC_JUMP_LABEL(.L_80459504, 0x80459504) //this is a jump label
/*80459504 00456304*/ PPC::Runtime::ASM::li(context->r28, 0xe);
/*80459508 00456308*/ PPC::Runtime::ASM::b(.L_80459540);
RUNTIME_PPC_JUMP_LABEL(.L_8045950C, 0x8045950C) //this is a jump label
/*8045950C 0045630C*/ PPC::Runtime::ASM::li(context->r28, 0xf);
/*80459510 00456310*/ PPC::Runtime::ASM::b(.L_80459540);
RUNTIME_PPC_JUMP_LABEL(.L_80459514, 0x80459514) //this is a jump label
/*80459514 00456314*/ PPC::Runtime::ASM::li(context->r28, 0x6);
/*80459518 00456318*/ PPC::Runtime::ASM::b(.L_80459540);
RUNTIME_PPC_JUMP_LABEL(.L_8045951C, 0x8045951C) //this is a jump label
/*8045951C 0045631C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80459520 00456320*/ PPC::Runtime::ASM::b(.L_80459540);
RUNTIME_PPC_JUMP_LABEL(.L_80459524, 0x80459524) //this is a jump label
/*80459524 00456324*/ PPC::Runtime::ASM::li(context->r28, 0xd);
/*80459528 00456328*/ PPC::Runtime::ASM::b(.L_80459540);
RUNTIME_PPC_JUMP_LABEL(.L_8045952C, 0x8045952C) //this is a jump label
/*8045952C 0045632C*/ PPC::Runtime::ASM::li(context->r28, 0x9);
/*80459530 00456330*/ PPC::Runtime::ASM::b(.L_80459540);
RUNTIME_PPC_JUMP_LABEL(.L_80459534, 0x80459534) //this is a jump label
/*80459534 00456334*/ PPC::Runtime::ASM::li(context->r28, 0xa);
/*80459538 00456338*/ PPC::Runtime::ASM::b(.L_80459540);
RUNTIME_PPC_JUMP_LABEL(.L_8045953C, 0x8045953C) //this is a jump label
/*8045953C 0045633C*/ PPC::Runtime::ASM::li(context->r28, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_80459540, 0x80459540) //this is a jump label
/*80459540 00456340*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80459544 00456344*/ PPC::Runtime::ASM::beq(.L_8045957C);
/*80459548 00456348*/ PPC::Runtime::ASM::slwi(context->r6, context->r30, 2);
/*8045954C 0045634C*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*80459550 00456350*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80459554 00456354*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*80459558 00456358*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*8045955C 0045635C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80459560 00456360*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80459564 00456364*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*80459568 00456368*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*8045956C 0045636C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80459570 00456370*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80459574 00456374*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80459578 00456378*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
RUNTIME_PPC_JUMP_LABEL(.L_8045957C, 0x8045957C) //this is a jump label
/*8045957C 0045637C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*80459580 00456380*/ PPC::Runtime::ASM::beq(.L_80459588);
/*80459584 00456384*/ PPC::Runtime::ASM::b(.L_80459668);
RUNTIME_PPC_JUMP_LABEL(.L_80459588, 0x80459588) //this is a jump label
/*80459588 00456388*/ PPC::Runtime::ASM::slwi(context->r6, context->r30, 2);
/*8045958C 0045638C*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*80459590 00456390*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80459594 00456394*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*80459598 00456398*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*8045959C 0045639C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*804595A0 004563A0*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*804595A4 004563A4*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*804595A8 004563A8*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*804595AC 004563AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*804595B0 004563B0*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*804595B4 004563B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*804595B8 004563B8*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
/*804595BC 004563BC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x5);
/*804595C0 004563C0*/ PPC::Runtime::ASM::beq(.L_80459648);
/*804595C4 004563C4*/ PPC::Runtime::ASM::bge(.L_804595F4);
/*804595C8 004563C8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xe);
/*804595CC 004563CC*/ PPC::Runtime::ASM::beq(.L_80459660);
/*804595D0 004563D0*/ PPC::Runtime::ASM::bge(.L_804595E0);
/*804595D4 004563D4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x80);
/*804595D8 004563D8*/ PPC::Runtime::ASM::beq(.L_80459648);
/*804595DC 004563DC*/ PPC::Runtime::ASM::b(.L_80459660);
RUNTIME_PPC_JUMP_LABEL(.L_804595E0, 0x804595E0) //this is a jump label
/*804595E0 004563E0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x6);
/*804595E4 004563E4*/ PPC::Runtime::ASM::bge(.L_80459658);
/*804595E8 004563E8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xc);
/*804595EC 004563EC*/ PPC::Runtime::ASM::bge(.L_80459660);
/*804595F0 004563F0*/ PPC::Runtime::ASM::b(.L_80459650);
RUNTIME_PPC_JUMP_LABEL(.L_804595F4, 0x804595F4) //this is a jump label
/*804595F4 004563F4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*804595F8 004563F8*/ PPC::Runtime::ASM::beq(.L_80459620);
/*804595FC 004563FC*/ PPC::Runtime::ASM::bge(.L_80459610);
/*80459600 00456400*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*80459604 00456404*/ PPC::Runtime::ASM::beq(.L_80459628);
/*80459608 00456408*/ PPC::Runtime::ASM::bge(.L_80459630);
/*8045960C 0045640C*/ PPC::Runtime::ASM::b(.L_80459638);
RUNTIME_PPC_JUMP_LABEL(.L_80459610, 0x80459610) //this is a jump label
/*80459610 00456410*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80459614 00456414*/ PPC::Runtime::ASM::beq(.L_80459660);
/*80459618 00456418*/ PPC::Runtime::ASM::bge(.L_80459660);
/*8045961C 0045641C*/ PPC::Runtime::ASM::b(.L_80459640);
RUNTIME_PPC_JUMP_LABEL(.L_80459620, 0x80459620) //this is a jump label
/*80459620 00456420*/ PPC::Runtime::ASM::li(context->r28, 0xb);
/*80459624 00456424*/ PPC::Runtime::ASM::b(.L_80459664);
RUNTIME_PPC_JUMP_LABEL(.L_80459628, 0x80459628) //this is a jump label
/*80459628 00456428*/ PPC::Runtime::ASM::li(context->r28, 0xe);
/*8045962C 0045642C*/ PPC::Runtime::ASM::b(.L_80459664);
RUNTIME_PPC_JUMP_LABEL(.L_80459630, 0x80459630) //this is a jump label
/*80459630 00456430*/ PPC::Runtime::ASM::li(context->r28, 0xf);
/*80459634 00456434*/ PPC::Runtime::ASM::b(.L_80459664);
RUNTIME_PPC_JUMP_LABEL(.L_80459638, 0x80459638) //this is a jump label
/*80459638 00456438*/ PPC::Runtime::ASM::li(context->r28, 0x6);
/*8045963C 0045643C*/ PPC::Runtime::ASM::b(.L_80459664);
RUNTIME_PPC_JUMP_LABEL(.L_80459640, 0x80459640) //this is a jump label
/*80459640 00456440*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80459644 00456444*/ PPC::Runtime::ASM::b(.L_80459664);
RUNTIME_PPC_JUMP_LABEL(.L_80459648, 0x80459648) //this is a jump label
/*80459648 00456448*/ PPC::Runtime::ASM::li(context->r28, 0xd);
/*8045964C 0045644C*/ PPC::Runtime::ASM::b(.L_80459664);
RUNTIME_PPC_JUMP_LABEL(.L_80459650, 0x80459650) //this is a jump label
/*80459650 00456450*/ PPC::Runtime::ASM::li(context->r28, 0x9);
/*80459654 00456454*/ PPC::Runtime::ASM::b(.L_80459664);
RUNTIME_PPC_JUMP_LABEL(.L_80459658, 0x80459658) //this is a jump label
/*80459658 00456458*/ PPC::Runtime::ASM::li(context->r28, 0xa);
/*8045965C 0045645C*/ PPC::Runtime::ASM::b(.L_80459664);
RUNTIME_PPC_JUMP_LABEL(.L_80459660, 0x80459660) //this is a jump label
/*80459660 00456460*/ PPC::Runtime::ASM::li(context->r28, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_80459664, 0x80459664) //this is a jump label
/*80459664 00456464*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80459668, 0x80459668) //this is a jump label
/*80459668 00456468*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8045966C 0045646C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_80459670, 0x80459670) //this is a jump label
/*80459670 00456470*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80459674 00456474*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80459678 00456478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8045967C 0045647C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80459680 00456480*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80459684 00456484*/ PPC::Runtime::ASM::blr();
}