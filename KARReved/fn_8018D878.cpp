//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018A5B8.hpp"
#include "fn_8018AB10.hpp"



void fn_8018D878(PPC::Runtime::GCContext* context)
{
/*8018D878 0018A678*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8018D87C 0018A67C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018D880 0018A680*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8018D884 0018A684*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8018D888 0018A688*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8018D88C 0018A68C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018D890 0018A690*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8018D894 0018A694*/ PPC::Runtime::ASM::lis(context->r4, lbl_80559BF4 @ Get_MemoryOffset_HighBit);
/*8018D898 0018A698*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8018D89C 0018A69C*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_80559BF4 @ Get_MemoryOffset_LowBit);
/*8018D8A0 0018A6A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23c, context->r3));
/*8018D8A4 0018A6A4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8018D8A8 0018A6A8*/ PPC::Runtime::ASM::beq(.L_8018D9A0);
/*8018D8AC 0018A6AC*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E1048 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018D8B0 0018A6B0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8018D8B4 0018A6B4*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8018D8B8 0018A6B8*/ PPC::Runtime::ASM::ble(.L_8018D8DC);
RUNTIME_PPC_JUMP_LABEL(.L_8018D8BC, 0x8018D8BC) //this is a jump label
/*8018D8BC 0018A6BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8018D8C0 0018A6C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*8018D8C4 0018A6C4*/ PPC::Runtime::ASM::ble(.L_8018D8D0);
/*8018D8C8 0018A6C8*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
/*8018D8CC 0018A6CC*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8018D8D0, 0x8018D8D0) //this is a jump label
/*8018D8D0 0018A6D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1c);
/*8018D8D4 0018A6D4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8018D8D8 0018A6D8*/ PPC::Runtime::ASM::bdnz(.L_8018D8BC);
RUNTIME_PPC_JUMP_LABEL(.L_8018D8DC, 0x8018D8DC) //this is a jump label
/*8018D8DC 0018A6DC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1040 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018D8E0 0018A6E0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8018D8E4 0018A6E4*/ PPC::Runtime::ASM::ble(.L_8018D9A0);
/*8018D8E8 0018A6E8*/ PPC::Runtime::ASM::mulli(context->r4, context->r5, 0x1c);
/*8018D8EC 0018A6EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559BF4 @ Get_MemoryOffset_HighBit);
/*8018D8F0 0018A6F0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8018D8F4 0018A6F4*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*8018D8F8 0018A6F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_80559BF4 @ Get_MemoryOffset_LowBit);
/*8018D8FC 0018A6FC*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8018D900 0018A700*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xc);
/*8018D904 0018A704*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8018D908 0018A708*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8018D90C 0018A70C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8018D910 0018A710*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r4));
/*8018D914 0018A714*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8018D918 0018A718*/ PPC::Runtime::ASM::bl(fn_8018A5B8);
/*8018D91C 0018A71C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8018D920 0018A720*/ PPC::Runtime::ASM::bne(.L_8018D93C);
/*8018D924 0018A724*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*8018D928 0018A728*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*8018D92C 0018A72C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8018D930 0018A730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018D934 0018A734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*8018D938 0018A738*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8018D93C, 0x8018D93C) //this is a jump label
/*8018D93C 0018A73C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8018D940 0018A740*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8018D944 0018A744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018D948 0018A748*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x70);
/*8018D94C 0018A74C*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x3c);
/*8018D950 0018A750*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8018D954 0018A754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8018D958 0018A758*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8018D95C 0018A75C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8018D960 0018A760*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8018D964 0018A764*/ PPC::Runtime::ASM::bl(fn_8018AB10);
/*8018D968 0018A768*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8018D96C 0018A76C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8018D970 0018A770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8018D974 0018A774*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8018D978 0018A778*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8018D97C 0018A77C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8018D980 0018A780*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8018D984 0018A784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*8018D988 0018A788*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8018D98C 0018A78C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8018D990 0018A790*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8018D994 0018A794*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*8018D998 0018A798*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 5, 24);
/*8018D99C 0018A79C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8018D9A0, 0x8018D9A0) //this is a jump label
/*8018D9A0 0018A7A0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8018D9A4 0018A7A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8018D9A8 0018A7A8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8018D9AC 0018A7AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018D9B0 0018A7B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8018D9B4 0018A7B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018D9B8 0018A7B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8018D9BC 0018A7BC*/ PPC::Runtime::ASM::blr();
}