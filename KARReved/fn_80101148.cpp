//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7CF4.hpp"
#include "fn_80009534.hpp"
#include "fn_800F7E70.hpp"
#include "fn_killWhispy.hpp"



void fn_80101148(PPC::Runtime::GCContext* context)
{
/*80101148 000FDF48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8010114C 000FDF4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80101150 000FDF50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80101154 000FDF54*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80101158 000FDF58*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*8010115C 000FDF5C*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80101160 000FDF60*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_84 @ Get_MemoryOffset_HighBit);
/*80101164 000FDF64*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*80101168 000FDF68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*8010116C 000FDF6C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, StructWithFuncPtrs_84 @ Get_MemoryOffset_LowBit);
/*80101170 000FDF70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x35);
/*80101174 000FDF74*/ PPC::Runtime::ASM::beq(.L_80101188);
/*80101178 000FDF78*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x78);
/*8010117C 000FDF7C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xe4);
/*80101180 000FDF80*/ PPC::Runtime::ASM::li(context->r4, 0x1ab);
/*80101184 000FDF84*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80101188, 0x80101188) //this is a jump label
/*80101188 000FDF88*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8010118C 000FDF8C*/ PPC::Runtime::ASM::bne(.L_801011A0);
/*80101190 000FDF90*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x78);
/*80101194 000FDF94*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x108);
/*80101198 000FDF98*/ PPC::Runtime::ASM::li(context->r4, 0x1ac);
/*8010119C 000FDF9C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801011A0, 0x801011A0) //this is a jump label
/*801011A0 000FDFA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*801011A4 000FDFA4*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*801011A8 000FDFA8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801011AC 000FDFAC*/ PPC::Runtime::ASM::bl(fn_801C7CF4);
/*801011B0 000FDFB0*/ PPC::Runtime::ASM::bl(fn_80009534);
/*801011B4 000FDFB4*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*801011B8 000FDFB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801011BC 000FDFBC*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*801011C0 000FDFC0*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*801011C4 000FDFC4*/ PPC::Runtime::ASM::blt(.L_801011D8);
/*801011C8 000FDFC8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x78);
/*801011CC 000FDFCC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x118);
/*801011D0 000FDFD0*/ PPC::Runtime::ASM::li(context->r4, 0x1b8);
/*801011D4 000FDFD4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801011D8, 0x801011D8) //this is a jump label
/*801011D8 000FDFD8*/ PPC::Runtime::ASM::extsb(context->r0, context->r26);
/*801011DC 000FDFDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*801011E0 000FDFE0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801011E4 000FDFE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*801011E8 000FDFE8*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801011EC 000FDFEC*/ PPC::Runtime::ASM::bl(fn_800F7E70);
/*801011F0 000FDFF0*/ PPC::Runtime::ASM::mr(context->r30, context->r24);
/*801011F4 000FDFF4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801011F8 000FDFF8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*801011FC 000FDFFC*/ PPC::Runtime::ASM::b(.L_801012A4);
RUNTIME_PPC_JUMP_LABEL(.L_80101200, 0x80101200) //this is a jump label
/* 80101200 000FE000  57 80 07 FF */ clrlwi. context->r0 , context->r28 , 31
/*80101204 000FE004*/ PPC::Runtime::ASM::beq(.L_80101298);
/*80101208 000FE008*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010120C 000FE00C*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*80101210 000FE010*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*80101214 000FE014*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*80101218 000FE018*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r24));
/*8010121C 000FE01C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*80101220 000FE020*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x34);
/*80101224 000FE024*/ PPC::Runtime::ASM::beq(.L_80101238);
/*80101228 000FE028*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x78);
/*8010122C 000FE02C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x88);
/*80101230 000FE030*/ PPC::Runtime::ASM::li(context->r4, 0x145);
/*80101234 000FE034*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80101238, 0x80101238) //this is a jump label
/*80101238 000FE038*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r25));
/* 8010123C 000FE03C  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*80101240 000FE040*/ PPC::Runtime::ASM::bne(.L_80101298);
/*80101244 000FE044*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r25));
/*80101248 000FE048*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8010124C 000FE04C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r25));
/*80101250 000FE050*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80101254 000FE054*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r25));
/*80101258 000FE058*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r25));
/*8010125C 000FE05C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80101260 000FE060*/ PPC::Runtime::ASM::bgt(.L_80101298);
/*80101264 000FE064*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r24));
/*80101268 000FE068*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010126C 000FE06C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80101270 000FE070*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80101274 000FE074*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80101278 000FE078*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8010127C 000FE07C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF94C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80101280 000FE080*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80101284 000FE084*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80101288 000FE088*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*8010128C 000FE08C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80101290 000FE090*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80101294 000FE094*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_80101298, 0x80101298) //this is a jump label
/*80101298 000FE098*/ PPC::Runtime::ASM::srwi(context->r28, context->r28, 1);
/*8010129C 000FE09C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*801012A0 000FE0A0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801012A4, 0x801012A4) //this is a jump label
/*801012A4 000FE0A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*801012A8 000FE0A8*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*801012AC 000FE0AC*/ PPC::Runtime::ASM::blt(.L_80101200);
/*801012B0 000FE0B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801012B4 000FE0B4*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*801012B8 000FE0B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801012BC 000FE0BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801012C0 000FE0C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801012C4 000FE0C4*/ PPC::Runtime::ASM::blr();
}