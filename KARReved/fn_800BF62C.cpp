//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B7E90.hpp"
#include "fn_800CEFB4.hpp"
#include "fn_800B7E90.hpp"
#include "fn_80062ECC.hpp"



void fn_800BF62C(PPC::Runtime::GCContext* context)
{
/*800BF62C 000BC42C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*800BF630 000BC430*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BF634 000BC434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800BF638 000BC438*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800BF63C 000BC43C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800BF640 000BC440*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800BF644 000BC444*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BF648 000BC448*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800BF64C 000BC44C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r3));
/*800BF650 000BC450*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800BF654 000BC454*/ PPC::Runtime::ASM::bne(.L_800BF660);
/*800BF658 000BC458*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF65C 000BC45C*/ PPC::Runtime::ASM::b(.L_800BF8A8);
RUNTIME_PPC_JUMP_LABEL(.L_800BF660, 0x800BF660) //this is a jump label
/*800BF660 000BC460*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BF664 000BC464*/ PPC::Runtime::ASM::addi(context->r31, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BF668 000BC468*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF66C 000BC46C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r3));
/*800BF670 000BC470*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BF674 000BC474*/ PPC::Runtime::ASM::bge(.L_800BF680);
/*800BF678 000BC478*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF67C 000BC47C*/ PPC::Runtime::ASM::b(.L_800BF8A8);
RUNTIME_PPC_JUMP_LABEL(.L_800BF680, 0x800BF680) //this is a jump label
/*800BF680 000BC480*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r29));
/*800BF684 000BC484*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*800BF688 000BC488*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r29));
/*800BF68C 000BC48C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BF690 000BC490*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x330, context->r29));
/*800BF694 000BC494*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r29));
/*800BF698 000BC498*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f0);
/*800BF69C 000BC49C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r29));
/*800BF6A0 000BC4A0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BF6A4 000BC4A4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BF6A8 000BC4A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r29));
/*800BF6AC 000BC4AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r29));
/*800BF6B0 000BC4B0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BF6B4 000BC4B4*/ PPC::Runtime::ASM::fsubs(context->f5, context->f1, context->f0);
/*800BF6B8 000BC4B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BF6BC 000BC4BC*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BF6C0 000BC4C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r29));
/*800BF6C4 000BC4C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r29));
/*800BF6C8 000BC4C8*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*800BF6CC 000BC4CC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800BF6D0 000BC4D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800BF6D4 000BC4D4*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800BF6D8 000BC4D8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f5, context->f1);
/*800BF6DC 000BC4DC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800BF6E0 000BC4E0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f6, context->f0);
/*800BF6E4 000BC4E4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f3, context->f0);
/*800BF6E8 000BC4E8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BF6EC 000BC4EC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f6, context->f0, context->f2);
/*800BF6F0 000BC4F0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f5);
/*800BF6F4 000BC4F4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f0, context->f4);
/*800BF6F8 000BC4F8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BF6FC 000BC4FC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BF700 000BC500*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800BF704 000BC504*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BF708 000BC508*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF70C 000BC50C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BF710 000BC510*/ PPC::Runtime::ASM::bge(.L_800BF71C);
/*800BF714 000BC514*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF718 000BC518*/ PPC::Runtime::ASM::b(.L_800BF8A8);
RUNTIME_PPC_JUMP_LABEL(.L_800BF71C, 0x800BF71C) //this is a jump label
/*800BF71C 000BC51C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r29));
/*800BF720 000BC520*/ PPC::Runtime::ASM::bl(fn_800CEFB4);
/*800BF724 000BC524*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BF728 000BC528*/ PPC::Runtime::ASM::bne(.L_800BF734);
/*800BF72C 000BC52C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF730 000BC530*/ PPC::Runtime::ASM::b(.L_800BF8A8);
RUNTIME_PPC_JUMP_LABEL(.L_800BF734, 0x800BF734) //this is a jump label
/*800BF734 000BC534*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x270, context->r29));
/*800BF738 000BC538*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BF73C 000BC53C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800BF740 000BC540*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*800BF744 000BC544*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BF748 000BC548*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*800BF74C 000BC54C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800BF750 000BC550*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BF754 000BC554*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BF758 000BC558*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BF75C 000BC55C*/ PPC::Runtime::ASM::fsubs(context->f6, context->f1, context->f0);
/*800BF760 000BC560*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BF764 000BC564*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800BF768 000BC568*/ PPC::Runtime::ASM::fsubs(context->f5, context->f3, context->f2);
/*800BF76C 000BC56C*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800BF770 000BC570*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*800BF774 000BC574*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800BF778 000BC578*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800BF77C 000BC57C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800BF780 000BC580*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800BF784 000BC584*/ PPC::Runtime::ASM::fmuls(context->f0, context->f5, context->f1);
/*800BF788 000BC588*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800BF78C 000BC58C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f2, context->f0);
/*800BF790 000BC590*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f3, context->f0);
/*800BF794 000BC594*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BF798 000BC598*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f0, context->f6);
/*800BF79C 000BC59C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f5);
/*800BF7A0 000BC5A0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f0, context->f4);
/*800BF7A4 000BC5A4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800BF7A8 000BC5A8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800BF7AC 000BC5AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800BF7B0 000BC5B0*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BF7B4 000BC5B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF7B8 000BC5B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BF7BC 000BC5BC*/ PPC::Runtime::ASM::bge(.L_800BF7C8);
/*800BF7C0 000BC5C0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF7C4 000BC5C4*/ PPC::Runtime::ASM::b(.L_800BF8A8);
RUNTIME_PPC_JUMP_LABEL(.L_800BF7C8, 0x800BF7C8) //this is a jump label
/*800BF7C8 000BC5C8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*800BF7CC 000BC5CC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*800BF7D0 000BC5D0*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*800BF7D4 000BC5D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BF7D8 000BC5D8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF7DC 000BC5DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r3));
/*800BF7E0 000BC5E0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f2, context->f0);
/*800BF7E4 000BC5E4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f3);
/*800BF7E8 000BC5E8*/ PPC::Runtime::ASM::bge(.L_800BF7F4);
/*800BF7EC 000BC5EC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF7F0 000BC5F0*/ PPC::Runtime::ASM::b(.L_800BF818);
RUNTIME_PPC_JUMP_LABEL(.L_800BF7F4, 0x800BF7F4) //this is a jump label
/*800BF7F4 000BC5F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r3));
/*800BF7F8 000BC5F8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*800BF7FC 000BC5FC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BF800 000BC600*/ PPC::Runtime::ASM::ble(.L_800BF80C);
/*800BF804 000BC604*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF808 000BC608*/ PPC::Runtime::ASM::b(.L_800BF818);
RUNTIME_PPC_JUMP_LABEL(.L_800BF80C, 0x800BF80C) //this is a jump label
/*800BF80C 000BC60C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*800BF810 000BC610*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*800BF814 000BC614*/ PPC::Runtime::ASM::fdivs(context->f2, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800BF818, 0x800BF818) //this is a jump label
/*800BF818 000BC618*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800BF81C 000BC61C*/ PPC::Runtime::ASM::lfs(context->f10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BF820 000BC620*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r3));
/*800BF824 000BC624*/ PPC::Runtime::ASM::fmuls(context->f0, context->f10, context->f7);
/*800BF828 000BC628*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800BF82C 000BC62C*/ PPC::Runtime::ASM::lfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800BF830 000BC630*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*800BF834 000BC634*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800BF838 000BC638*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BF83C 000BC63C*/ PPC::Runtime::ASM::fmuls(context->f6, context->f3, context->f9);
/*800BF840 000BC640*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800BF844 000BC644*/ PPC::Runtime::ASM::fmsubs(context->f3, context->f3, context->f5, context->f0);
/*800BF848 000BC648*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800BF84C 000BC64C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f8, context->f5);
/*800BF850 000BC650*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800BF854 000BC654*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BF858 000BC658*/ PPC::Runtime::ASM::fmsubs(context->f6, context->f8, context->f7, context->f6);
/*800BF85C 000BC65C*/ PPC::Runtime::ASM::fmsubs(context->f3, context->f10, context->f9, context->f0);
/*800BF860 000BC660*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF864 000BC664*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BF868 000BC668*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BF86C 000BC66C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800BF870 000BC670*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BF874 000BC674*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BF878 000BC678*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800BF87C 000BC67C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800BF880 000BC680*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BF884 000BC684*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f2);
/*800BF888 000BC688*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800BF88C 000BC68C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800BF890 000BC690*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f4, context->f2);
/*800BF894 000BC694*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800BF898 000BC698*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f5, context->f2);
/*800BF89C 000BC69C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800BF8A0 000BC6A0*/ PPC::Runtime::ASM::bge(.L_800BF8A8);
/*800BF8A4 000BC6A4*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_800BF8A8, 0x800BF8A8) //this is a jump label
/*800BF8A8 000BC6A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800BF8AC 000BC6AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800BF8B0 000BC6B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800BF8B4 000BC6B4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BF8B8 000BC6B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800BF8BC 000BC6BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*800BF8C0 000BC6C0*/ PPC::Runtime::ASM::blr();
}