//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_801722DC.hpp"
#include "fn_801722DC.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_80138AC8.hpp"
#include "fn_80173CB4.hpp"
#include "fn_80174CE4.hpp"
#include "fn_80175F48.hpp"



void fn_80172504(PPC::Runtime::GCContext* context)
{
/*80172504 0016F304*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80172508 0016F308*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017250C 0016F30C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80172510 0016F310*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80172514 0016F314*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80172518 0016F318*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*8017251C 0016F31C*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*80172520 0016F320*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*80172524 0016F324*/ PPC::Runtime::ASM::mr(context->r27, context->r6);
/*80172528 0016F328*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017252C 0016F32C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xc7c);
/*80172530 0016F330*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80172534 0016F334*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc7c, context->r3));
/*80172538 0016F338*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8017253C 0016F33C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80172540 0016F340*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80172544 0016F344*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80172548 0016F348*/ PPC::Runtime::ASM::lis(context->r4, fn_801722DC @ Get_MemoryOffset_HighBit);
/*8017254C 0016F34C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80172550 0016F350*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80172554 0016F354*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80172558 0016F358*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801722DC @ Get_MemoryOffset_LowBit);
/*8017255C 0016F35C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80172560 0016F360*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*80172564 0016F364*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80172568 0016F368*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0xa);
/*8017256C 0016F36C*/ PPC::Runtime::ASM::extsb(context->r5, context->r27);
/*80172570 0016F370*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80172574 0016F374*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80172578 0016F378*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017257C 0016F37C*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r4);
/*80172580 0016F380*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80172584 0016F384*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0C00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80172588 0016F388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017258C 0016F38C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80172590 0016F390*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80172594 0016F394*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0BF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80172598 0016F398*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*8017259C 0016F39C*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*801725A0 0016F3A0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801725A4 0016F3A4*/ PPC::Runtime::ASM::li(context->r4, 0x90);
/*801725A8 0016F3A8*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*801725AC 0016F3AC*/ PPC::Runtime::ASM::addi(context->r0, context->r24, 0x4);
/*801725B0 0016F3B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801725B4 0016F3B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801725B8 0016F3B8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801725BC 0016F3BC*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*801725C0 0016F3C0*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*801725C4 0016F3C4*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r31));
/*801725C8 0016F3C8*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*801725CC 0016F3CC*/ PPC::Runtime::ASM::extsb(context->r0, context->r25);
/*801725D0 0016F3D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801725D4 0016F3D4*/ PPC::Runtime::ASM::bgt(.L_801725E4);
/*801725D8 0016F3D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801725DC 0016F3DC*/ PPC::Runtime::ASM::bl(fn_80173CB4);
/*801725E0 0016F3E0*/ PPC::Runtime::ASM::b(.L_80172608);
RUNTIME_PPC_JUMP_LABEL(.L_801725E4, 0x801725E4) //this is a jump label
/*801725E4 0016F3E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801725E8 0016F3E8*/ PPC::Runtime::ASM::bne(.L_801725FC);
/*801725EC 0016F3EC*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*801725F0 0016F3F0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801725F4 0016F3F4*/ PPC::Runtime::ASM::bl(fn_80174CE4);
/*801725F8 0016F3F8*/ PPC::Runtime::ASM::b(.L_80172608);
RUNTIME_PPC_JUMP_LABEL(.L_801725FC, 0x801725FC) //this is a jump label
/*801725FC 0016F3FC*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80172600 0016F400*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80172604 0016F404*/ PPC::Runtime::ASM::bl(fn_80175F48);
RUNTIME_PPC_JUMP_LABEL(.L_80172608, 0x80172608) //this is a jump label
/*80172608 0016F408*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8017260C 0016F40C*/ PPC::Runtime::ASM::bne(.L_80172620);
/*80172610 0016F410*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C90 @ Get_MemoryOffset_SDA21);
/*80172614 0016F414*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80172618 0016F418*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C98 @ Get_MemoryOffset_SDA21);
/*8017261C 0016F41C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80172620, 0x80172620) //this is a jump label
/*80172620 0016F420*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80172624 0016F424*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80172628 0016F428*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8017262C 0016F42C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80172630 0016F430*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80172634 0016F434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80172638 0016F438*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8017263C 0016F43C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80172640 0016F440*/ PPC::Runtime::ASM::bne(.L_8017268C);
/*80172644 0016F444*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80172648 0016F448*/ PPC::Runtime::ASM::beq(.L_8017268C);
/*8017264C 0016F44C*/ PPC::Runtime::ASM::bne(.L_80172660);
/*80172650 0016F450*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C90 @ Get_MemoryOffset_SDA21);
/*80172654 0016F454*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80172658 0016F458*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C98 @ Get_MemoryOffset_SDA21);
/*8017265C 0016F45C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80172660, 0x80172660) //this is a jump label
/*80172660 0016F460*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80172664 0016F464*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80172668 0016F468*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8017266C 0016F46C*/ PPC::Runtime::ASM::bne(.L_8017267C);
/*80172670 0016F470*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80172674 0016F474*/ PPC::Runtime::ASM::beq(.L_8017267C);
/*80172678 0016F478*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8017267C, 0x8017267C) //this is a jump label
/*8017267C 0016F47C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80172680 0016F480*/ PPC::Runtime::ASM::bne(.L_8017268C);
/*80172684 0016F484*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80172688 0016F488*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8017268C, 0x8017268C) //this is a jump label
/*8017268C 0016F48C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80172690 0016F490*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80172694 0016F494*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80172698 0016F498*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*8017269C 0016F49C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801726A0 0016F4A0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*801726A4 0016F4A4*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*801726A8 0016F4A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801726AC 0016F4AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801726B0 0016F4B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801726B4 0016F4B4*/ PPC::Runtime::ASM::blr();
}