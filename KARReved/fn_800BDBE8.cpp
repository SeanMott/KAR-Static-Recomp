//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B7E90.hpp"
#include "fn_800B7E90.hpp"
#include "fn_800B7E90.hpp"
#include "fn_80062ECC.hpp"
#include "fn_800B7E90.hpp"



void fn_800BDBE8(PPC::Runtime::GCContext* context)
{
/*800BDBE8 000BA9E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*800BDBEC 000BA9EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BDBF0 000BA9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800BDBF4 000BA9F4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*800BDBF8 000BA9F8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*800BDBFC 000BA9FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*800BDC00 000BAA00*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r3));
/*800BDC04 000BAA04*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800BDC08 000BAA08*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r3));
/*800BDC0C 000BAA0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDC10 000BAA10*/ PPC::Runtime::ASM::fsubs(context->f5, context->f2, context->f1);
/*800BDC14 000BAA14*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800BDC18 000BAA18*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r3));
/*800BDC1C 000BAA1C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*800BDC20 000BAA20*/ PPC::Runtime::ASM::fsubs(context->f4, context->f2, context->f1);
/*800BDC24 000BAA24*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BDC28 000BAA28*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*800BDC2C 000BAA2C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r3));
/*800BDC30 000BAA30*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f1);
/*800BDC34 000BAA34*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800BDC38 000BAA38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800BDC3C 000BAA3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800BDC40 000BAA40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BDC44 000BAA44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800BDC48 000BAA48*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BDC4C 000BAA4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800BDC50 000BAA50*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f4);
/*800BDC54 000BAA54*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800BDC58 000BAA58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800BDC5C 000BAA5C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f5, context->f1);
/*800BDC60 000BAA60*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800BDC64 000BAA64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800BDC68 000BAA68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*800BDC6C 000BAA6C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f6, context->f2, context->f1);
/*800BDC70 000BAA70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BDC74 000BAA74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BDC78 000BAA78*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BDC7C 000BAA7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*800BDC80 000BAA80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800BDC84 000BAA84*/ PPC::Runtime::ASM::bge(.L_800BDCC4);
/*800BDC88 000BAA88*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BDC8C 000BAA8C*/ PPC::Runtime::ASM::fneg(context->f5, context->f4);
/*800BDC90 000BAA90*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BDC94 000BAA94*/ PPC::Runtime::ASM::fneg(context->f4, context->f3);
/*800BDC98 000BAA98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800BDC9C 000BAA9C*/ PPC::Runtime::ASM::fneg(context->f3, context->f6);
/*800BDCA0 000BAAA0*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*800BDCA4 000BAAA4*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*800BDCA8 000BAAA8*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800BDCAC 000BAAAC*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BDCB0 000BAAB0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BDCB4 000BAAB4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800BDCB8 000BAAB8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BDCBC 000BAABC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BDCC0 000BAAC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800BDCC4, 0x800BDCC4) //this is a jump label
/*800BDCC4 000BAAC4*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BDCC8 000BAAC8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*800BDCCC 000BAACC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800BDCD0 000BAAD0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BDCD4 000BAAD4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800BDCD8 000BAAD8*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800BDCDC 000BAADC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f6, context->f5);
/*800BDCE0 000BAAE0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800BDCE4 000BAAE4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800BDCE8 000BAAE8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f7, context->f3);
/*800BDCEC 000BAAEC*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f7, context->f2, context->f0);
/*800BDCF0 000BAAF0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f2);
/*800BDCF4 000BAAF4*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f4, context->f5, context->f1);
/*800BDCF8 000BAAF8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800BDCFC 000BAAFC*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f6, context->f3, context->f2);
/*800BDD00 000BAB00*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800BDD04 000BAB04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800BDD08 000BAB08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800BDD0C 000BAB0C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800BDD10 000BAB10*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800BDD14 000BAB14*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800BDD18 000BAB18*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800BDD1C 000BAB1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800BDD20 000BAB20*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BDD24 000BAB24*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDD28 000BAB28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BDD2C 000BAB2C*/ PPC::Runtime::ASM::ble(.L_800BDFB4);
/*800BDD30 000BAB30*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800BDD34 000BAB34*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*800BDD38 000BAB38*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800BDD3C 000BAB3C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BDD40 000BAB40*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800BDD44 000BAB44*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800BDD48 000BAB48*/ PPC::Runtime::ASM::fmuls(context->f0, context->f6, context->f5);
/*800BDD4C 000BAB4C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800BDD50 000BAB50*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800BDD54 000BAB54*/ PPC::Runtime::ASM::fmuls(context->f1, context->f7, context->f3);
/*800BDD58 000BAB58*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f7, context->f2, context->f0);
/*800BDD5C 000BAB5C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f2);
/*800BDD60 000BAB60*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f4, context->f5, context->f1);
/*800BDD64 000BAB64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BDD68 000BAB68*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f6, context->f3, context->f2);
/*800BDD6C 000BAB6C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BDD70 000BAB70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BDD74 000BAB74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BDD78 000BAB78*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BDD7C 000BAB7C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BDD80 000BAB80*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BDD84 000BAB84*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800BDD88 000BAB88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800BDD8C 000BAB8C*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BDD90 000BAB90*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDD94 000BAB94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BDD98 000BAB98*/ PPC::Runtime::ASM::ble(.L_800BDFAC);
/*800BDD9C 000BAB9C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BDDA0 000BABA0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800BDDA4 000BABA4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800BDDA8 000BABA8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BDDAC 000BABAC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800BDDB0 000BABB0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f1);
/*800BDDB4 000BABB4*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800BDDB8 000BABB8*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800BDDBC 000BABBC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800BDDC0 000BABC0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f6, context->f0);
/*800BDDC4 000BABC4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*800BDDC8 000BABC8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BDDCC 000BABCC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f6, context->f0, context->f2);
/*800BDDD0 000BABD0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f3);
/*800BDDD4 000BABD4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f0, context->f5);
/*800BDDD8 000BABD8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800BDDDC 000BABDC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BDDE0 000BABE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800BDDE4 000BABE4*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BDDE8 000BABE8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDDEC 000BABEC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BDDF0 000BABF0*/ PPC::Runtime::ASM::ble(.L_800BDFA4);
/*800BDDF4 000BABF4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*800BDDF8 000BABF8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*800BDDFC 000BABFC*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*800BDE00 000BAC00*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BDE04 000BAC04*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDE08 000BAC08*/ PPC::Runtime::ASM::addi(context->r31, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BDE0C 000BAC0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BDE10 000BAC10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r3));
/*800BDE14 000BAC14*/ PPC::Runtime::ASM::fmuls(context->f3, context->f2, context->f0);
/*800BDE18 000BAC18*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f3);
/*800BDE1C 000BAC1C*/ PPC::Runtime::ASM::bge(.L_800BDF9C);
/*800BDE20 000BAC20*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDE24 000BAC24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BDE28 000BAC28*/ PPC::Runtime::ASM::bge(.L_800BDE34);
/*800BDE2C 000BAC2C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDE30 000BAC30*/ PPC::Runtime::ASM::b(.L_800BDE48);
RUNTIME_PPC_JUMP_LABEL(.L_800BDE34, 0x800BDE34) //this is a jump label
/*800BDE34 000BAC34*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*800BDE38 000BAC38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDE3C 000BAC3C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*800BDE40 000BAC40*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*800BDE44 000BAC44*/ PPC::Runtime::ASM::fsubs(context->f31, context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800BDE48, 0x800BDE48) //this is a jump label
/*800BDE48 000BAC48*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BDE4C 000BAC4C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*800BDE50 000BAC50*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800BDE54 000BAC54*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BDE58 000BAC58*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BDE5C 000BAC5C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f5);
/*800BDE60 000BAC60*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800BDE64 000BAC64*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800BDE68 000BAC68*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800BDE6C 000BAC6C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f4, context->f0);
/*800BDE70 000BAC70*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f6, context->f0);
/*800BDE74 000BAC74*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BDE78 000BAC78*/ PPC::Runtime::ASM::fmadds(context->f2, context->f4, context->f0, context->f2);
/*800BDE7C 000BAC7C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f5, context->f0, context->f1);
/*800BDE80 000BAC80*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f0, context->f3);
/*800BDE84 000BAC84*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BDE88 000BAC88*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BDE8C 000BAC8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800BDE90 000BAC90*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BDE94 000BAC94*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDE98 000BAC98*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BDE9C 000BAC9C*/ PPC::Runtime::ASM::ble(.L_800BDF94);
/*800BDEA0 000BACA0*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800BDEA4 000BACA4*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BDEA8 000BACA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800BDEAC 000BACAC*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800BDEB0 000BACB0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f8, context->f5);
/*800BDEB4 000BACB4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800BDEB8 000BACB8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f1, context->f7);
/*800BDEBC 000BACBC*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800BDEC0 000BACC0*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f1, context->f3, context->f0);
/*800BDEC4 000BACC4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800BDEC8 000BACC8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f6, context->f3);
/*800BDECC 000BACCC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800BDED0 000BACD0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BDED4 000BACD4*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f6, context->f5, context->f4);
/*800BDED8 000BACD8*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f8, context->f7, context->f0);
/*800BDEDC 000BACDC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800BDEE0 000BACE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BDEE4 000BACE4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BDEE8 000BACE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF314 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDEEC 000BACEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800BDEF0 000BACF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BDEF4 000BACF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BDEF8 000BACF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800BDEFC 000BACFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800BDF00 000BAD00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BDF04 000BAD04*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*800BDF08 000BAD08*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800BDF0C 000BAD0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800BDF10 000BAD10*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f2, context->f0);
/*800BDF14 000BAD14*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800BDF18 000BAD18*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f2, context->f0);
/*800BDF1C 000BAD1C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*800BDF20 000BAD20*/ PPC::Runtime::ASM::bge(.L_800BDF28);
/*800BDF24 000BAD24*/ PPC::Runtime::ASM::b(.L_800BDF3C);
RUNTIME_PPC_JUMP_LABEL(.L_800BDF28, 0x800BDF28) //this is a jump label
/*800BDF28 000BAD28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDF2C 000BAD2C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*800BDF30 000BAD30*/ PPC::Runtime::ASM::ble(.L_800BDF38);
/*800BDF34 000BAD34*/ PPC::Runtime::ASM::b(.L_800BDF3C);
RUNTIME_PPC_JUMP_LABEL(.L_800BDF38, 0x800BDF38) //this is a jump label
/*800BDF38 000BAD38*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800BDF3C, 0x800BDF3C) //this is a jump label
/*800BDF3C 000BAD3C*/ PPC::Runtime::ASM::bl(fn_asin?);
/*800BDF40 000BAD40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*800BDF44 000BAD44*/ PPC::Runtime::ASM::frsp(context->f2, context->f1);
/*800BDF48 000BAD48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDF4C 000BAD4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r3));
/*800BDF50 000BAD50*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*800BDF54 000BAD54*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*800BDF58 000BAD58*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800BDF5C 000BAD5C*/ PPC::Runtime::ASM::bge(.L_800BDF70);
/*800BDF60 000BAD60*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f1);
/*800BDF64 000BAD64*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4, context->r3));
/*800BDF68 000BAD68*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*800BDF6C 000BAD6C*/ PPC::Runtime::ASM::b(.L_800BDF8C);
RUNTIME_PPC_JUMP_LABEL(.L_800BDF70, 0x800BDF70) //this is a jump label
/*800BDF70 000BAD70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*800BDF74 000BAD74*/ PPC::Runtime::ASM::ble(.L_800BDF88);
/*800BDF78 000BAD78*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f1);
/*800BDF7C 000BAD7C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r3));
/*800BDF80 000BAD80*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*800BDF84 000BAD84*/ PPC::Runtime::ASM::b(.L_800BDF8C);
RUNTIME_PPC_JUMP_LABEL(.L_800BDF88, 0x800BDF88) //this is a jump label
/*800BDF88 000BAD88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800BDF8C, 0x800BDF8C) //this is a jump label
/*800BDF8C 000BAD8C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*800BDF90 000BAD90*/ PPC::Runtime::ASM::b(.L_800BDFB8);
RUNTIME_PPC_JUMP_LABEL(.L_800BDF94, 0x800BDF94) //this is a jump label
/*800BDF94 000BAD94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDF98 000BAD98*/ PPC::Runtime::ASM::b(.L_800BDFB8);
RUNTIME_PPC_JUMP_LABEL(.L_800BDF9C, 0x800BDF9C) //this is a jump label
/*800BDF9C 000BAD9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDFA0 000BADA0*/ PPC::Runtime::ASM::b(.L_800BDFB8);
RUNTIME_PPC_JUMP_LABEL(.L_800BDFA4, 0x800BDFA4) //this is a jump label
/*800BDFA4 000BADA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDFA8 000BADA8*/ PPC::Runtime::ASM::b(.L_800BDFB8);
RUNTIME_PPC_JUMP_LABEL(.L_800BDFAC, 0x800BDFAC) //this is a jump label
/*800BDFAC 000BADAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BDFB0 000BADB0*/ PPC::Runtime::ASM::b(.L_800BDFB8);
RUNTIME_PPC_JUMP_LABEL(.L_800BDFB4, 0x800BDFB4) //this is a jump label
/*800BDFB4 000BADB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800BDFB8, 0x800BDFB8) //this is a jump label
/*800BDFB8 000BADB8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*800BDFBC 000BADBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800BDFC0 000BADC0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*800BDFC4 000BADC4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*800BDFC8 000BADC8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800BDFCC 000BADCC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*800BDFD0 000BADD0*/ PPC::Runtime::ASM::blr();
}