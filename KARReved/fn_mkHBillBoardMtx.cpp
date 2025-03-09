//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803D2158.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_803D2158.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_803D2158.hpp"
#include "fn_PSMTXCopy.hpp"



void fn_mkHBillBoardMtx(PPC::Runtime::GCContext* context)
{
/*8040E718 0040B518*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xb0, context->r1));
/*8040E71C 0040B51C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8040E720 0040B520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*8040E724 0040B524*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8040E728 0040B528*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*8040E72C 0040B52C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8040E730 0040B530*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8040E734 0040B534*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8040E738 0040B538*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8040E73C 0040B53C*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8040E740 0040B540*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8040E744 0040B544*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8040E748 0040B548*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8040E74C 0040B54C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8040E750 0040B550*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8040E754 0040B554*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8040E758 0040B558*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8040E75C 0040B55C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8040E760 0040B560*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8040E764 0040B564*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8040E768 0040B568*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8040E76C 0040B56C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8040E770 0040B570*/ PPC::Runtime::ASM::lfs(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8040E774 0040B574*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8040E778 0040B578*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8040E77C 0040B57C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8040E780 0040B580*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8040E784 0040B584*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8040E788 0040B588*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8040E78C 0040B58C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8040E790 0040B590*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_6 @ Get_MemoryOffset_HighBit);
/*8040E794 0040B594*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5B48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E798 0040B598*/ PPC::Runtime::ASM::addi(context->r4, context->r3, StructValues_Float_6 @ Get_MemoryOffset_LowBit);
/*8040E79C 0040B59C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8040E7A0 0040B5A0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8040E7A4 0040B5A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8040E7A8 0040B5A8*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*8040E7AC 0040B5AC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*8040E7B0 0040B5B0*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*8040E7B4 0040B5B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8040E7B8 0040B5B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8040E7BC 0040B5BC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f1);
/*8040E7C0 0040B5C0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8040E7C4 0040B5C4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f0);
/*8040E7C8 0040B5C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5B4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E7CC 0040B5CC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8040E7D0 0040B5D0*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*8040E7D4 0040B5D4*/ PPC::Runtime::ASM::fadds(context->f31, context->f3, context->f1);
/*8040E7D8 0040B5D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8040E7DC 0040B5DC*/ PPC::Runtime::ASM::ble(.L_8040E82C);
/*8040E7E0 0040B5E0*/ PPC::Runtime::ASM::frsqrte(context->f1, context->f31);
/*8040E7E4 0040B5E4*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E7E8 0040B5E8*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5B58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E7EC 0040B5EC*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E7F0 0040B5F0*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E7F4 0040B5F4*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*8040E7F8 0040B5F8*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8040E7FC 0040B5FC*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E800 0040B600*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E804 0040B604*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*8040E808 0040B608*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8040E80C 0040B60C*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E810 0040B610*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E814 0040B614*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*8040E818 0040B618*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*8040E81C 0040B61C*/ PPC::Runtime::ASM::fmul(context->f0, context->f31, context->f0);
/*8040E820 0040B620*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*8040E824 0040B624*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8040E828 0040B628*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8040E82C, 0x8040E82C) //this is a jump label
/*8040E82C 0040B62C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8040E830 0040B630*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8040E834 0040B634*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f1);
/*8040E838 0040B638*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8040E83C 0040B63C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f0);
/*8040E840 0040B640*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5B4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E844 0040B644*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8040E848 0040B648*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*8040E84C 0040B64C*/ PPC::Runtime::ASM::fadds(context->f30, context->f3, context->f1);
/*8040E850 0040B650*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*8040E854 0040B654*/ PPC::Runtime::ASM::ble(.L_8040E8A4);
/*8040E858 0040B658*/ PPC::Runtime::ASM::frsqrte(context->f1, context->f30);
/*8040E85C 0040B65C*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E860 0040B660*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5B58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E864 0040B664*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E868 0040B668*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E86C 0040B66C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f30, context->f0, context->f2);
/*8040E870 0040B670*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8040E874 0040B674*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E878 0040B678*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E87C 0040B67C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f30, context->f0, context->f2);
/*8040E880 0040B680*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8040E884 0040B684*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E888 0040B688*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E88C 0040B68C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f30, context->f0, context->f2);
/*8040E890 0040B690*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*8040E894 0040B694*/ PPC::Runtime::ASM::fmul(context->f0, context->f30, context->f0);
/*8040E898 0040B698*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*8040E89C 0040B69C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8040E8A0 0040B6A0*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8040E8A4, 0x8040E8A4) //this is a jump label
/*8040E8A4 0040B6A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8040E8A8 0040B6A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 18, 18);
/*8040E8AC 0040B6AC*/ PPC::Runtime::ASM::beq(.L_8040E948);
/*8040E8B0 0040B6B0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f27, context->f27);
/*8040E8B4 0040B6B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5B4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E8B8 0040B6B8*/ PPC::Runtime::ASM::fmadds(context->f4, context->f29, context->f29, context->f1);
/*8040E8BC 0040B6BC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*8040E8C0 0040B6C0*/ PPC::Runtime::ASM::ble(.L_8040E910);
/*8040E8C4 0040B6C4*/ PPC::Runtime::ASM::frsqrte(context->f1, context->f4);
/*8040E8C8 0040B6C8*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E8CC 0040B6CC*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5B58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E8D0 0040B6D0*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E8D4 0040B6D4*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E8D8 0040B6D8*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f4, context->f0, context->f2);
/*8040E8DC 0040B6DC*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8040E8E0 0040B6E0*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E8E4 0040B6E4*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E8E8 0040B6E8*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f4, context->f0, context->f2);
/*8040E8EC 0040B6EC*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8040E8F0 0040B6F0*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8040E8F4 0040B6F4*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8040E8F8 0040B6F8*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f4, context->f0, context->f2);
/*8040E8FC 0040B6FC*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*8040E900 0040B700*/ PPC::Runtime::ASM::fmul(context->f0, context->f4, context->f0);
/*8040E904 0040B704*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*8040E908 0040B708*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8040E90C 0040B70C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8040E910, 0x8040E910) //this is a jump label
/*8040E910 0040B710*/ PPC::Runtime::ASM::lis(context->r4, StructValues_Float_6 @ Get_MemoryOffset_HighBit);
/*8040E914 0040B714*/ PPC::Runtime::ASM::fneg(context->f2, context->f28);
/*8040E918 0040B718*/ PPC::Runtime::ASM::lfs(context->f0, StructValues_Float_6 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*8040E91C 0040B71C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8040E920 0040B720*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8040E924 0040B724*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f4);
/*8040E928 0040B728*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f1);
/*8040E92C 0040B72C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8040E930 0040B730*/ PPC::Runtime::ASM::fmuls(context->f1, context->f29, context->f0);
/*8040E934 0040B734*/ PPC::Runtime::ASM::fmuls(context->f0, context->f27, context->f0);
/*8040E938 0040B738*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8040E93C 0040B73C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8040E940 0040B740*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*8040E944 0040B744*/ PPC::Runtime::ASM::b(.L_8040E95C);
RUNTIME_PPC_JUMP_LABEL(.L_8040E948, 0x8040E948) //this is a jump label
/*8040E948 0040B748*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5B4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E94C 0040B74C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5B48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040E950 0040B750*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8040E954 0040B754*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8040E958 0040B758*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8040E95C, 0x8040E95C) //this is a jump label
/*8040E95C 0040B75C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8040E960 0040B760*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8040E964 0040B764*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8040E968 0040B768*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*8040E96C 0040B76C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8040E970 0040B770*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8040E974 0040B774*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_6 @ Get_MemoryOffset_HighBit);
/*8040E978 0040B778*/ PPC::Runtime::ASM::lfs(context->f0, StructValues_Float_6 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8040E97C 0040B77C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8040E980 0040B780*/ PPC::Runtime::ASM::blt(.L_8040EA20);
/*8040E984 0040B784*/ PPC::Runtime::ASM::fdivs(context->f30, context->f30, context->f1);
/*8040E988 0040B788*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8040E98C 0040B78C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8040E990 0040B790*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*8040E994 0040B794*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*8040E998 0040B798*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8040E99C 0040B79C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8040E9A0 0040B7A0*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_6 @ Get_MemoryOffset_HighBit);
/*8040E9A4 0040B7A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8040E9A8 0040B7A8*/ PPC::Runtime::ASM::lfs(context->f2, StructValues_Float_6 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8040E9AC 0040B7AC*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*8040E9B0 0040B7B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8040E9B4 0040B7B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8040E9B8 0040B7B8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f31, context->f1);
/*8040E9BC 0040B7BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8040E9C0 0040B7C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8040E9C4 0040B7C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8040E9C8 0040B7C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8040E9CC 0040B7CC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8040E9D0 0040B7D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8040E9D4 0040B7D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8040E9D8 0040B7D8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8040E9DC 0040B7DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8040E9E0 0040B7E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8040E9E4 0040B7E4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8040E9E8 0040B7E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8040E9EC 0040B7EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8040E9F0 0040B7F0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*8040E9F4 0040B7F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8040E9F8 0040B7F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8040E9FC 0040B7FC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*8040EA00 0040B800*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8040EA04 0040B804*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8040EA08 0040B808*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*8040EA0C 0040B80C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8040EA10 0040B810*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8040EA14 0040B814*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8040EA18 0040B818*/ PPC::Runtime::ASM::stfs(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8040EA1C 0040B81C*/ PPC::Runtime::ASM::b(.L_8040EA2C);
RUNTIME_PPC_JUMP_LABEL(.L_8040EA20, 0x8040EA20) //this is a jump label
/*8040EA20 0040B820*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8040EA24 0040B824*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8040EA28 0040B828*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
RUNTIME_PPC_JUMP_LABEL(.L_8040EA2C, 0x8040EA2C) //this is a jump label
/*8040EA2C 0040B82C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*8040EA30 0040B830*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8040EA34 0040B834*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8040EA38 0040B838*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8040EA3C 0040B83C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8040EA40 0040B840*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8040EA44 0040B844*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8040EA48 0040B848*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8040EA4C 0040B84C*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8040EA50 0040B850*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8040EA54 0040B854*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8040EA58 0040B858*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8040EA5C 0040B85C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*8040EA60 0040B860*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8040EA64 0040B864*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8040EA68 0040B868*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xb0);
/*8040EA6C 0040B86C*/ PPC::Runtime::ASM::blr();
}