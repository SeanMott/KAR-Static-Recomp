//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8037E5DC(PPC::Runtime::GCContext* context)
{
/*8037E5DC 0037B3DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*8037E5E0 0037B3E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037E5E4 0037B3E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8037E5E8 0037B3E8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8037E5EC 0037B3EC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8037E5F0 0037B3F0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8037E5F4 0037B3F4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8037E5F8 0037B3F8*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037E5FC 0037B3FC*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8037E600 0037B400*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8037E604 0037B404*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8037E608 0037B408*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8037E60C 0037B40C*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8037E610 0037B410*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037E614 0037B414*/ PPC::Runtime::ASM::psq_st(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8037E618 0037B418*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8037E61C 0037B41C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037E620 0037B420*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037E624 0037B424*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8037E628 0037B428*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/*8037E62C 0037B42C*/ PPC::Runtime::ASM::neg(context->r0, context->r31);
/*8037E630 0037B430*/ PPC::Runtime::ASM::lis(context->r4, 0x4330);
/*8037E634 0037B434*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8037E638 0037B438*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805E4C54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037E63C 0037B43C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037E640 0037B440*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037E644 0037B444*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4C58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037E648 0037B448*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037E64C 0037B44C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037E650 0037B450*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037E654 0037B454*/ PPC::Runtime::ASM::fsubs(context->f26, context->f0, context->f1);
/*8037E658 0037B458*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r31)1, context->qr3);
/*8037E65C 0037B45C*/ PPC::Runtime::ASM::xoris(context->r0, context->r30, 0x8000);
/*8037E660 0037B460*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037E664 0037B464*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037E668 0037B468*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037E66C 0037B46C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8037E670 0037B470*/ PPC::Runtime::ASM::fsubs(context->f27, context->f0, context->f2);
/*8037E674 0037B474*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31)1, context->qr3);
/*8037E678 0037B478*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r31)1, context->qr3);
/*8037E67C 0037B47C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31)1, context->qr3);
/*8037E680 0037B480*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r31)1, context->qr3);
/*8037E684 0037B484*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*8037E688 0037B488*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E68C 0037B48C*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8037E690 0037B490*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037E694 0037B494*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8037E698 0037B498*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037E69C 0037B49C*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*8037E6A0 0037B4A0*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*8037E6A4 0037B4A4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037E6A8 0037B4A8*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*8037E6AC 0037B4AC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E6B0 0037B4B0*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8037E6B4 0037B4B4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8037E6B8 0037B4B8*/ PPC::Runtime::ASM::li(context->r6, 0x5);
/*8037E6BC 0037B4BC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037E6C0 0037B4C0*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*8037E6C4 0037B4C4*/ PPC::Runtime::ASM::li(context->r3, 0xb);
/*8037E6C8 0037B4C8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037E6CC 0037B4CC*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*8037E6D0 0037B4D0*/ PPC::Runtime::ASM::bl(fn_GXInvalidateVtxCache);
/*8037E6D4 0037B4D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E6D8 0037B4D8*/ PPC::Runtime::ASM::bl(fn_GXSetCurrentMtx);
/*8037E6DC 0037B4DC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*8037E6E0 0037B4E0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037E6E4 0037B4E4*/ PPC::Runtime::ASM::bl(fn_GXLoadPosMtxImm);
/*8037E6E8 0037B4E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E6EC 0037B4EC*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*8037E6F0 0037B4F0*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8037E6F4 0037B4F4*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8037E6F8 0037B4F8*/ PPC::Runtime::ASM::bl(fn_GXSetTevOrder);
/*8037E6FC 0037B4FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E700 0037B500*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8037E704 0037B504*/ PPC::Runtime::ASM::li(context->r5, 0xf);
/*8037E708 0037B508*/ PPC::Runtime::ASM::li(context->r6, 0xc);
/*8037E70C 0037B50C*/ PPC::Runtime::ASM::li(context->r7, 0xa);
/*8037E710 0037B510*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorIn);
/*8037E714 0037B514*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E718 0037B518*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037E71C 0037B51C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037E720 0037B520*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037E724 0037B524*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8037E728 0037B528*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037E72C 0037B52C*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorOp);
/*8037E730 0037B530*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E734 0037B534*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8037E738 0037B538*/ PPC::Runtime::ASM::li(context->r5, 0x7);
/*8037E73C 0037B53C*/ PPC::Runtime::ASM::li(context->r6, 0x6);
/*8037E740 0037B540*/ PPC::Runtime::ASM::li(context->r7, 0x5);
/*8037E744 0037B544*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaIn);
/*8037E748 0037B548*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E74C 0037B54C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037E750 0037B550*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037E754 0037B554*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037E758 0037B558*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8037E75C 0037B55C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037E760 0037B560*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaOp);
/*8037E764 0037B564*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8037E768 0037B568*/ PPC::Runtime::ASM::bl(fn_GXSetNumChans);
/*8037E76C 0037B56C*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8037E770 0037B570*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037E774 0037B574*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8037E778 0037B578*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8037E77C 0037B57C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037E780 0037B580*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037E784 0037B584*/ PPC::Runtime::ASM::li(context->r9, 0x2);
/*8037E788 0037B588*/ PPC::Runtime::ASM::bl(fn_GXSetChanCtrl);
/*8037E78C 0037B58C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E790 0037B590*/ PPC::Runtime::ASM::bl(fn_GXSetNumTexGens);
/*8037E794 0037B594*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8037E798 0037B598*/ PPC::Runtime::ASM::bl(fn_GXSetNumTevStages);
/*8037E79C 0037B59C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8037E7A0 0037B5A0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8037E7A4 0037B5A4*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8037E7A8 0037B5A8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037E7AC 0037B5AC*/ PPC::Runtime::ASM::bl(fn_GXSetBlendMode);
/*8037E7B0 0037B5B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037E7B4 0037B5B4*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8037E7B8 0037B5B8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037E7BC 0037B5BC*/ PPC::Runtime::ASM::bl(fn_GXSetZMode);
/*8037E7C0 0037B5C0*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*8037E7C4 0037B5C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037E7C8 0037B5C8*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*8037E7CC 0037B5CC*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8037E7D0 0037B5D0*/ PPC::Runtime::ASM::lis(context->r6, 0xcc01);
/*8037E7D4 0037B5D4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037E7D8 0037B5D8*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E7DC 0037B5DC*/ PPC::Runtime::ASM::fneg(context->f0, context->f28);
/*8037E7E0 0037B5E0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*8037E7E4 0037B5E4*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E7E8 0037B5E8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8037E7EC 0037B5EC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E7F0 0037B5F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*8037E7F4 0037B5F4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E7F8 0037B5F8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E7FC 0037B5FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E800 0037B600*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E804 0037B604*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E808 0037B608*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E80C 0037B60C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E810 0037B610*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E814 0037B614*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E818 0037B618*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E81C 0037B61C*/ PPC::Runtime::ASM::stfs(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E820 0037B620*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E824 0037B624*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E828 0037B628*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E82C 0037B62C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E830 0037B630*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E834 0037B634*/ PPC::Runtime::ASM::stfs(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E838 0037B638*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E83C 0037B63C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E840 0037B640*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E844 0037B644*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E848 0037B648*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E84C 0037B64C*/ PPC::Runtime::ASM::stfs(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E850 0037B650*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E854 0037B654*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E858 0037B658*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E85C 0037B65C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E860 0037B660*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E864 0037B664*/ PPC::Runtime::ASM::stfs(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E868 0037B668*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E86C 0037B66C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E870 0037B670*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E874 0037B674*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E878 0037B678*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E87C 0037B67C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E880 0037B680*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E884 0037B684*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E888 0037B688*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E88C 0037B68C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E890 0037B690*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E894 0037B694*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E898 0037B698*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E89C 0037B69C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E8A0 0037B6A0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E8A4 0037B6A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8037E8A8 0037B6A8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8037E8AC 0037B6AC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8037E8B0 0037B6B0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8037E8B4 0037B6B4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8037E8B8 0037B6B8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8037E8BC 0037B6BC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037E8C0 0037B6C0*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8037E8C4 0037B6C4*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8037E8C8 0037B6C8*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8037E8CC 0037B6CC*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8037E8D0 0037B6D0*/ PPC::Runtime::ASM::psq_l(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8037E8D4 0037B6D4*/ PPC::Runtime::ASM::lfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037E8D8 0037B6D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8037E8DC 0037B6DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8037E8E0 0037B6E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037E8E4 0037B6E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037E8E8 0037B6E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*8037E8EC 0037B6EC*/ PPC::Runtime::ASM::blr();
}