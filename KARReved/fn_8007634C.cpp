//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000AECC.hpp"
#include "fn_8000AECC.hpp"
#include "fn_80286F74.hpp"



void fn_8007634C(PPC::Runtime::GCContext* context)
{
/*8007634C 0007314C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80076350 00073150*/ PPC::Runtime::ASM::mflr(context->r0);
/*80076354 00073154*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80076358 00073158*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007635C 0007315C*/ PPC::Runtime::ASM::li(context->r31, STRUCT_BYTE4_COUNT_1805DD5D8 @ Get_MemoryOffset_SDA21);
/*80076360 00073160*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80076364 00073164*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80076368 00073168*/ PPC::Runtime::ASM::bl(fn_8000AECC);
/*8007636C 0007316C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80076370 00073170*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x13);
/*80076374 00073174*/ PPC::Runtime::ASM::beq(.L_80076388);
/*80076378 00073178*/ PPC::Runtime::ASM::bl(fn_8000AECC);
/*8007637C 0007317C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80076380 00073180*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x14);
/*80076384 00073184*/ PPC::Runtime::ASM::bne(.L_80076390);
RUNTIME_PPC_JUMP_LABEL(.L_80076388, 0x80076388) //this is a jump label
/*80076388 00073188*/ PPC::Runtime::ASM::bl(fn_80286F74);
/*8007638C 0007318C*/ PPC::Runtime::ASM::b(.L_80076394);
RUNTIME_PPC_JUMP_LABEL(.L_80076390, 0x80076390) //this is a jump label
/*80076390 00073190*/ PPC::Runtime::ASM::bl(fn_HSD_PadRumblePauseAll);
RUNTIME_PPC_JUMP_LABEL(.L_80076394, 0x80076394) //this is a jump label
/*80076394 00073194*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80076398 00073198*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8007639C 0007319C*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*800763A0 000731A0*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805DD5D8 @ Get_MemoryOffset_SDA21);
/*800763A4 000731A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800763A8 000731A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800763AC 000731AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800763B0 000731B0*/ PPC::Runtime::ASM::bne(.L_800763C8);
/*800763B4 000731B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800763B8 000731B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DED04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800763BC 000731BC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800763C0 000731C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800763C4 000731C4*/ PPC::Runtime::ASM::b(.L_800763D8);
RUNTIME_PPC_JUMP_LABEL(.L_800763C8, 0x800763C8) //this is a jump label
/*800763C8 000731C8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800763CC 000731CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DED0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800763D0 000731D0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800763D4 000731D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800763D8, 0x800763D8) //this is a jump label
/*800763D8 000731D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800763DC 000731DC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800763E0 000731E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a, context->r3));
/*800763E4 000731E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800763E8 000731E8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r3));
/*800763EC 000731EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800763F0 000731F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800763F4 000731F4*/ PPC::Runtime::ASM::bne(.L_80076474);
/*800763F8 000731F8*/ PPC::Runtime::ASM::mulli(context->r30, context->r30, 0xc);
/*800763FC 000731FC*/ PPC::Runtime::ASM::lis(context->r5, StructWithStructs_43 @ Get_MemoryOffset_HighBit);
/*80076400 00073200*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80076404 00073204*/ PPC::Runtime::ASM::li(context->r4, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/*80076408 00073208*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructWithStructs_43 @ Get_MemoryOffset_LowBit);
/*8007640C 0007320C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80076410 00073210*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DED14 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80076414 00073214*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r30);
/* 80076418 00073218  4C C6 32 42 */ crset context->cr1eq
/*8007641C 0007321C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80076420 00073220*/ PPC::Runtime::ASM::lis(context->r4, StructWithStructs_43 @ Get_MemoryOffset_HighBit);
/*80076424 00073224*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80076428 00073228*/ PPC::Runtime::ASM::addi(context->r0, context->r4, StructWithStructs_43 @ Get_MemoryOffset_LowBit);
/*8007642C 0007322C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80076430 00073230*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r30);
/*80076434 00073234*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DED18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80076438 00073238*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8007643C 0007323C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/* 80076440 00073240  4C C6 32 42 */ crset context->cr1eq
/*80076444 00073244*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80076448 00073248*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007644C 0007324C*/ PPC::Runtime::ASM::lis(context->r3, StructWithStructs_43 @ Get_MemoryOffset_HighBit);
/*80076450 00073250*/ PPC::Runtime::ASM::addi(context->r0, context->r3, StructWithStructs_43 @ Get_MemoryOffset_LowBit);
/*80076454 00073254*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80076458 00073258*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r30);
/*8007645C 0007325C*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80076460 00073260*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80076464 00073264*/ PPC::Runtime::ASM::li(context->r4, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/* 80076468 00073268  4C C6 32 42 */ crset context->cr1eq
/*8007646C 0007326C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80076470 00073270*/ PPC::Runtime::ASM::b(.L_800764EC);
RUNTIME_PPC_JUMP_LABEL(.L_80076474, 0x80076474) //this is a jump label
/*80076474 00073274*/ PPC::Runtime::ASM::mulli(context->r30, context->r30, 0xc);
/*80076478 00073278*/ PPC::Runtime::ASM::lis(context->r5, StructWithStructs_45 @ Get_MemoryOffset_HighBit);
/*8007647C 0007327C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80076480 00073280*/ PPC::Runtime::ASM::li(context->r4, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/*80076484 00073284*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructWithStructs_45 @ Get_MemoryOffset_LowBit);
/*80076488 00073288*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007648C 0007328C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DED14 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80076490 00073290*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r30);
/* 80076494 00073294  4C C6 32 42 */ crset context->cr1eq
/*80076498 00073298*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8007649C 0007329C*/ PPC::Runtime::ASM::lis(context->r4, StructWithStructs_45 @ Get_MemoryOffset_HighBit);
/*800764A0 000732A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800764A4 000732A4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, StructWithStructs_45 @ Get_MemoryOffset_LowBit);
/*800764A8 000732A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800764AC 000732AC*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r30);
/*800764B0 000732B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DED18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800764B4 000732B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800764B8 000732B8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/* 800764BC 000732BC  4C C6 32 42 */ crset context->cr1eq
/*800764C0 000732C0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*800764C4 000732C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800764C8 000732C8*/ PPC::Runtime::ASM::lis(context->r3, StructWithStructs_45 @ Get_MemoryOffset_HighBit);
/*800764CC 000732CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, StructWithStructs_45 @ Get_MemoryOffset_LowBit);
/*800764D0 000732D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800764D4 000732D4*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r30);
/*800764D8 000732D8*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*800764DC 000732DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800764E0 000732E0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/* 800764E4 000732E4  4C C6 32 42 */ crset context->cr1eq
/*800764E8 000732E8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_800764EC, 0x800764EC) //this is a jump label
/*800764EC 000732EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800764F0 000732F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800764F4 000732F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800764F8 000732F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800764FC 000732FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80076500 00073300*/ PPC::Runtime::ASM::blr();
}