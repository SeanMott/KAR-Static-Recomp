//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E0270.hpp"
#include "fn_800E0270.hpp"
#include "fn_800E2BD0.hpp"
#include "fn_800E2BD0.hpp"
#include "fn_800D7AD0.hpp"
#include "fn_800EA084.hpp"
#include "fn_800F6090.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800DBD6C.hpp"
#include "fn_800DBE18.hpp"
#include "fn_800EA084.hpp"
#include "fn_800F6090.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800DBD6C.hpp"
#include "fn_800DBE18.hpp"



void fn_800FDBE0(PPC::Runtime::GCContext* context)
{
/*800FDBE0 000FA9E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800FDBE4 000FA9E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FDBE8 000FA9E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800FDBEC 000FA9EC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800FDBF0 000FA9F0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800FDBF4 000FA9F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800FDBF8 000FA9F8*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*800FDBFC 000FA9FC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800FDC00 000FAA00*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FDC04 000FAA04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r29));
/*800FDC08 000FAA08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800FDC0C 000FAA0C*/ PPC::Runtime::ASM::beq(.L_800FDF1C);
/*800FDC10 000FAA10*/ PPC::Runtime::ASM::bge(.L_800FDC20);
/*800FDC14 000FAA14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FDC18 000FAA18*/ PPC::Runtime::ASM::bge(.L_800FDC2C);
/*800FDC1C 000FAA1C*/ PPC::Runtime::ASM::b(.L_800FDF1C);
RUNTIME_PPC_JUMP_LABEL(.L_800FDC20, 0x800FDC20) //this is a jump label
/*800FDC20 000FAA20*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800FDC24 000FAA24*/ PPC::Runtime::ASM::bge(.L_800FDF1C);
/*800FDC28 000FAA28*/ PPC::Runtime::ASM::b(.L_800FDE08);
RUNTIME_PPC_JUMP_LABEL(.L_800FDC2C, 0x800FDC2C) //this is a jump label
/*800FDC2C 000FAA2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800FDC30 000FAA30*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDC34 000FAA34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FDC38 000FAA38*/ PPC::Runtime::ASM::bne(.L_800FDC44);
/*800FDC3C 000FAA3C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDC40 000FAA40*/ PPC::Runtime::ASM::b(.L_800FDC94);
RUNTIME_PPC_JUMP_LABEL(.L_800FDC44, 0x800FDC44) //this is a jump label
/*800FDC44 000FAA44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDC48 000FAA48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*800FDC4C 000FAA4C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FDC50 000FAA50*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FDC54 000FAA54*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*800FDC58 000FAA58*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*800FDC5C 000FAA5C*/ PPC::Runtime::ASM::bne(.L_800FDC74);
/*800FDC60 000FAA60*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1007 @ Get_MemoryOffset_HighBit);
/*800FDC64 000FAA64*/ PPC::Runtime::ASM::li(context->r4, 0xeb);
/*800FDC68 000FAA68*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1007 @ Get_MemoryOffset_LowBit);
/*800FDC6C 000FAA6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6260 @ Get_MemoryOffset_SDA21);
/*800FDC70 000FAA70*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FDC74, 0x800FDC74) //this is a jump label
/*800FDC74 000FAA74*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r25));
/*800FDC78 000FAA78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800FDC7C 000FAA7C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDC80 000FAA80*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800FDC84 000FAA84*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*800FDC88 000FAA88*/ PPC::Runtime::ASM::bge(.L_800FDC90);
/*800FDC8C 000FAA8C*/ PPC::Runtime::ASM::b(.L_800FDC94);
RUNTIME_PPC_JUMP_LABEL(.L_800FDC90, 0x800FDC90) //this is a jump label
/*800FDC90 000FAA90*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800FDC94, 0x800FDC94) //this is a jump label
/*800FDC94 000FAA94*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800FDC98 000FAA98*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FDC9C 000FAA9C*/ PPC::Runtime::ASM::beq(.L_800FDCC8);
/*800FDCA0 000FAAA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800FDCA4 000FAAA4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FDCA8 000FAAA8*/ PPC::Runtime::ASM::beq(.L_800FDCC8);
/*800FDCAC 000FAAAC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FDCB0 000FAAB0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FDCB4 000FAAB4*/ PPC::Runtime::ASM::bl(fn_800E0270);
/*800FDCB8 000FAAB8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800FDCBC 000FAABC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FDCC0 000FAAC0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800FDCC4 000FAAC4*/ PPC::Runtime::ASM::bl(fn_800E0270);
RUNTIME_PPC_JUMP_LABEL(.L_800FDCC8, 0x800FDCC8) //this is a jump label
/*800FDCC8 000FAAC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800FDCCC 000FAACC*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FDCD0 000FAAD0*/ PPC::Runtime::ASM::beq(.L_800FDCFC);
/*800FDCD4 000FAAD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800FDCD8 000FAAD8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FDCDC 000FAADC*/ PPC::Runtime::ASM::beq(.L_800FDCFC);
/*800FDCE0 000FAAE0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FDCE4 000FAAE4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FDCE8 000FAAE8*/ PPC::Runtime::ASM::bl(fn_800E2BD0);
/*800FDCEC 000FAAEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800FDCF0 000FAAF0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FDCF4 000FAAF4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800FDCF8 000FAAF8*/ PPC::Runtime::ASM::bl(fn_800E2BD0);
RUNTIME_PPC_JUMP_LABEL(.L_800FDCFC, 0x800FDCFC) //this is a jump label
/*800FDCFC 000FAAFC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800FDD00 000FAB00*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*800FDD04 000FAB04*/ PPC::Runtime::ASM::mr(context->r24, context->r27);
/*800FDD08 000FAB08*/ PPC::Runtime::ASM::mr(context->r23, context->r27);
/*800FDD0C 000FAB0C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800FDD10 000FAB10*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*800FDD14 000FAB14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FDD18 000FAB18*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FDD1C 000FAB1C*/ PPC::Runtime::ASM::b(.L_800FDD5C);
RUNTIME_PPC_JUMP_LABEL(.L_800FDD20, 0x800FDD20) //this is a jump label
/*800FDD20 000FAB20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800FDD24 000FAB24*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r24);
/*800FDD28 000FAB28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800FDD2C 000FAB2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FDD30 000FAB30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FDD34 000FAB34*/ PPC::Runtime::ASM::beq(.L_800FDD50);
/*800FDD38 000FAB38*/ PPC::Runtime::ASM::cmpw(context->r25, context->r3);
/*800FDD3C 000FAB3C*/ PPC::Runtime::ASM::bne(.L_800FDD50);
/*800FDD40 000FAB40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r26));
/*800FDD44 000FAB44*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FDD48 000FAB48*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r23);
/*800FDD4C 000FAB4C*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
RUNTIME_PPC_JUMP_LABEL(.L_800FDD50, 0x800FDD50) //this is a jump label
/*800FDD50 000FAB50*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x10);
/*800FDD54 000FAB54*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x4);
/*800FDD58 000FAB58*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FDD5C, 0x800FDD5C) //this is a jump label
/*800FDD5C 000FAB5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800FDD60 000FAB60*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800FDD64 000FAB64*/ PPC::Runtime::ASM::blt(.L_800FDD20);
/*800FDD68 000FAB68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*800FDD6C 000FAB6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FDD70 000FAB70*/ PPC::Runtime::ASM::ble(.L_800FDD80);
/*800FDD74 000FAB74*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*800FDD78 000FAB78*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FDD7C 000FAB7C*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FDD80, 0x800FDD80) //this is a jump label
/*800FDD80 000FAB80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800FDD84 000FAB84*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FDD88 000FAB88*/ PPC::Runtime::ASM::beq(.L_800FDDB4);
/*800FDD8C 000FAB8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDD90 000FAB90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*800FDD94 000FAB94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*800FDD98 000FAB98*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FDD9C 000FAB9C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FDDA0 000FABA0*/ PPC::Runtime::ASM::bl(fn_800F6090);
/*800FDDA4 000FABA4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FDDA8 000FABA8*/ PPC::Runtime::ASM::bne(.L_800FDDB4);
/*800FDDAC 000FABAC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDDB0 000FABB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800FDDB4, 0x800FDDB4) //this is a jump label
/*800FDDB4 000FABB4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800FDDB8 000FABB8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800FDDBC 000FABBC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDDC0 000FABC0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FDDC4 000FABC4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF91C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDDC8 000FABC8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FDDCC 000FABCC*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDDD0 000FABD0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FDDD4 000FABD4*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FDDD8 000FABD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800FDDDC 000FABDC*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FDDE0 000FABE0*/ PPC::Runtime::ASM::beq(.L_800FDE00);
/*800FDDE4 000FABE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDDE8 000FABE8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800FDDEC 000FABEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FDDF0 000FABF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF91C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDDF4 000FABF4*/ PPC::Runtime::ASM::bl(fn_800DBD6C);
/*800FDDF8 000FABF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDDFC 000FABFC*/ PPC::Runtime::ASM::bl(fn_800DBE18);
RUNTIME_PPC_JUMP_LABEL(.L_800FDE00, 0x800FDE00) //this is a jump label
/*800FDE00 000FAC00*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800FDE04 000FAC04*/ PPC::Runtime::ASM::b(.L_800FDF20);
RUNTIME_PPC_JUMP_LABEL(.L_800FDE08, 0x800FDE08) //this is a jump label
/*800FDE08 000FAC08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800FDE0C 000FAC0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800FDE10 000FAC10*/ PPC::Runtime::ASM::lwz(context->r23, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDE14 000FAC14*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FDE18 000FAC18*/ PPC::Runtime::ASM::bne(.L_800FDE24);
/*800FDE1C 000FAC1C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDE20 000FAC20*/ PPC::Runtime::ASM::b(.L_800FDE74);
RUNTIME_PPC_JUMP_LABEL(.L_800FDE24, 0x800FDE24) //this is a jump label
/*800FDE24 000FAC24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDE28 000FAC28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r23));
/*800FDE2C 000FAC2C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FDE30 000FAC30*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FDE34 000FAC34*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*800FDE38 000FAC38*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*800FDE3C 000FAC3C*/ PPC::Runtime::ASM::bne(.L_800FDE54);
/*800FDE40 000FAC40*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1007 @ Get_MemoryOffset_HighBit);
/*800FDE44 000FAC44*/ PPC::Runtime::ASM::li(context->r4, 0x150);
/*800FDE48 000FAC48*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1007 @ Get_MemoryOffset_LowBit);
/*800FDE4C 000FAC4C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6260 @ Get_MemoryOffset_SDA21);
/*800FDE50 000FAC50*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FDE54, 0x800FDE54) //this is a jump label
/*800FDE54 000FAC54*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r25));
/*800FDE58 000FAC58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800FDE5C 000FAC5C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDE60 000FAC60*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800FDE64 000FAC64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*800FDE68 000FAC68*/ PPC::Runtime::ASM::bge(.L_800FDE70);
/*800FDE6C 000FAC6C*/ PPC::Runtime::ASM::b(.L_800FDE74);
RUNTIME_PPC_JUMP_LABEL(.L_800FDE70, 0x800FDE70) //this is a jump label
/*800FDE70 000FAC70*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800FDE74, 0x800FDE74) //this is a jump label
/*800FDE74 000FAC74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*800FDE78 000FAC78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800FDE7C 000FAC7C*/ PPC::Runtime::ASM::ble(.L_800FDE8C);
/*800FDE80 000FAC80*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*800FDE84 000FAC84*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FDE88 000FAC88*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FDE8C, 0x800FDE8C) //this is a jump label
/*800FDE8C 000FAC8C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800FDE90 000FAC90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*800FDE94 000FAC94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*800FDE98 000FAC98*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FDE9C 000FAC9C*/ PPC::Runtime::ASM::beq(.L_800FDEC8);
/*800FDEA0 000FACA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDEA4 000FACA4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FDEA8 000FACA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r23));
/*800FDEAC 000FACAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FDEB0 000FACB0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FDEB4 000FACB4*/ PPC::Runtime::ASM::bl(fn_800F6090);
/*800FDEB8 000FACB8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FDEBC 000FACBC*/ PPC::Runtime::ASM::bne(.L_800FDEC8);
/*800FDEC0 000FACC0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDEC4 000FACC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800FDEC8, 0x800FDEC8) //this is a jump label
/*800FDEC8 000FACC8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800FDECC 000FACCC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*800FDED0 000FACD0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDED4 000FACD4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FDED8 000FACD8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF91C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDEDC 000FACDC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*800FDEE0 000FACE0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDEE4 000FACE4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FDEE8 000FACE8*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FDEEC 000FACEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*800FDEF0 000FACF0*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FDEF4 000FACF4*/ PPC::Runtime::ASM::beq(.L_800FDF14);
/*800FDEF8 000FACF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDEFC 000FACFC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800FDF00 000FAD00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FDF04 000FAD04*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF91C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDF08 000FAD08*/ PPC::Runtime::ASM::bl(fn_800DBD6C);
/*800FDF0C 000FAD0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDF10 000FAD10*/ PPC::Runtime::ASM::bl(fn_800DBE18);
RUNTIME_PPC_JUMP_LABEL(.L_800FDF14, 0x800FDF14) //this is a jump label
/*800FDF14 000FAD14*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*800FDF18 000FAD18*/ PPC::Runtime::ASM::b(.L_800FDF20);
RUNTIME_PPC_JUMP_LABEL(.L_800FDF1C, 0x800FDF1C) //this is a jump label
/*800FDF1C 000FAD1C*/ PPC::Runtime::ASM::li(context->r3, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FDF20, 0x800FDF20) //this is a jump label
/*800FDF20 000FAD20*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800FDF24 000FAD24*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800FDF28 000FAD28*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800FDF2C 000FAD2C*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*800FDF30 000FAD30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800FDF34 000FAD34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FDF38 000FAD38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800FDF3C 000FAD3C*/ PPC::Runtime::ASM::blr();
}