//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80079C04.hpp"
#include "fn_80079C04.hpp"
#include "fn_800EF864.hpp"



void fn_800DC640(PPC::Runtime::GCContext* context)
{
/*800DC640 000D9440*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800DC644 000D9444*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DC648 000D9448*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800DC64C 000D944C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800DC650 000D9450*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800DC654 000D9454*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800DC658 000D9458*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800DC65C 000D945C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DC660 000D9460*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800DC664 000D9464*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800DC668 000D9468*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r3));
/*800DC66C 000D946C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800DC670 000D9470*/ PPC::Runtime::ASM::beq(.L_800DC77C);
/*800DC674 000D9474*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*800DC678 000D9478*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800DC67C 000D947C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DC680 000D9480*/ PPC::Runtime::ASM::beq(.L_800DC77C);
/*800DC684 000D9484*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800DC688 000D9488*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800DC68C 000D948C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*800DC690 000D9490*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800DC694 000D9494*/ PPC::Runtime::ASM::bge(.L_800DC6E0);
/*800DC698 000D9498*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800DC69C 000D949C*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*800DC6A0 000D94A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800DC6A4 000D94A4*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DF6A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800DC6A8 000D94A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800DC6AC 000D94AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800DC6B0 000D94B0*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*800DC6B4 000D94B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DC6B8 000D94B8*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*800DC6BC 000D94BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DC6C0 000D94C0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DC6C4 000D94C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DC6C8 000D94C8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*800DC6CC 000D94CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DC6D0 000D94D0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DC6D4 000D94D4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*800DC6D8 000D94D8*/ PPC::Runtime::ASM::fdivs(context->f31, context->f1, context->f0);
/*800DC6DC 000D94DC*/ PPC::Runtime::ASM::b(.L_800DC6E4);
RUNTIME_PPC_JUMP_LABEL(.L_800DC6E0, 0x800DC6E0) //this is a jump label
/*800DC6E0 000D94E0*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF6A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800DC6E4, 0x800DC6E4) //this is a jump label
/*800DC6E4 000D94E4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800DC6E8 000D94E8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*800DC6EC 000D94EC*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x4);
/*800DC6F0 000D94F0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*800DC6F4 000D94F4*/ PPC::Runtime::ASM::bl(fn_80079C04);
/*800DC6F8 000D94F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DC6FC 000D94FC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800DC700 000D9500*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800DC704 000D9504*/ PPC::Runtime::ASM::beq(.L_800DC70C);
/*800DC708 000D9508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800DC70C, 0x800DC70C) //this is a jump label
/*800DC70C 000D950C*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800DC710 000D9510*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DC714 000D9514*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800DC718 000D9518*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800DC71C 000D951C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23c, context->r3));
/*800DC720 000D9520*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800DC724 000D9524*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800DC728 000D9528*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800DC72C 000D952C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f31, context->f0, context->f1);
/*800DC730 000D9530*/ PPC::Runtime::ASM::beq(.L_800DC738);
/*800DC734 000D9534*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800DC738, 0x800DC738) //this is a jump label
/*800DC738 000D9538*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800DC73C 000D953C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800DC740 000D9540*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800DC744 000D9544*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800DC748 000D9548*/ PPC::Runtime::ASM::fmadds(context->f0, context->f31, context->f0, context->f1);
/*800DC74C 000D954C*/ PPC::Runtime::ASM::beq(.L_800DC754);
/*800DC750 000D9550*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800DC754, 0x800DC754) //this is a jump label
/*800DC754 000D9554*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800DC758 000D9558*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14);
/*800DC75C 000D955C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x14);
/*800DC760 000D9560*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x18);
/*800DC764 000D9564*/ PPC::Runtime::ASM::bl(fn_80079C04);
/*800DC768 000D9568*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800DC76C 000D956C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800DC770 000D9570*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x20);
/*800DC774 000D9574*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x18);
/*800DC778 000D9578*/ PPC::Runtime::ASM::bl(fn_800EF864);
RUNTIME_PPC_JUMP_LABEL(.L_800DC77C, 0x800DC77C) //this is a jump label
/*800DC77C 000D957C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800DC780 000D9580*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800DC784 000D9584*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800DC788 000D9588*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800DC78C 000D958C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800DC790 000D9590*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DC794 000D9594*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800DC798 000D9598*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DC79C 000D959C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800DC7A0 000D95A0*/ PPC::Runtime::ASM::blr();
}