//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"



void fn_800F75B4(PPC::Runtime::GCContext* context)
{
/*800F75B4 000F43B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*800F75B8 000F43B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F75BC 000F43BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800F75C0 000F43C0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800F75C4 000F43C4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800F75C8 000F43C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800F75CC 000F43CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800F75D0 000F43D0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800F75D4 000F43D4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800F75D8 000F43D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800F75DC 000F43DC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F75E0 000F43E0*/ PPC::Runtime::ASM::beq(.L_800F77B8);
/*800F75E4 000F43E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*800F75E8 000F43E8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800F75EC 000F43EC*/ PPC::Runtime::ASM::beq(.L_800F77B8);
/*800F75F0 000F43F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*800F75F4 000F43F4*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*800F75F8 000F43F8*/ PPC::Runtime::ASM::lwzx(context->r31, context->r3, context->r0);
/*800F75FC 000F43FC*/ PPC::Runtime::ASM::bne(.L_800F7610);
/*800F7600 000F4400*/ PPC::Runtime::ASM::li(context->r3, lbl_805D61D8 @ Get_MemoryOffset_SDA21);
/*800F7604 000F4404*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*800F7608 000F4408*/ PPC::Runtime::ASM::li(context->r5, lbl_805D61E0 @ Get_MemoryOffset_SDA21);
/*800F760C 000F440C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F7610, 0x800F7610) //this is a jump label
/*800F7610 000F4410*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800F7614 000F4414*/ PPC::Runtime::ASM::beq(.L_800F7658);
/*800F7618 000F4418*/ PPC::Runtime::ASM::bne(.L_800F762C);
/*800F761C 000F441C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D61D8 @ Get_MemoryOffset_SDA21);
/*800F7620 000F4420*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800F7624 000F4424*/ PPC::Runtime::ASM::li(context->r5, lbl_805D61E0 @ Get_MemoryOffset_SDA21);
/*800F7628 000F4428*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F762C, 0x800F762C) //this is a jump label
/*800F762C 000F442C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800F7630 000F4430*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800F7634 000F4434*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800F7638 000F4438*/ PPC::Runtime::ASM::bne(.L_800F7648);
/*800F763C 000F443C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800F7640 000F4440*/ PPC::Runtime::ASM::beq(.L_800F7648);
/*800F7644 000F4444*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800F7648, 0x800F7648) //this is a jump label
/*800F7648 000F4448*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800F764C 000F444C*/ PPC::Runtime::ASM::beq(.L_800F7658);
/*800F7650 000F4450*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800F7654 000F4454*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_800F7658, 0x800F7658) //this is a jump label
/*800F7658 000F4458*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x44);
/*800F765C 000F445C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*800F7660 000F4460*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*800F7664 000F4464*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F7668 000F4468*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x20);
/*800F766C 000F446C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800F7670, 0x800F7670) //this is a jump label
/*800F7670 000F4470*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800F7674 000F4474*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800F7678 000F4478*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F767C 000F447C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*800F7680 000F4480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F7684 000F4484*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F7688 000F4488*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F768C 000F448C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F7690 000F4490*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F7694 000F4494*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F7698 000F4498*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F769C 000F449C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*800F76A0 000F44A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F76A4 000F44A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800F76A8 000F44A8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800F76AC 000F44AC*/ PPC::Runtime::ASM::beq(.L_800F76F8);
/*800F76B0 000F44B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F76B4 000F44B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800F76B8 000F44B8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800F76BC 000F44BC*/ PPC::Runtime::ASM::beq(.L_800F76F8);
/*800F76C0 000F44C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F76C4 000F44C4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*800F76C8 000F44C8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800F76CC 000F44CC*/ PPC::Runtime::ASM::beq(.L_800F76F8);
/*800F76D0 000F44D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800F76D4 000F44D4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800F76D8 000F44D8*/ PPC::Runtime::ASM::beq(.L_800F76F8);
/*800F76DC 000F44DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800F76E0 000F44E0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*800F76E4 000F44E4*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800F76E8 000F44E8*/ PPC::Runtime::ASM::beq(.L_800F76F8);
/*800F76EC 000F44EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800F76F0 000F44F0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800F76F4 000F44F4*/ PPC::Runtime::ASM::bne(.L_800F7700);
RUNTIME_PPC_JUMP_LABEL(.L_800F76F8, 0x800F76F8) //this is a jump label
/*800F76F8 000F44F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800F76FC 000F44FC*/ PPC::Runtime::ASM::b(.L_800F7704);
RUNTIME_PPC_JUMP_LABEL(.L_800F7700, 0x800F7700) //this is a jump label
/*800F7700 000F4500*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800F7704, 0x800F7704) //this is a jump label
/*800F7704 000F4504*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800F7708 000F4508*/ PPC::Runtime::ASM::bne(.L_800F7718);
/*800F770C 000F450C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*800F7710 000F4510*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800F7714 000F4514*/ PPC::Runtime::ASM::bl(fn_80062CA4);
RUNTIME_PPC_JUMP_LABEL(.L_800F7718, 0x800F7718) //this is a jump label
/*800F7718 000F4518*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F771C 000F451C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*800F7720 000F4520*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F7724 000F4524*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x3);
/*800F7728 000F4528*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800F772C 000F452C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F7730 000F4530*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800F7734 000F4534*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*800F7738 000F4538*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*800F773C 000F453C*/ PPC::Runtime::ASM::blt(.L_800F7670);
/*800F7740 000F4540*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800F7744 000F4544*/ PPC::Runtime::ASM::bne(.L_800F7758);
/*800F7748 000F4548*/ PPC::Runtime::ASM::li(context->r3, lbl_805D61D8 @ Get_MemoryOffset_SDA21);
/*800F774C 000F454C*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*800F7750 000F4550*/ PPC::Runtime::ASM::li(context->r5, lbl_805D61E0 @ Get_MemoryOffset_SDA21);
/*800F7754 000F4554*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F7758, 0x800F7758) //this is a jump label
/*800F7758 000F4558*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800F775C 000F455C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x44);
/*800F7760 000F4560*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*800F7764 000F4564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800F7768 000F4568*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800F776C 000F456C*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*800F7770 000F4570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800F7774 000F4574*/ PPC::Runtime::ASM::beq(.L_800F77B8);
/*800F7778 000F4578*/ PPC::Runtime::ASM::bne(.L_800F778C);
/*800F777C 000F457C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D61D8 @ Get_MemoryOffset_SDA21);
/*800F7780 000F4580*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800F7784 000F4584*/ PPC::Runtime::ASM::li(context->r5, lbl_805D61E0 @ Get_MemoryOffset_SDA21);
/*800F7788 000F4588*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F778C, 0x800F778C) //this is a jump label
/*800F778C 000F458C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800F7790 000F4590*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800F7794 000F4594*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800F7798 000F4598*/ PPC::Runtime::ASM::bne(.L_800F77A8);
/*800F779C 000F459C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800F77A0 000F45A0*/ PPC::Runtime::ASM::beq(.L_800F77A8);
/*800F77A4 000F45A4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800F77A8, 0x800F77A8) //this is a jump label
/*800F77A8 000F45A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800F77AC 000F45AC*/ PPC::Runtime::ASM::bne(.L_800F77B8);
/*800F77B0 000F45B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F77B4 000F45B4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_800F77B8, 0x800F77B8) //this is a jump label
/*800F77B8 000F45B8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800F77BC 000F45BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800F77C0 000F45C0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800F77C4 000F45C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800F77C8 000F45C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800F77CC 000F45CC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800F77D0 000F45D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F77D4 000F45D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*800F77D8 000F45D8*/ PPC::Runtime::ASM::blr();
}