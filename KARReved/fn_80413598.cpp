//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_804128DC.hpp"
#include "fn_80413090.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80413598(PPC::Runtime::GCContext* context)
{
/*80413598 00410398*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*8041359C 0041039C*/ PPC::Runtime::ASM::mflr(context->r0);
/*804135A0 004103A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*804135A4 004103A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*804135A8 004103A8*/ PPC::Runtime::ASM::bl(_savegpr_20);
/*804135AC 004103AC*/ PPC::Runtime::ASM::lis(context->r7, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*804135B0 004103B0*/ PPC::Runtime::ASM::mr(context->r20, context->r3);
/*804135B4 004103B4*/ PPC::Runtime::ASM::mr(context->r24, context->r4);
/*804135B8 004103B8*/ PPC::Runtime::ASM::mr(context->r21, context->r5);
/*804135BC 004103BC*/ PPC::Runtime::ASM::mr(context->r22, context->r6);
/*804135C0 004103C0*/ PPC::Runtime::ASM::addi(context->r29, context->r7, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*804135C4 004103C4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804135C8 004103C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r24));
/*804135CC 004103CC*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
/*804135D0 004103D0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804135D4 004103D4*/ PPC::Runtime::ASM::beq(.L_80413A4C);
/*804135D8 004103D8*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r24));
/*804135DC 004103DC*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*804135E0 004103E0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*804135E4 004103E4*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*804135E8 004103E8*/ PPC::Runtime::ASM::addi(context->r6, context->r7, 0x1);
/*804135EC 004103EC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_114 @ Get_MemoryOffset_HighBit);
/*804135F0 004103F0*/ PPC::Runtime::ASM::divw(context->r0, context->r6, context->r5);
/*804135F4 004103F4*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*804135F8 004103F8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, MemoryOffset_114 @ Get_MemoryOffset_LowBit);
/*804135FC 004103FC*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r5);
/*80413600 00410400*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r6);
/*80413604 00410404*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r24));
/*80413608 00410408*/ PPC::Runtime::ASM::mullw(context->r4, context->r7, context->r20);
/*8041360C 0041040C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r24));
/*80413610 00410410*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80413614 00410414*/ PPC::Runtime::ASM::mulli(context->r3, context->r4, 0x34);
/*80413618 00410418*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r24));
/*8041361C 0041041C*/ PPC::Runtime::ASM::add(context->r21, context->r21, context->r3);
/*80413620 00410420*/ PPC::Runtime::ASM::b(.L_80413A44);
RUNTIME_PPC_JUMP_LABEL(.L_80413624, 0x80413624) //this is a jump label
/*80413624 00410424*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r21));
/*80413628 00410428*/ PPC::Runtime::ASM::mr(context->r27, context->r21);
/*8041362C 0041042C*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*80413630 00410430*/ PPC::Runtime::ASM::li(context->r24, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80413634, 0x80413634) //this is a jump label
/*80413634 00410434*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*80413638 00410438*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8041363C 0041043C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80413640 00410440*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r22));
/*80413644 00410444*/ PPC::Runtime::ASM::and(context->r4, context->r26, context->r3);
/*80413648 00410448*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r27));
/*8041364C 0041044C*/ PPC::Runtime::ASM::neg(context->r3, context->r4);
/*80413650 00410450*/ PPC::Runtime::ASM::or(context->r3, context->r3, context->r4);
/*80413654 00410454*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r22));
/*80413658 00410458*/ PPC::Runtime::ASM::srwi(context->r3, context->r3, 31);
/*8041365C 0041045C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x41, context->r22));
/*80413660 00410460*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r22));
/*80413664 00410464*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r22));
/*80413668 00410468*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8041366C 0041046C*/ PPC::Runtime::ASM::bne(.L_80413948);
/*80413670 00410470*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80413674 00410474*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80413678 00410478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8041367C 0041047C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*80413680 00410480*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r22));
/*80413684 00410484*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r27));
/*80413688 00410488*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r22));
/*8041368C 0041048C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80413690 00410490*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r22));
/*80413694 00410494*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r27));
/*80413698 00410498*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r22));
/*8041369C 0041049C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r27));
/*804136A0 004104A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r22));
/*804136A4 004104A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r27));
/*804136A8 004104A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r22));
/*804136AC 004104AC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*804136B0 004104B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r22));
/*804136B4 004104B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r27));
/*804136B8 004104B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r22));
/*804136BC 004104BC*/ PPC::Runtime::ASM::bl(fn_804128DC);
/*804136C0 004104C0*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*804136C4 004104C4*/ PPC::Runtime::ASM::bl(fn_80413090);
/*804136C8 004104C8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r22));
/*804136CC 004104CC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*804136D0 004104D0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r30));
/*804136D4 004104D4*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*804136D8 004104D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804136DC 004104DC*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*804136E0 004104E0*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5BB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804136E4 004104E4*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*804136E8 004104E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804136EC 004104EC*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*804136F0 004104F0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5B88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804136F4 004104F4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804136F8 004104F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804136FC 004104FC*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80413700 00410500*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80413704 00410504*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*80413708 00410508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041370C 0041050C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80413710 00410510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80413714 00410514*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80413718 00410518*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8041371C 0041051C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80413720 00410520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80413724 00410524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80413728 00410528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8041372C 0041052C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r22));
/*80413730 00410530*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r22));
/*80413734 00410534*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r30));
/*80413738 00410538*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8041373C 0041053C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80413740 00410540*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80413744 00410544*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*80413748 00410548*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8041374C 0041054C*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80413750 00410550*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80413754 00410554*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80413758 00410558*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041375C 0041055C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80413760 00410560*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*80413764 00410564*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80413768 00410568*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*8041376C 0041056C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80413770 00410570*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r22));
/*80413774 00410574*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r22));
/*80413778 00410578*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r30));
/*8041377C 0041057C*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80413780 00410580*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80413784 00410584*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*80413788 00410588*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*8041378C 0041058C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80413790 00410590*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80413794 00410594*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80413798 00410598*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8041379C 0041059C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*804137A0 004105A0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*804137A4 004105A4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*804137A8 004105A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r22));
/*804137AC 004105AC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r22));
/*804137B0 004105B0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r30));
/*804137B4 004105B4*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*804137B8 004105B8*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*804137BC 004105BC*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*804137C0 004105C0*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*804137C4 004105C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*804137C8 004105C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*804137CC 004105CC*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*804137D0 004105D0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*804137D4 004105D4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*804137D8 004105D8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*804137DC 004105DC*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*804137E0 004105E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r22));
/*804137E4 004105E4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r22));
/*804137E8 004105E8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r30));
/*804137EC 004105EC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*804137F0 004105F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*804137F4 004105F4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*804137F8 004105F8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*804137FC 004105FC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80413800 00410600*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*80413804 00410604*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80413808 00410608*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r22));
/*8041380C 0041060C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r22));
/*80413810 00410610*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r30));
/*80413814 00410614*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80413818 00410618*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8041381C 0041061C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80413820 00410620*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80413824 00410624*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80413828 00410628*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8041382C 0041062C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80413830 00410630*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r22));
/*80413834 00410634*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r22));
/*80413838 00410638*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8041383C 0041063C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80413840 00410640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80413844 00410644*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80413848 00410648*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8041384C 0041064C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*80413850 00410650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80413854 00410654*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80413858 00410658*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8041385C 0041065C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*80413860 00410660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80413864 00410664*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80413868 00410668*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r22));
/*8041386C 0041066C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r22));
/*80413870 00410670*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*80413874 00410674*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80413878 00410678*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8041387C 0041067C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80413880 00410680*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80413884 00410684*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80413888 00410688*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8041388C 0041068C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80413890 00410690*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r22));
/*80413894 00410694*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59, context->r30));
/*80413898 00410698*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8041389C 0041069C*/ PPC::Runtime::ASM::beq(.L_804138D8);
/*804138A0 004106A0*/ PPC::Runtime::ASM::bge(.L_804138B4);
/*804138A4 004106A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804138A8 004106A8*/ PPC::Runtime::ASM::beq(.L_804139AC);
/*804138AC 004106AC*/ PPC::Runtime::ASM::bge(.L_804138C0);
/*804138B0 004106B0*/ PPC::Runtime::ASM::b(.L_804139AC);
RUNTIME_PPC_JUMP_LABEL(.L_804138B4, 0x804138B4) //this is a jump label
/*804138B4 004106B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*804138B8 004106B8*/ PPC::Runtime::ASM::bge(.L_804139AC);
/*804138BC 004106BC*/ PPC::Runtime::ASM::b(.L_804138F0);
RUNTIME_PPC_JUMP_LABEL(.L_804138C0, 0x804138C0) //this is a jump label
/*804138C0 004106C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*804138C4 004106C4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 14, 15);
/*804138C8 004106C8*/ PPC::Runtime::ASM::beq(.L_804139AC);
/*804138CC 004106CC*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r3, 0, 14, 11);
/*804138D0 004106D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*804138D4 004106D4*/ PPC::Runtime::ASM::b(.L_804139AC);
RUNTIME_PPC_JUMP_LABEL(.L_804138D8, 0x804138D8) //this is a jump label
/*804138D8 004106D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*804138DC 004106DC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 12, 13);
/*804138E0 004106E0*/ PPC::Runtime::ASM::beq(.L_804139AC);
/*804138E4 004106E4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r3, 0, 16, 13);
/*804138E8 004106E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*804138EC 004106EC*/ PPC::Runtime::ASM::b(.L_804139AC);
RUNTIME_PPC_JUMP_LABEL(.L_804138F0, 0x804138F0) //this is a jump label
/*804138F0 004106F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*804138F4 004106F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 14, 15);
/*804138F8 004106F8*/ PPC::Runtime::ASM::beq(.L_80413934);
/*804138FC 004106FC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 12, 13);
/*80413900 00410700*/ PPC::Runtime::ASM::beq(.L_80413928);
/*80413904 00410704*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r22));
/*80413908 00410708*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8041390C 0041070C*/ PPC::Runtime::ASM::bne(.L_8041391C);
/*80413910 00410710*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r3, 0, 14, 11);
/*80413914 00410714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*80413918 00410718*/ PPC::Runtime::ASM::b(.L_804139AC);
RUNTIME_PPC_JUMP_LABEL(.L_8041391C, 0x8041391C) //this is a jump label
/*8041391C 0041071C*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r3, 0, 16, 13);
/*80413920 00410720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*80413924 00410724*/ PPC::Runtime::ASM::b(.L_804139AC);
RUNTIME_PPC_JUMP_LABEL(.L_80413928, 0x80413928) //this is a jump label
/*80413928 00410728*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8041392C 0041072C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r22));
/*80413930 00410730*/ PPC::Runtime::ASM::b(.L_804139AC);
RUNTIME_PPC_JUMP_LABEL(.L_80413934, 0x80413934) //this is a jump label
/*80413934 00410734*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 12, 13);
/*80413938 00410738*/ PPC::Runtime::ASM::beq(.L_804139AC);
/*8041393C 0041073C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80413940 00410740*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r22));
/*80413944 00410744*/ PPC::Runtime::ASM::b(.L_804139AC);
RUNTIME_PPC_JUMP_LABEL(.L_80413948, 0x80413948) //this is a jump label
/*80413948 00410748*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8041394C 0041074C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x3);
/*80413950 00410750*/ PPC::Runtime::ASM::bne(.L_80413960);
/*80413954 00410754*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80413958 00410758*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r22));
/*8041395C 0041075C*/ PPC::Runtime::ASM::b(.L_804139AC);
RUNTIME_PPC_JUMP_LABEL(.L_80413960, 0x80413960) //this is a jump label
/*80413960 00410760*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80413964 00410764*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5B90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80413968 00410768*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8041396C 0041076C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r22));
/*80413970 00410770*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r22));
/*80413974 00410774*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r22));
/*80413978 00410778*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r22));
/*8041397C 0041077C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r22));
/*80413980 00410780*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r22));
/*80413984 00410784*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r22));
/*80413988 00410788*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r22));
/*8041398C 0041078C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r22));
/*80413990 00410790*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r22));
/*80413994 00410794*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r22));
/*80413998 00410798*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r22));
/*8041399C 0041079C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r22));
/*804139A0 004107A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r22));
/*804139A4 004107A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r22));
/*804139A8 004107A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_804139AC, 0x804139AC) //this is a jump label
/*804139AC 004107AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*804139B0 004107B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r22));
/*804139B4 004107B4*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r3);
/*804139B8 004107B8*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r0);
/*804139BC 004107BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r22));
/*804139C0 004107C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r22));
/*804139C4 004107C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*804139C8 004107C8*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r0);
/*804139CC 004107CC*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r0);
/*804139D0 004107D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r22));
/*804139D4 004107D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r22));
/*804139D8 004107D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*804139DC 004107DC*/ PPC::Runtime::ASM::xor.(context->r0, context->r3, context->r0);
/*804139E0 004107E0*/ PPC::Runtime::ASM::beq(.L_804139F8);
/*804139E4 004107E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r22));
/*804139E8 004107E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r22));
/*804139EC 004107EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*804139F0 004107F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*804139F4 004107F4*/ PPC::Runtime::ASM::b(.L_80413A24);
RUNTIME_PPC_JUMP_LABEL(.L_804139F8, 0x804139F8) //this is a jump label
/*804139F8 004107F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/* 804139FC 004107FC  34 03 FF FF */ subic. context->r0 , context->r3 , 0x1
/*80413A00 00410800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*80413A04 00410804*/ PPC::Runtime::ASM::beq(.L_80413A14);
/*80413A08 00410808*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80413A0C 0041080C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r22));
/*80413A10 00410810*/ PPC::Runtime::ASM::b(.L_80413A24);
RUNTIME_PPC_JUMP_LABEL(.L_80413A14, 0x80413A14) //this is a jump label
/*80413A14 00410814*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*80413A18 00410818*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r22));
/*80413A1C 0041081C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80413A20 00410820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_80413A24, 0x80413A24) //this is a jump label
/*80413A24 00410824*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*80413A28 00410828*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x44);
/*80413A2C 0041082C*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x4);
/*80413A30 00410830*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0xc);
/*80413A34 00410834*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*80413A38 00410838*/ PPC::Runtime::ASM::blt(.L_80413634);
/*80413A3C 0041083C*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*80413A40 00410840*/ PPC::Runtime::ASM::addi(context->r21, context->r21, 0x34);
RUNTIME_PPC_JUMP_LABEL(.L_80413A44, 0x80413A44) //this is a jump label
/*80413A44 00410844*/ PPC::Runtime::ASM::cmpw(context->r25, context->r20);
/*80413A48 00410848*/ PPC::Runtime::ASM::blt(.L_80413624);
RUNTIME_PPC_JUMP_LABEL(.L_80413A4C, 0x80413A4C) //this is a jump label
/*80413A4C 0041084C*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*80413A50 00410850*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80413A54 00410854*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*80413A58 00410858*/ PPC::Runtime::ASM::bl(_restgpr_20);
/*80413A5C 0041085C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*80413A60 00410860*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80413A64 00410864*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*80413A68 00410868*/ PPC::Runtime::ASM::blr();
}