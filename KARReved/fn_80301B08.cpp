//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF844.hpp"
#include "fn_80379784.hpp"
#include "fn_80381D6C.hpp"



void fn_80301B08(PPC::Runtime::GCContext* context)
{
/*80301B08 002FE908*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80301B0C 002FE90C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80301B10 002FE910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80301B14 002FE914*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80301B18 002FE918*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80301B1C 002FE91C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80301B20 002FE920*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80301B24 002FE924*/ PPC::Runtime::ASM::bl(fn_802DF844);
/*80301B28 002FE928*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DB7B8 @ Get_MemoryOffset_HighBit);
/*80301B2C 002FE92C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80301B30 002FE930*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804DB7B8 @ Get_MemoryOffset_LowBit);
/*80301B34 002FE934*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80301B38 002FE938*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80301B3C 002FE93C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80301B40 002FE940*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80301B44 002FE944*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r3));
/*80301B48 002FE948*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*80301B4C 002FE94C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80301B50 002FE950*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x44);
/*80301B54 002FE954*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80301B58 002FE958*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r5));
/*80301B5C 002FE95C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 80301B60 002FE960  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80301B64 002FE964*/ PPC::Runtime::ASM::bne(.L_80301B78);
/*80301B68 002FE968*/ PPC::Runtime::ASM::li(context->r3, RandomStructBlob_64 @ Get_MemoryOffset_SDA21);
/*80301B6C 002FE96C*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*80301B70 002FE970*/ PPC::Runtime::ASM::li(context->r5, RandomStructBlob_63_WithNullValue @ Get_MemoryOffset_SDA21);
/*80301B74 002FE974*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80301B78, 0x80301B78) //this is a jump label
/*80301B78 002FE978*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80301B7C 002FE97C*/ PPC::Runtime::ASM::bne(.L_80301B90);
/*80301B80 002FE980*/ PPC::Runtime::ASM::li(context->r3, RandomStructBlob_64 @ Get_MemoryOffset_SDA21);
/*80301B84 002FE984*/ PPC::Runtime::ASM::li(context->r4, 0x496);
/*80301B88 002FE988*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 4 @ Get_MemoryOffset_SDA21);
/*80301B8C 002FE98C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80301B90, 0x80301B90) //this is a jump label
/*80301B90 002FE990*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80301B94 002FE994*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*80301B98 002FE998*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*80301B9C 002FE99C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80301BA0 002FE9A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80301BA4 002FE9A4*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*80301BA8 002FE9A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80301BAC 002FE9AC*/ PPC::Runtime::ASM::beq(.L_80301BF0);
/*80301BB0 002FE9B0*/ PPC::Runtime::ASM::bne(.L_80301BC4);
/*80301BB4 002FE9B4*/ PPC::Runtime::ASM::li(context->r3, RandomStructBlob_64 @ Get_MemoryOffset_SDA21);
/*80301BB8 002FE9B8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80301BBC 002FE9BC*/ PPC::Runtime::ASM::li(context->r5, RandomStructBlob_63_WithNullValue @ Get_MemoryOffset_SDA21);
/*80301BC0 002FE9C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80301BC4, 0x80301BC4) //this is a jump label
/*80301BC4 002FE9C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80301BC8 002FE9C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80301BCC 002FE9CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80301BD0 002FE9D0*/ PPC::Runtime::ASM::bne(.L_80301BE0);
/*80301BD4 002FE9D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80301BD8 002FE9D8*/ PPC::Runtime::ASM::beq(.L_80301BE0);
/*80301BDC 002FE9DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80301BE0, 0x80301BE0) //this is a jump label
/* 80301BE0 002FE9E0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80301BE4 002FE9E4*/ PPC::Runtime::ASM::bne(.L_80301BF0);
/*80301BE8 002FE9E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80301BEC 002FE9EC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80301BF0, 0x80301BF0) //this is a jump label
/*80301BF0 002FE9F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80301BF4 002FE9F4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80301BF8 002FE9F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r5));
/*80301BFC 002FE9FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r5));
/*80301C00 002FEA00*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*80301C04 002FEA04*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80301C08 002FEA08*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80301C0C 002FEA0C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80301C10 002FEA10*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*80301C14 002FEA14*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x44);
/*80301C18 002FEA18*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*80301C1C 002FEA1C*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*80301C20 002FEA20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80301C24 002FEA24*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80301C28 002FEA28*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80301C2C 002FEA2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r3));
/*80301C30 002FEA30*/ PPC::Runtime::ASM::bl(fn_8038D158);
/*80301C34 002FEA34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80301C38 002FEA38*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_HighBit);
/*80301C3C 002FEA3C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_LowBit);
/*80301C40 002FEA40*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3BB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80301C44 002FEA44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r4));
/*80301C48 002FEA48*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80301C4C 002FEA4C*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*80301C50 002FEA50*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80301C54 002FEA54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80301C58 002FEA58*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/* 80301C5C 002FEA5C  4C C6 32 42 */ crset context->cr1eq
/*80301C60 002FEA60*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*80301C64 002FEA64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80301C68 002FEA68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r3));
/*80301C6C 002FEA6C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80301C70 002FEA70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*80301C74 002FEA74*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80301C78 002FEA78*/ PPC::Runtime::ASM::bctrl();
/*80301C7C 002FEA7C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80301C80 002FEA80*/ PPC::Runtime::ASM::lis(context->r3, 0x7);
/*80301C84 002FEA84*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x1d);
/*80301C88 002FEA88*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80301C8C 002FEA8C*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x390);
/*80301C90 002FEA90*/ PPC::Runtime::ASM::bl(fn_80379784);
/*80301C94 002FEA94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80301C98 002FEA98*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80301C9C 002FEA9C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80301CA0 002FEAA0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xbb4);
/*80301CA4 002FEAA4*/ PPC::Runtime::ASM::bl(fn_80381D6C);
/*80301CA8 002FEAA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80301CAC 002FEAAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80301CB0 002FEAB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80301CB4 002FEAB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80301CB8 002FEAB8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80301CBC 002FEABC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80301CC0 002FEAC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80301CC4 002FEAC4*/ PPC::Runtime::ASM::blr();
}