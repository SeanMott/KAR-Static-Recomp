//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016929C.hpp"
#include "fn_8016936C.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8016936C.hpp"
#include "fn_80141820.hpp"
#include "fn_80141C84.hpp"



void fn_8016A434(PPC::Runtime::GCContext* context)
{
/*8016A434 00167234*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8016A438 00167238*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016A43C 0016723C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8016A440 00167240*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8016A444 00167244*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8016A448 00167248*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8016A44C 0016724C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016A450 00167250*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*8016A454 00167254*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016A458 00167258*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8016A45C 0016725C*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac8, context->r3));
/*8016A460 00167260*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8016A464 00167264*/ PPC::Runtime::ASM::beq(.L_8016A620);
/*8016A468 00167268*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8016A46C 0016726C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*8016A470 00167270*/ PPC::Runtime::ASM::bl(fn_8016929C);
/*8016A474 00167274*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*8016A478 00167278*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016A47C 0016727C*/ PPC::Runtime::ASM::bl(fn_8016936C);
/*8016A480 00167280*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8016A484 00167284*/ PPC::Runtime::ASM::bne(.L_8016A498);
/*8016A488 00167288*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016A48C 0016728C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8016A490 00167290*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B80 @ Get_MemoryOffset_SDA21);
/*8016A494 00167294*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016A498, 0x8016A498) //this is a jump label
/*8016A498 00167298*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016A49C 0016729C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016A4A0 001672A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8016A4A4 001672A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*8016A4A8 001672A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016A4AC 001672AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*8016A4B0 001672B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8016A4B4 001672B4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8016A4B8 001672B8*/ PPC::Runtime::ASM::bne(.L_8016A504);
/*8016A4BC 001672BC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8016A4C0 001672C0*/ PPC::Runtime::ASM::beq(.L_8016A504);
/*8016A4C4 001672C4*/ PPC::Runtime::ASM::bne(.L_8016A4D8);
/*8016A4C8 001672C8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016A4CC 001672CC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8016A4D0 001672D0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B80 @ Get_MemoryOffset_SDA21);
/*8016A4D4 001672D4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016A4D8, 0x8016A4D8) //this is a jump label
/*8016A4D8 001672D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8016A4DC 001672DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016A4E0 001672E0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8016A4E4 001672E4*/ PPC::Runtime::ASM::bne(.L_8016A4F4);
/*8016A4E8 001672E8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8016A4EC 001672EC*/ PPC::Runtime::ASM::beq(.L_8016A4F4);
/*8016A4F0 001672F0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8016A4F4, 0x8016A4F4) //this is a jump label
/*8016A4F4 001672F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8016A4F8 001672F8*/ PPC::Runtime::ASM::bne(.L_8016A504);
/*8016A4FC 001672FC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016A500 00167300*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8016A504, 0x8016A504) //this is a jump label
/*8016A504 00167304*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8016A508 00167308*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016A50C 0016730C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8016A510 00167310*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*8016A514 00167314*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016A518 00167318*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8016A51C 0016731C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x28);
/*8016A520 00167320*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016A524 00167324*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016A528 00167328*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8016A52C 0016732C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8016A530 00167330*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x34);
/*8016A534 00167334*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8016A538 00167338*/ PPC::Runtime::ASM::bne(.L_8016A54C);
/*8016A53C 0016733C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016A540 00167340*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*8016A544 00167344*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B80 @ Get_MemoryOffset_SDA21);
/*8016A548 00167348*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016A54C, 0x8016A54C) //this is a jump label
/*8016A54C 0016734C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8016A550 00167350*/ PPC::Runtime::ASM::bne(.L_8016A564);
/*8016A554 00167354*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016A558 00167358*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*8016A55C 0016735C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B88 @ Get_MemoryOffset_SDA21);
/*8016A560 00167360*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016A564, 0x8016A564) //this is a jump label
/*8016A564 00167364*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8016A568 00167368*/ PPC::Runtime::ASM::addi(context->r27, context->r30, 0x40);
/*8016A56C 0016736C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8016A570 00167370*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8016A574 00167374*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8016A578 00167378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8016A57C 0016737C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8016A580 00167380*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8016A584 00167384*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8016A588 00167388*/ PPC::Runtime::ASM::bne(.L_8016A59C);
/*8016A58C 0016738C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016A590 00167390*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*8016A594 00167394*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B80 @ Get_MemoryOffset_SDA21);
/*8016A598 00167398*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016A59C, 0x8016A59C) //this is a jump label
/*8016A59C 0016739C*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8016A5A0 001673A0*/ PPC::Runtime::ASM::bne(.L_8016A5B4);
/*8016A5A4 001673A4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016A5A8 001673A8*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*8016A5AC 001673AC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B88 @ Get_MemoryOffset_SDA21);
/*8016A5B0 001673B0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016A5B4, 0x8016A5B4) //this is a jump label
/*8016A5B4 001673B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8016A5B8 001673B8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016A5BC 001673BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*8016A5C0 001673C0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016A5C4 001673C4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8016A5C8 001673C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8016A5CC 001673CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8016A5D0 001673D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8016A5D4 001673D4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r31));
/*8016A5D8 001673D8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*8016A5DC 001673DC*/ PPC::Runtime::ASM::bl(fn_8016936C);
/*8016A5E0 001673E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*8016A5E4 001673E4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016A5E8 001673E8*/ PPC::Runtime::ASM::bne(.L_8016A60C);
/*8016A5EC 001673EC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*8016A5F0 001673F0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016A5F4 001673F4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8016A5F8 001673F8*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r31));
/*8016A5FC 001673FC*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r31));
/*8016A600 00167400*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r31));
/*8016A604 00167404*/ PPC::Runtime::ASM::bl(fn_80141820);
/*8016A608 00167408*/ PPC::Runtime::ASM::b(.L_8016A620);
RUNTIME_PPC_JUMP_LABEL(.L_8016A60C, 0x8016A60C) //this is a jump label
/*8016A60C 0016740C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*8016A610 00167410*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016A614 00167414*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8016A618 00167418*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r31));
/*8016A61C 0016741C*/ PPC::Runtime::ASM::bl(fn_80141C84);
RUNTIME_PPC_JUMP_LABEL(.L_8016A620, 0x8016A620) //this is a jump label
/*8016A620 00167420*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8016A624 00167424*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8016A628 00167428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8016A62C 0016742C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016A630 00167430*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8016A634 00167434*/ PPC::Runtime::ASM::blr();
}