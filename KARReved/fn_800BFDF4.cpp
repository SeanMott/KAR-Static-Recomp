//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B7E90.hpp"
#include "fn_800B7E90.hpp"
#include "fn_80062ECC.hpp"



void fn_800BFDF4(PPC::Runtime::GCContext* context)
{
/*800BFDF4 000BCBF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800BFDF8 000BCBF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BFDFC 000BCBFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BFE00 000BCC00*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BFE04 000BCC04*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800BFE08 000BCC08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800BFE0C 000BCC0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800BFE10 000BCC10*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800BFE14 000BCC14*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800BFE18 000BCC18*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*800BFE1C 000BCC1C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800BFE20 000BCC20*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800BFE24 000BCC24*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800BFE28 000BCC28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r28));
/* 800BFE2C 000BCC2C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*800BFE30 000BCC30*/ PPC::Runtime::ASM::beq(.L_800BFF80);
/*800BFE34 000BCC34*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*800BFE38 000BCC38*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*800BFE3C 000BCC3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*800BFE40 000BCC40*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BFE44 000BCC44*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*800BFE48 000BCC48*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BFE4C 000BCC4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BFE50 000BCC50*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BFE54 000BCC54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800BFE58 000BCC58*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BFE5C 000BCC5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BFE60 000BCC60*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800BFE64 000BCC64*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800BFE68 000BCC68*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f1);
/*800BFE6C 000BCC6C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BFE70 000BCC70*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800BFE74 000BCC74*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f6, context->f0);
/*800BFE78 000BCC78*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*800BFE7C 000BCC7C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BFE80 000BCC80*/ PPC::Runtime::ASM::fmadds(context->f2, context->f6, context->f0, context->f2);
/*800BFE84 000BCC84*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f3);
/*800BFE88 000BCC88*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f0, context->f5);
/*800BFE8C 000BCC8C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BFE90 000BCC90*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BFE94 000BCC94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BFE98 000BCC98*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BFE9C 000BCC9C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFEA0 000BCCA0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BFEA4 000BCCA4*/ PPC::Runtime::ASM::bge(.L_800BFEB0);
/*800BFEA8 000BCCA8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFEAC 000BCCAC*/ PPC::Runtime::ASM::b(.L_800BFF48);
RUNTIME_PPC_JUMP_LABEL(.L_800BFEB0, 0x800BFEB0) //this is a jump label
/*800BFEB0 000BCCB0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*800BFEB4 000BCCB4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800BFEB8 000BCCB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800BFEBC 000BCCBC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BFEC0 000BCCC0*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*800BFEC4 000BCCC4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f1);
/*800BFEC8 000BCCC8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800BFECC 000BCCCC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*800BFED0 000BCCD0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800BFED4 000BCCD4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f2, context->f0);
/*800BFED8 000BCCD8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*800BFEDC 000BCCDC*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BFEE0 000BCCE0*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f0, context->f6);
/*800BFEE4 000BCCE4*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f3);
/*800BFEE8 000BCCE8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f0, context->f5);
/*800BFEEC 000BCCEC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BFEF0 000BCCF0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BFEF4 000BCCF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BFEF8 000BCCF8*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BFEFC 000BCCFC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFF00 000BCD00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BFF04 000BCD04*/ PPC::Runtime::ASM::bge(.L_800BFF10);
/*800BFF08 000BCD08*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFF0C 000BCD0C*/ PPC::Runtime::ASM::b(.L_800BFF48);
RUNTIME_PPC_JUMP_LABEL(.L_800BFF10, 0x800BFF10) //this is a jump label
/*800BFF10 000BCD10*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*800BFF14 000BCD14*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800BFF18 000BCD18*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*800BFF1C 000BCD1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFF20 000BCD20*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BFF24 000BCD24*/ PPC::Runtime::ASM::bge(.L_800BFF30);
/*800BFF28 000BCD28*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DF398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFF2C 000BCD2C*/ PPC::Runtime::ASM::b(.L_800BFF44);
RUNTIME_PPC_JUMP_LABEL(.L_800BFF30, 0x800BFF30) //this is a jump label
/*800BFF30 000BCD30*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DF318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFF34 000BCD34*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*800BFF38 000BCD38*/ PPC::Runtime::ASM::ble(.L_800BFF40);
/*800BFF3C 000BCD3C*/ PPC::Runtime::ASM::b(.L_800BFF44);
RUNTIME_PPC_JUMP_LABEL(.L_800BFF40, 0x800BFF40) //this is a jump label
/*800BFF40 000BCD40*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_800BFF44, 0x800BFF44) //this is a jump label
/*800BFF44 000BCD44*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_800BFF48, 0x800BFF48) //this is a jump label
/*800BFF48 000BCD48*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BFF4C 000BCD4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFF50 000BCD50*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BFF54 000BCD54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800BFF58 000BCD58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r3));
/*800BFF5C 000BCD5C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800BFF60 000BCD60*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800BFF64 000BCD64*/ PPC::Runtime::ASM::ble(.L_800BFFF0);
/*800BFF68 000BCD68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*800BFF6C 000BCD6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800BFF70 000BCD70*/ PPC::Runtime::ASM::bne(.L_800BFFF0);
/*800BFF74 000BCD74*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800BFF78 000BCD78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*800BFF7C 000BCD7C*/ PPC::Runtime::ASM::b(.L_800BFFF0);
RUNTIME_PPC_JUMP_LABEL(.L_800BFF80, 0x800BFF80) //this is a jump label
/*800BFF80 000BCD80*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BFF84 000BCD84*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800BFF88 000BCD88*/ PPC::Runtime::ASM::addi(context->r29, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BFF8C 000BCD8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r29));
/*800BFF90 000BCD90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r3));
/*800BFF94 000BCD94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800BFF98 000BCD98*/ PPC::Runtime::ASM::ble(.L_800BFFF0);
/*800BFF9C 000BCD9C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xb8);
/*800BFFA0 000BCDA0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800BFFA4 000BCDA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r29));
/*800BFFA8 000BCDA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r3));
/*800BFFAC 000BCDAC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BFFB0 000BCDB0*/ PPC::Runtime::ASM::bgt(.L_800BFFCC);
/*800BFFB4 000BCDB4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xc4);
/*800BFFB8 000BCDB8*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800BFFBC 000BCDBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r29));
/*800BFFC0 000BCDC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r3));
/*800BFFC4 000BCDC4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BFFC8 000BCDC8*/ PPC::Runtime::ASM::ble(.L_800BFFF0);
RUNTIME_PPC_JUMP_LABEL(.L_800BFFCC, 0x800BFFCC) //this is a jump label
/*800BFFCC 000BCDCC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800BFFD0 000BCDD0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BFFD4 000BCDD4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BFFD8 000BCDD8*/ PPC::Runtime::ASM::ble(.L_800BFFF0);
/*800BFFDC 000BCDDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*800BFFE0 000BCDE0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800BFFE4 000BCDE4*/ PPC::Runtime::ASM::bne(.L_800BFFF0);
/*800BFFE8 000BCDE8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800BFFEC 000BCDEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800BFFF0, 0x800BFFF0) //this is a jump label
/*800BFFF0 000BCDF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*800BFFF4 000BCDF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800BFFF8 000BCDF8*/ PPC::Runtime::ASM::bne(.L_800C0038);
/*800BFFFC 000BCDFC*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800C0000 000BCE00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C0004 000BCE04*/ PPC::Runtime::ASM::addi(context->r4, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800C0008 000BCE08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r4));
/*800C000C 000BCE0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r3));
/*800C0010 000BCE10*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800C0014 000BCE14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C0018 000BCE18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r4));
/*800C001C 000BCE1C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C0020 000BCE20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r3));
/*800C0024 000BCE24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800C0028 000BCE28*/ PPC::Runtime::ASM::bge(.L_800C0104);
/*800C002C 000BCE2C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800C0030 000BCE30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*800C0034 000BCE34*/ PPC::Runtime::ASM::b(.L_800C0104);
RUNTIME_PPC_JUMP_LABEL(.L_800C0038, 0x800C0038) //this is a jump label
/*800C0038 000BCE38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800C003C 000BCE3C*/ PPC::Runtime::ASM::bne(.L_800C0084);
/*800C0040 000BCE40*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800C0044 000BCE44*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C0048 000BCE48*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800C004C 000BCE4C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C0050 000BCE50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800C0054 000BCE54*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r3));
/*800C0058 000BCE58*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*800C005C 000BCE5C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C0060 000BCE60*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C0064 000BCE64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800C0068 000BCE68*/ PPC::Runtime::ASM::ble(.L_800C0104);
/*800C006C 000BCE6C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800C0070 000BCE70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C0074 000BCE74*/ PPC::Runtime::ASM::bne(.L_800C0104);
/*800C0078 000BCE78*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800C007C 000BCE7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*800C0080 000BCE80*/ PPC::Runtime::ASM::b(.L_800C0104);
RUNTIME_PPC_JUMP_LABEL(.L_800C0084, 0x800C0084) //this is a jump label
/*800C0084 000BCE84*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800C0088 000BCE88*/ PPC::Runtime::ASM::beq(.L_800C00A4);
/*800C008C 000BCE8C*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800C0090 000BCE90*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800C0094 000BCE94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800C0098 000BCE98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*800C009C 000BCE9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800C00A0 000BCEA0*/ PPC::Runtime::ASM::bge(.L_800C00D8);
RUNTIME_PPC_JUMP_LABEL(.L_800C00A4, 0x800C00A4) //this is a jump label
/*800C00A4 000BCEA4*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800C00A8 000BCEA8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C00AC 000BCEAC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800C00B0 000BCEB0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C00B4 000BCEB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800C00B8 000BCEB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r3));
/*800C00BC 000BCEBC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*800C00C0 000BCEC0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C00C4 000BCEC4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C00C8 000BCEC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800C00CC 000BCECC*/ PPC::Runtime::ASM::bge(.L_800C0104);
/*800C00D0 000BCED0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C00D4 000BCED4*/ PPC::Runtime::ASM::b(.L_800C0104);
RUNTIME_PPC_JUMP_LABEL(.L_800C00D8, 0x800C00D8) //this is a jump label
/*800C00D8 000BCED8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C00DC 000BCEDC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r3));
/*800C00E0 000BCEE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C00E4 000BCEE4*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*800C00E8 000BCEE8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C00EC 000BCEEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C00F0 000BCEF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800C00F4 000BCEF4*/ PPC::Runtime::ASM::ble(.L_800C0104);
/*800C00F8 000BCEF8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r30));
/*800C00FC 000BCEFC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800C0100 000BCF00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800C0104, 0x800C0104) //this is a jump label
/*800C0104 000BCF04*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800C0108 000BCF08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800C010C 000BCF0C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800C0110 000BCF10*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800C0114 000BCF14*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C0118 000BCF18*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C011C 000BCF1C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C0120 000BCF20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C0124 000BCF24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800C0128 000BCF28*/ PPC::Runtime::ASM::blr();
}