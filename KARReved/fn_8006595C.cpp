//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_InitCamera.hpp"



void fn_8006595C(PPC::Runtime::GCContext* context)
{
/*8006595C 0006275C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80065960 00062760*/ PPC::Runtime::ASM::mflr(context->r0);
/*80065964 00062764*/ PPC::Runtime::ASM::lis(context->r3, lbl_80550D58 @ Get_MemoryOffset_HighBit);
/*80065968 00062768*/ PPC::Runtime::ASM::li(context->r4, 0x60);
/*8006596C 0006276C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80065970 00062770*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80550D58 @ Get_MemoryOffset_LowBit);
/*80065974 00062774*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80065978 00062778*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006597C 0006277C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80065980 00062780*/ PPC::Runtime::ASM::lis(context->r3, lbl_80550D58 @ Get_MemoryOffset_HighBit);
/*80065984 00062784*/ PPC::Runtime::ASM::addic.(context->r0, context->r3, lbl_80550D58 @ Get_MemoryOffset_LowBit);
/*80065988 00062788*/ PPC::Runtime::ASM::bne(.L_800659A0);
/*8006598C 0006278C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_213 @ Get_MemoryOffset_HighBit);
/*80065990 00062790*/ PPC::Runtime::ASM::li(context->r4, 0xfb);
/*80065994 00062794*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_213 @ Get_MemoryOffset_LowBit);
/*80065998 00062798*/ PPC::Runtime::ASM::li(context->r5, lbl_805D52F0 @ Get_MemoryOffset_SDA21);
/*8006599C 0006279C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800659A0, 0x800659A0) //this is a jump label
/*800659A0 000627A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80550D58 @ Get_MemoryOffset_HighBit);
/*800659A4 000627A4*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*800659A8 000627A8*/ PPC::Runtime::ASM::addic.(context->r3, context->r3, lbl_80550D58 @ Get_MemoryOffset_LowBit);
/*800659AC 000627AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800659B0 000627B0*/ PPC::Runtime::ASM::bne(.L_800659C8);
/*800659B4 000627B4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_213 @ Get_MemoryOffset_HighBit);
/*800659B8 000627B8*/ PPC::Runtime::ASM::li(context->r4, 0x116);
/*800659BC 000627BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_213 @ Get_MemoryOffset_LowBit);
/*800659C0 000627C0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D52F0 @ Get_MemoryOffset_SDA21);
/*800659C4 000627C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800659C8, 0x800659C8) //this is a jump label
/*800659C8 000627C8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80550D58 @ Get_MemoryOffset_HighBit);
/*800659CC 000627CC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800659D0 000627D0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80550D58 @ Get_MemoryOffset_LowBit);
/*800659D4 000627D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800659D8 000627D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800659DC 000627DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*800659E0 000627E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800659E4 000627E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*800659E8 000627E8*/ PPC::Runtime::ASM::b(.L_80065A08);
RUNTIME_PPC_JUMP_LABEL(.L_800659EC, 0x800659EC) //this is a jump label
/*800659EC 000627EC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800659F0 000627F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*800659F4 000627F4*/ PPC::Runtime::ASM::bne(.L_80065A04);
/*800659F8 000627F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*800659FC 000627FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*80065A00 00062800*/ PPC::Runtime::ASM::beq(.L_80065A10);
RUNTIME_PPC_JUMP_LABEL(.L_80065A04, 0x80065A04) //this is a jump label
/*80065A04 00062804*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80065A08, 0x80065A08) //this is a jump label
/*80065A08 00062808*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80065A0C 0006280C*/ PPC::Runtime::ASM::bne(.L_800659EC);
RUNTIME_PPC_JUMP_LABEL(.L_80065A10, 0x80065A10) //this is a jump label
/*80065A10 00062810*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80065A14 00062814*/ PPC::Runtime::ASM::bne(.L_80065A64);
/*80065A18 00062818*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*80065A1C 0006281C*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*80065A20 00062820*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80065A24 00062824*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*80065A28 00062828*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80065A2C 0006282C*/ PPC::Runtime::ASM::bl(fn_InitCamera);
/*80065A30 00062830*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80065A34 00062834*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80065A38 00062838*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80065A3C 0006283C*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80065A40 00062840*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A29C @ Get_MemoryOffset_HighBit);
/*80065A44 00062844*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80065A48 00062848*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A29C @ Get_MemoryOffset_LowBit);
/*80065A4C 0006284C*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*80065A50 00062850*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80065A54 00062854*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80065A58 00062858*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80065A5C 0006285C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80065A60 00062860*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80065A64, 0x80065A64) //this is a jump label
/*80065A64 00062864*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80065A68 00062868*/ PPC::Runtime::ASM::bl(fn_HSD_FogSet?);
/*80065A6C 0006286C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80065A70 00062870*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80065A74 00062874*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80065A78 00062878*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80065A7C 0006287C*/ PPC::Runtime::ASM::blr();
}