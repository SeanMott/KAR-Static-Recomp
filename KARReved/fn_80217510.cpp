//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8020C6E0.hpp"
#include "fn_8020C70C.hpp"
#include "fn_80201AF4.hpp"
#include "fn_801FC398.hpp"
#include "fn_8018CB04.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_802041B0.hpp"
#include "fn_802042FC.hpp"
#include "fn_801FF004.hpp"
#include "fn_80203FCC.hpp"
#include "fn_800638F8.hpp"
#include "fn_801FBB50.hpp"



void fn_80217510(PPC::Runtime::GCContext* context)
{
/*80217510 00214310*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*80217514 00214314*/ PPC::Runtime::ASM::mflr(context->r0);
/*80217518 00214318*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8021751C 0021431C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*80217520 00214320*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*80217524 00214324*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*80217528 00214328*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*8021752C 0021432C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xa0);
/*80217530 00214330*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80217534 00214334*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80217538 00214338*/ PPC::Runtime::ASM::bl(fn_8020C6E0);
/*8021753C 0021433C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80217540 00214340*/ PPC::Runtime::ASM::bl(fn_8020C70C);
/*80217544 00214344*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80217548 00214348*/ PPC::Runtime::ASM::bl(fn_80201AF4);
/*8021754C 0021434C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80217550 00214350*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80217554 00214354*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E263C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80217558 00214358*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8021755C 0021435C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80217560 00214360*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80217564 00214364*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80217568 00214368*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r27));
/*8021756C 0021436C*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*80217570 00214370*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80217574 00214374*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*80217578 00214378*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8021757C 0021437C*/ PPC::Runtime::ASM::bl(fn_802041B0);
/*80217580 00214380*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80217584 00214384*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*80217588 00214388*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r27));
/*8021758C 0021438C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80217590 00214390*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80217594 00214394*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80217598 00214398*/ PPC::Runtime::ASM::bl(fn_801FF004);
/*8021759C 0021439C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802175A0 002143A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r27));
/*802175A4 002143A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r27));
/*802175A8 002143A8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 30, 30);
/*802175AC 002143AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r27));
/*802175B0 002143B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*802175B4 002143B4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802175B8 002143B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*802175BC 002143BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802175C0 002143C0*/ PPC::Runtime::ASM::bne(.L_802175CC);
/*802175C4 002143C4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*802175C8 002143C8*/ PPC::Runtime::ASM::b(.L_802175D8);
RUNTIME_PPC_JUMP_LABEL(.L_802175CC, 0x802175CC) //this is a jump label
/*802175CC 002143CC*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*802175D0 002143D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*802175D4 002143D4*/ PPC::Runtime::ASM::add(context->r29, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802175D8, 0x802175D8) //this is a jump label
/*802175D8 002143D8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*802175DC 002143DC*/ PPC::Runtime::ASM::ble(.L_80217748);
/*802175E0 002143E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r27));
/*802175E4 002143E4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802175E8 002143E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r27));
/*802175EC 002143EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802175F0 002143F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802175F4 002143F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r27));
/*802175F8 002143F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802175FC 002143FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80217600 00214400*/ PPC::Runtime::ASM::bl(fn_80203FCC);
/*80217604 00214404*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E2640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80217608 00214408*/ PPC::Runtime::ASM::xoris(context->r30, context->r29, 0x8000);
/*8021760C 0021440C*/ PPC::Runtime::ASM::lfd(context->f31, STRUCT_DOUBLE_COUNT_1805E2648 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80217610 00214410*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80217614 00214414*/ PPC::Runtime::ASM::lis(context->r31, 0x4330);
/*80217618 00214418*/ PPC::Runtime::ASM::b(.L_80217740);
RUNTIME_PPC_JUMP_LABEL(.L_8021761C, 0x8021761C) //this is a jump label
/*8021761C 0021441C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80217620 00214420*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80217624 00214424*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x340);
/*80217628 00214428*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8021762C 0021442C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80217630 00214430*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*80217634 00214434*/ PPC::Runtime::ASM::fdivs(context->f1, context->f30, context->f0);
/*80217638 00214438*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*8021763C 0021443C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80217640 00214440*/ PPC::Runtime::ASM::li(context->r26, 0x13);
/*80217644 00214444*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80217648 00214448*/ PPC::Runtime::ASM::li(context->r7, -0x1);
/*8021764C 0021444C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80217650 00214450*/ PPC::Runtime::ASM::li(context->r5, 0x7d00);
/*80217654 00214454*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80217658 00214458*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8021765C 0021445C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80217660 00214460*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80217664 00214464*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80217668 00214468*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8021766C 0021446C*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80217670 00214470*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80217674 00214474*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80217678 00214478*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8021767C 0021447C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80217680 00214480*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80217684 00214484*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80217688 00214488*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r27));
/*8021768C 0021448C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r27));
/*80217690 00214490*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80217694 00214494*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80217698 00214498*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r27));
/*8021769C 0021449C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802176A0 002144A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r27));
/*802176A4 002144A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802176A8 002144A8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802176AC 002144AC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*802176B0 002144B0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802176B4 002144B4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802176B8 002144B8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802176BC 002144BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802176C0 002144C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802176C4 002144C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8c, context->r27));
/*802176C8 002144C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802176CC 002144CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa80, context->r27));
/*802176D0 002144D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa84, context->r27));
/*802176D4 002144D4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802176D8 002144D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802176DC 002144DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa88, context->r27));
/*802176E0 002144E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*802176E4 002144E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r27));
/*802176E8 002144E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x900, context->r27));
/*802176EC 002144EC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802176F0 002144F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802176F4 002144F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x904, context->r27));
/*802176F8 002144F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802176FC 002144FC*/ PPC::Runtime::ASM::bl(fn_801FBB50);
/*80217700 00214500*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80217704 00214504*/ PPC::Runtime::ASM::beq(.L_8021773C);
/*80217708 00214508*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8021770C 0021450C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r27));
/*80217710 00214510*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r27));
/*80217714 00214514*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r4));
/*80217718 00214518*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r4));
/*8021771C 0021451C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r27));
/*80217720 00214520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r4));
/*80217724 00214524*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r27));
/*80217728 00214528*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r27));
/*8021772C 0021452C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r4));
/*80217730 00214530*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r4));
/*80217734 00214534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r27));
/*80217738 00214538*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8021773C, 0x8021773C) //this is a jump label
/*8021773C 0021453C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80217740, 0x80217740) //this is a jump label
/*80217740 00214540*/ PPC::Runtime::ASM::cmpw(context->r28, context->r29);
/*80217744 00214544*/ PPC::Runtime::ASM::blt(.L_8021761C);
RUNTIME_PPC_JUMP_LABEL(.L_80217748, 0x80217748) //this is a jump label
/*80217748 00214548*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8021774C 0021454C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c4, context->r27));
/*80217750 00214550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c0, context->r27));
/*80217754 00214554*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*80217758 00214558*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*8021775C 0021455C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*80217760 00214560*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xa0);
/*80217764 00214564*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*80217768 00214568*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8021776C 0021456C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*80217770 00214570*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80217774 00214574*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*80217778 00214578*/ PPC::Runtime::ASM::blr();
}