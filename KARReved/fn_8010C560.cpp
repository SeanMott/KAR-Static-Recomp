//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8010CC0C.hpp"
#include "fn_80254114.hpp"
#include "fn_80253F0C.hpp"
#include "fn_80252E84.hpp"



void fn_8010C560(PPC::Runtime::GCContext* context)
{
/*8010C560 00109360*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8010C564 00109364*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010C568 00109368*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8010C56C 0010936C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8010C570 00109370*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8010C574 00109374*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8010C578 00109378*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8010C57C 0010937C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010C580 00109380*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010C584 00109384*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8010C588 00109388*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
/*8010C58C 0010938C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010C590 00109390*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8010C594 00109394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010C598 00109398*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*8010C59C 0010939C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8010C5A0 001093A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010C5A4 001093A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 5);
/*8010C5A8 001093A8*/ PPC::Runtime::ASM::add(context->r25, context->r3, context->r0);
/*8010C5AC 001093AC*/ PPC::Runtime::ASM::bne(.L_8010C5C0);
/*8010C5B0 001093B0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6348 @ Get_MemoryOffset_SDA21);
/*8010C5B4 001093B4*/ PPC::Runtime::ASM::li(context->r4, 0xab);
/*8010C5B8 001093B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6350 @ Get_MemoryOffset_SDA21);
/*8010C5BC 001093BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010C5C0, 0x8010C5C0) //this is a jump label
/*8010C5C0 001093C0*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8010C5C4 001093C4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8010C5C8 001093C8*/ PPC::Runtime::ASM::bne(.L_8010C5DC);
/*8010C5CC 001093CC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6348 @ Get_MemoryOffset_SDA21);
/*8010C5D0 001093D0*/ PPC::Runtime::ASM::li(context->r4, 0x95);
/*8010C5D4 001093D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6350 @ Get_MemoryOffset_SDA21);
/*8010C5D8 001093D8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010C5DC, 0x8010C5DC) //this is a jump label
/*8010C5DC 001093DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8010C5E0 001093E0*/ PPC::Runtime::ASM::lis(context->r4, 0x4330);
/*8010C5E4 001093E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*8010C5E8 001093E8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f31);
/*8010C5EC 001093EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r25));
/*8010C5F0 001093F0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8010C5F4 001093F4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8010C5F8 001093F8*/ PPC::Runtime::ASM::xoris(context->r5, context->r3, 0x8000);
/*8010C5FC 001093FC*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805DFAD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010C600 00109400*/ PPC::Runtime::ASM::add(context->r3, context->r25, context->r0);
/*8010C604 00109404*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8010C608 00109408*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8010C60C 0010940C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8010C610 00109410*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8010C614 00109414*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8010C618 00109418*/ PPC::Runtime::ASM::fsubs(context->f2, context->f0, context->f3);
/*8010C61C 0010941C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010C620 00109420*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8010C624 00109424*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8010C628 00109428*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*8010C62C 0010942C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8010C630 00109430*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8010C634 00109434*/ PPC::Runtime::ASM::bne(.L_8010C644);
/*8010C638 00109438*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010C63C 0010943C*/ PPC::Runtime::ASM::bl(fn_8010CC0C);
/*8010C640 00109440*/ PPC::Runtime::ASM::b(.L_8010C81C);
RUNTIME_PPC_JUMP_LABEL(.L_8010C644, 0x8010C644) //this is a jump label
/*8010C644 00109444*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
/*8010C648 00109448*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8010C64C 0010944C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8010C650 00109450*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
/*8010C654 00109454*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010C658 00109458*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*8010C65C 0010945C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8010C660 00109460*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010C664 00109464*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 5);
/*8010C668 00109468*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010C66C 0010946C*/ PPC::Runtime::ASM::add(context->r25, context->r3, context->r0);
/*8010C670 00109470*/ PPC::Runtime::ASM::bne(.L_8010C81C);
/*8010C674 00109474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
/*8010C678 00109478*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8010C67C 0010947C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8010C680 00109480*/ PPC::Runtime::ASM::bne(.L_8010C694);
/*8010C684 00109484*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6348 @ Get_MemoryOffset_SDA21);
/*8010C688 00109488*/ PPC::Runtime::ASM::li(context->r4, 0xab);
/*8010C68C 0010948C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6350 @ Get_MemoryOffset_SDA21);
/*8010C690 00109490*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010C694, 0x8010C694) //this is a jump label
/*8010C694 00109494*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8010C698 00109498*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8010C69C 0010949C*/ PPC::Runtime::ASM::bne(.L_8010C6B0);
/*8010C6A0 001094A0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6348 @ Get_MemoryOffset_SDA21);
/*8010C6A4 001094A4*/ PPC::Runtime::ASM::li(context->r4, 0x95);
/*8010C6A8 001094A8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6350 @ Get_MemoryOffset_SDA21);
/*8010C6AC 001094AC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010C6B0, 0x8010C6B0) //this is a jump label
/*8010C6B0 001094B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8010C6B4 001094B4*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8010C6B8 001094B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r25));
/*8010C6BC 001094BC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f31);
/*8010C6C0 001094C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r25));
/*8010C6C4 001094C4*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8010C6C8 001094C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8010C6CC 001094CC*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8010C6D0 001094D0*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805DFAD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010C6D4 001094D4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010C6D8 001094D8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8010C6DC 001094DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8010C6E0 001094E0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f0, context->f3);
/*8010C6E4 001094E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8010C6E8 001094E8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8010C6EC 001094EC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8010C6F0 001094F0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*8010C6F4 001094F4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8010C6F8 001094F8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8010C6FC 001094FC*/ PPC::Runtime::ASM::bne(.L_8010C81C);
/*8010C700 00109500*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8010C704 00109504*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*8010C708 00109508*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010C70C 0010950C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8010C710 00109510*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 5);
/*8010C714 00109514*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8010C718 00109518*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8010C71C 0010951C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*8010C720 00109520*/ PPC::Runtime::ASM::lwzx(context->r29, context->r3, context->r0);
/*8010C724 00109524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8010C728 00109528*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8010C72C 0010952C*/ PPC::Runtime::ASM::add(context->r27, context->r0, context->r4);
/*8010C730 00109530*/ PPC::Runtime::ASM::bne(.L_8010C744);
/*8010C734 00109534*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6338 @ Get_MemoryOffset_SDA21);
/*8010C738 00109538*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*8010C73C 0010953C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6340 @ Get_MemoryOffset_SDA21);
/*8010C740 00109540*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010C744, 0x8010C744) //this is a jump label
/*8010C744 00109544*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8010C748 00109548*/ PPC::Runtime::ASM::beq(.L_8010C78C);
/*8010C74C 0010954C*/ PPC::Runtime::ASM::bne(.L_8010C760);
/*8010C750 00109550*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6338 @ Get_MemoryOffset_SDA21);
/*8010C754 00109554*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8010C758 00109558*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6340 @ Get_MemoryOffset_SDA21);
/*8010C75C 0010955C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010C760, 0x8010C760) //this is a jump label
/*8010C760 00109560*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8010C764 00109564*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8010C768 00109568*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8010C76C 0010956C*/ PPC::Runtime::ASM::bne(.L_8010C77C);
/*8010C770 00109570*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8010C774 00109574*/ PPC::Runtime::ASM::beq(.L_8010C77C);
/*8010C778 00109578*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010C77C, 0x8010C77C) //this is a jump label
/*8010C77C 0010957C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8010C780 00109580*/ PPC::Runtime::ASM::beq(.L_8010C78C);
/*8010C784 00109584*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010C788 00109588*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_8010C78C, 0x8010C78C) //this is a jump label
/*8010C78C 0010958C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8010C790 00109590*/ PPC::Runtime::ASM::addi(context->r26, context->r29, 0x44);
/*8010C794 00109594*/ PPC::Runtime::ASM::mr(context->r25, context->r28);
/*8010C798 00109598*/ PPC::Runtime::ASM::b(.L_8010C804);
RUNTIME_PPC_JUMP_LABEL(.L_8010C79C, 0x8010C79C) //this is a jump label
/*8010C79C 0010959C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8010C7A0 001095A0*/ PPC::Runtime::ASM::bne(.L_8010C7AC);
/*8010C7A4 001095A4*/ PPC::Runtime::ASM::li(context->r29, 0x14);
/*8010C7A8 001095A8*/ PPC::Runtime::ASM::b(.L_8010C7B8);
RUNTIME_PPC_JUMP_LABEL(.L_8010C7AC, 0x8010C7AC) //this is a jump label
/*8010C7AC 001095AC*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*8010C7B0 001095B0*/ PPC::Runtime::ASM::bl(fn_80254114);
/*8010C7B4 001095B4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8010C7B8, 0x8010C7B8) //this is a jump label
/*8010C7B8 001095B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r31));
/*8010C7BC 001095BC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8010C7C0 001095C0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8010C7C4 001095C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010C7C8 001095C8*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r25);
/*8010C7CC 001095CC*/ PPC::Runtime::ASM::bl(fn_PSMTXMultVec);
/*8010C7D0 001095D0*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*8010C7D4 001095D4*/ PPC::Runtime::ASM::beq(.L_8010C7FC);
/*8010C7D8 001095D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010C7DC 001095DC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8010C7E0 001095E0*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8010C7E4 001095E4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010C7E8 001095E8*/ PPC::Runtime::ASM::bl(fn_80253F0C);
/*8010C7EC 001095EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8010C7F0 001095F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8010C7F4 001095F4*/ PPC::Runtime::ASM::subf(context->r4, context->r4, context->r0);
/*8010C7F8 001095F8*/ PPC::Runtime::ASM::bl(fn_80252E84);
RUNTIME_PPC_JUMP_LABEL(.L_8010C7FC, 0x8010C7FC) //this is a jump label
/*8010C7FC 001095FC*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0xc);
/*8010C800 00109600*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010C804, 0x8010C804) //this is a jump label
/*8010C804 00109604*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r31));
/*8010C808 00109608*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8010C80C 0010960C*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*8010C810 00109610*/ PPC::Runtime::ASM::blt(.L_8010C79C);
/*8010C814 00109614*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8010C818 00109618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8010C81C, 0x8010C81C) //this is a jump label
/*8010C81C 0010961C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8010C820 00109620*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8010C824 00109624*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8010C828 00109628*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8010C82C 0010962C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8010C830 00109630*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010C834 00109634*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*8010C838 00109638*/ PPC::Runtime::ASM::blr();
}